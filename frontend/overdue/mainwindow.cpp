#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QNetworkRequest>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , manager(new QNetworkAccessManager(this))
{
    ui->setupUi(this);

    connect(manager, &QNetworkAccessManager::finished,
            this, &MainWindow::onNetworkReplyFinished);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_clicked()
{
    QUrl url("http://localhost:3000/car");
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject json;
    json["brand"] = ui->brand->text();
    json["model"] = ui->model->text();

    manager->post(request, QJsonDocument(json).toJson());
}


void MainWindow::on_update_clicked()
{
    int carId = ui->idCar->value();
    QUrl url(QString("http://localhost:3000/car/%1").arg(carId));
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject json;
    json["brand"] = ui->brand->text();
    json["model"] = ui->model->text();

    manager->put(request, QJsonDocument(json).toJson());
}


void MainWindow::on_del_clicked()
{
    int carId = ui->idCar->value();
    QUrl url(QString("http://localhost:3000/car/%1").arg(carId));
    QNetworkRequest request(url);

    manager->deleteResource(request);
}


void MainWindow::on_update_list_clicked()
{
    QUrl url("http://localhost:3000/car");
    QNetworkRequest request(url);

    manager->get(request);
}

void MainWindow::on_getid_clicked()
{
    int carId = ui->idCar->value();
    QUrl url(QString("http://localhost:3000/car/%1").arg(carId));
    QNetworkRequest request(url);

    manager->get(request);
}


void MainWindow::onNetworkReplyFinished(QNetworkReply *reply)
{
    QByteArray data = reply->readAll();
    reply->deleteLater();

    if (reply->error()) {
        ui->list->appendPlainText("Error: " + reply->errorString());
        return;
    }

    if (reply->operation() == QNetworkAccessManager::GetOperation) {
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonArray arr = doc.array();

        ui->list->clear();
        for (const QJsonValue &val : arr) {
            QJsonObject obj = val.toObject();
            QString line = QString("ID %1: %2 - %3")
                               .arg(obj["id_car"].toInt())
                               .arg(obj["brand"].toString())
                               .arg(obj["model"].toString());
            ui->list->appendPlainText(line);
        }
    } else {

        ui->list->appendPlainText("Done: " + QString::fromUtf8(data));
    }
}

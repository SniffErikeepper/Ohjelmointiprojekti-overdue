/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *update_list;
    QPushButton *delete_2;
    QPushButton *update;
    QPushButton *add;
    QPlainTextEdit *plainTextEdit;
    QSpinBox *idCar;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *id;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(436, 465);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        update_list = new QPushButton(centralwidget);
        update_list->setObjectName(QString::fromUtf8("update_list"));
        update_list->setGeometry(QRect(320, 140, 91, 61));
        delete_2 = new QPushButton(centralwidget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(220, 140, 91, 61));
        update = new QPushButton(centralwidget);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(120, 140, 91, 61));
        add = new QPushButton(centralwidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(20, 140, 91, 61));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(20, 210, 391, 211));
        idCar = new QSpinBox(centralwidget);
        idCar->setObjectName(QString::fromUtf8("idCar"));
        idCar->setGeometry(QRect(20, 90, 51, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 90, 121, 31));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 90, 131, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 65, 61, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 65, 61, 21));
        label_2->setFont(font);
        id = new QLabel(centralwidget);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(20, 70, 49, 16));
        id->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 436, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        update_list->setText(QCoreApplication::translate("MainWindow", "P\303\244ivit\303\244 lista", nullptr));
        delete_2->setText(QCoreApplication::translate("MainWindow", "Poista", nullptr));
        update->setText(QCoreApplication::translate("MainWindow", "P\303\244ivit\303\244 tietue", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "Lis\303\244\303\244 tietue", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Malli:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Merkki:", nullptr));
        id->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

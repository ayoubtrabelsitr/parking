/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QTimeEdit *timeEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(728, 375);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 131, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(130, 180, 261, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(590, 40, 81, 41));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);\n"
"font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        lcdNumber->setDigitCount(3);
        lcdNumber->setSegmentStyle(QLCDNumber::SegmentStyle::Filled);
        lcdNumber->setProperty("value", QVariant(0.000000000000000));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 90, 221, 20));
        label->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 700 12pt \"Segoe UI\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 50, 121, 20));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 700 12pt \"Segoe UI\";"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(80, 120, 251, 41));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(470, 190, 118, 29));
        timeEdit->setWrapping(false);
        timeEdit->setTimeSpec(Qt::TimeSpec::LocalTime);
        timeEdit->setTime(QTime(1, 0, 1));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 728, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Entrer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Sortir", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Entrer votre immatr", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Places Dispo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

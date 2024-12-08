/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(829, 536);
        MainWindow->setMaximumSize(QSize(829, 536));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 184, 211);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(410, 140, 261, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 19, 56);\n"
"font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 19, 56);\n"
"font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(630, 330, 101, 61));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 19, 56);\n"
"font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        lcdNumber->setDigitCount(3);
        lcdNumber->setSegmentStyle(QLCDNumber::SegmentStyle::Filled);
        lcdNumber->setProperty("value", QVariant(0.000000000000000));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 150, 221, 20));
        label->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 700 12pt \"Segoe UI\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(420, 340, 201, 41));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 700 19pt \"Segoe UI\";"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 180, 251, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft JhengHei UI")});
        font.setPointSize(18);
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        lineEdit->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"border-color: rgb(85, 0, 0);\n"
"border-color: rgb(0, 0, 0);"));
        lineEdit->setMaxLength(15);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 300, 291, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(horizontalLayoutWidget);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        widget->setMaximumSize(QSize(80, 50));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/res/calendrier.png);"));

        horizontalLayout->addWidget(widget);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setEnabled(false);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 700 13pt \"Segoe UI\";"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(30, 400, 291, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(horizontalLayoutWidget_2);
        widget_2->setObjectName("widget_2");
        widget_2->setMaximumSize(QSize(80, 50));
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/res/heures.png);"));

        horizontalLayout_2->addWidget(widget_2);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 700 13pt \"Segoe UI\";"));
        label_3->setLineWidth(2);
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_3->setWordWrap(true);

        horizontalLayout_2->addWidget(label_3);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(290, 10, 301, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(horizontalLayoutWidget_3);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("image: url(:/res/car.png);"));

        horizontalLayout_3->addWidget(widget_3);

        label_5 = new QLabel(horizontalLayoutWidget_3);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);\n"
"font: 700 26pt \"Segoe UI\";"));

        horizontalLayout_3->addWidget(label_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 829, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Parking", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Entrer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Sortir", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Entrer votre immatr", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Places Dispo", nullptr));
        lineEdit->setText(QString());
        label_4->setText(QString());
        label_3->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Parking ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

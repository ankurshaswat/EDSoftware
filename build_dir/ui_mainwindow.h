/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *xyDisplay;
    QSlider *x_rotation;
    QSlider *y_rotation;
    QSlider *z_rotation;
    QPushButton *xoffseter_inc;
    QPushButton *xoffseter_dec;
    QPushButton *yoffseter_inc;
    QPushButton *yoffseter_dec;
    QPushButton *zoffseter_inc;
    QPushButton *zoffseter_dec;
    QLabel *yzDisplay;
    QLabel *isometricView;
    QLabel *xzDisplay;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1081, 673);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        xyDisplay = new QLabel(centralwidget);
        xyDisplay->setObjectName(QStringLiteral("xyDisplay"));
        xyDisplay->setGeometry(QRect(460, 250, 331, 251));
        x_rotation = new QSlider(centralwidget);
        x_rotation->setObjectName(QStringLiteral("x_rotation"));
        x_rotation->setGeometry(QRect(260, 510, 471, 31));
        x_rotation->setOrientation(Qt::Horizontal);
        y_rotation = new QSlider(centralwidget);
        y_rotation->setObjectName(QStringLiteral("y_rotation"));
        y_rotation->setGeometry(QRect(260, 550, 471, 31));
        y_rotation->setOrientation(Qt::Horizontal);
        z_rotation = new QSlider(centralwidget);
        z_rotation->setObjectName(QStringLiteral("z_rotation"));
        z_rotation->setGeometry(QRect(260, 590, 471, 16));
        z_rotation->setOrientation(Qt::Horizontal);
        xoffseter_inc = new QPushButton(centralwidget);
        xoffseter_inc->setObjectName(QStringLiteral("xoffseter_inc"));
        xoffseter_inc->setGeometry(QRect(850, 510, 89, 25));
        xoffseter_dec = new QPushButton(centralwidget);
        xoffseter_dec->setObjectName(QStringLiteral("xoffseter_dec"));
        xoffseter_dec->setGeometry(QRect(750, 510, 89, 25));
        yoffseter_inc = new QPushButton(centralwidget);
        yoffseter_inc->setObjectName(QStringLiteral("yoffseter_inc"));
        yoffseter_inc->setGeometry(QRect(850, 550, 89, 25));
        yoffseter_dec = new QPushButton(centralwidget);
        yoffseter_dec->setObjectName(QStringLiteral("yoffseter_dec"));
        yoffseter_dec->setGeometry(QRect(750, 550, 89, 25));
        zoffseter_inc = new QPushButton(centralwidget);
        zoffseter_inc->setObjectName(QStringLiteral("zoffseter_inc"));
        zoffseter_inc->setGeometry(QRect(850, 590, 89, 25));
        zoffseter_dec = new QPushButton(centralwidget);
        zoffseter_dec->setObjectName(QStringLiteral("zoffseter_dec"));
        zoffseter_dec->setGeometry(QRect(750, 590, 89, 25));
        yzDisplay = new QLabel(centralwidget);
        yzDisplay->setObjectName(QStringLiteral("yzDisplay"));
        yzDisplay->setGeometry(QRect(10, 10, 291, 251));
        isometricView = new QLabel(centralwidget);
        isometricView->setObjectName(QStringLiteral("isometricView"));
        isometricView->setGeometry(QRect(510, 20, 281, 231));
        xzDisplay = new QLabel(centralwidget);
        xzDisplay->setObjectName(QStringLiteral("xzDisplay"));
        xzDisplay->setGeometry(QRect(20, 260, 301, 241));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 210, 67, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 480, 67, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(560, 210, 67, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(580, 460, 67, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 520, 67, 17));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 560, 67, 17));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 590, 67, 17));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(960, 550, 67, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1081, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        xyDisplay->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        xoffseter_inc->setText(QApplication::translate("MainWindow", "x++", nullptr));
        xoffseter_dec->setText(QApplication::translate("MainWindow", "x--", nullptr));
        yoffseter_inc->setText(QApplication::translate("MainWindow", "y++", nullptr));
        yoffseter_dec->setText(QApplication::translate("MainWindow", "y--", nullptr));
        zoffseter_inc->setText(QApplication::translate("MainWindow", "z++", nullptr));
        zoffseter_dec->setText(QApplication::translate("MainWindow", "z--", nullptr));
        yzDisplay->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        isometricView->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        xzDisplay->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QApplication::translate("MainWindow", "yz", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "xz", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "isometric", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "xy", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "xRotation", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "yRotation", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "zRotation", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Offsets", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
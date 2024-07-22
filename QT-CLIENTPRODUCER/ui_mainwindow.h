/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_5;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditIP;
    QLabel *label_4;
    QPushButton *pushButtonDisconnect;
    QPushButton *pushButtonConnect;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label;
    QSlider *horizontalSliderTime;
    QSlider *horizontalSliderMin;
    QLCDNumber *lcdNumberMax;
    QLabel *label_2;
    QLCDNumber *lcdNumberTime;
    QLCDNumber *lcdNumberMin;
    QSlider *horizontalSliderMax;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QLabel *labelStatus;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(639, 473);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1, 331, 47, 17));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(370, 0, 261, 411));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 361, 89));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditIP = new QLineEdit(layoutWidget);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));

        gridLayout->addWidget(lineEditIP, 1, 0, 1, 3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        pushButtonDisconnect = new QPushButton(layoutWidget);
        pushButtonDisconnect->setObjectName(QString::fromUtf8("pushButtonDisconnect"));

        gridLayout->addWidget(pushButtonDisconnect, 2, 2, 1, 1);

        pushButtonConnect = new QPushButton(layoutWidget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));

        gridLayout->addWidget(pushButtonConnect, 2, 0, 1, 2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(1, 101, 361, 151));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 2, 0, 1, 2);

        horizontalSliderTime = new QSlider(layoutWidget1);
        horizontalSliderTime->setObjectName(QString::fromUtf8("horizontalSliderTime"));
        horizontalSliderTime->setMinimum(1);
        horizontalSliderTime->setMaximum(60);
        horizontalSliderTime->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderTime, 2, 2, 1, 1);

        horizontalSliderMin = new QSlider(layoutWidget1);
        horizontalSliderMin->setObjectName(QString::fromUtf8("horizontalSliderMin"));
        horizontalSliderMin->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderMin, 0, 1, 1, 2);

        lcdNumberMax = new QLCDNumber(layoutWidget1);
        lcdNumberMax->setObjectName(QString::fromUtf8("lcdNumberMax"));

        gridLayout_2->addWidget(lcdNumberMax, 1, 3, 1, 1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lcdNumberTime = new QLCDNumber(layoutWidget1);
        lcdNumberTime->setObjectName(QString::fromUtf8("lcdNumberTime"));
        lcdNumberTime->setProperty("intValue", QVariant(1));

        gridLayout_2->addWidget(lcdNumberTime, 2, 3, 1, 1);

        lcdNumberMin = new QLCDNumber(layoutWidget1);
        lcdNumberMin->setObjectName(QString::fromUtf8("lcdNumberMin"));

        gridLayout_2->addWidget(lcdNumberMin, 0, 3, 1, 1);

        horizontalSliderMax = new QSlider(layoutWidget1);
        horizontalSliderMax->setObjectName(QString::fromUtf8("horizontalSliderMax"));
        horizontalSliderMax->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderMax, 1, 1, 1, 2);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 260, 361, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonStart = new QPushButton(layoutWidget2);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));

        horizontalLayout->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(layoutWidget2);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));

        horizontalLayout->addWidget(pushButtonStop);

        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        labelStatus->setGeometry(QRect(54, 331, 111, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 639, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderMin, SIGNAL(valueChanged(int)), lcdNumberMin, SLOT(display(int)));
        QObject::connect(horizontalSliderMax, SIGNAL(valueChanged(int)), lcdNumberMax, SLOT(display(int)));
        QObject::connect(horizontalSliderTime, SIGNAL(valueChanged(int)), lcdNumberTime, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        lineEditIP->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "IP do servidor", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "Desconectado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

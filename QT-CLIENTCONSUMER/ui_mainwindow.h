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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QLineEdit *lineEditIP;
    QListWidget *listWidgetIP;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonUpdate;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSliderTiming;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonStop;
    QLabel *label_3;
    QLabel *labelStatus;
    Plotter *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(575, 516);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));

        gridLayout->addWidget(pushButtonConnect, 2, 0, 1, 1);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName(QString::fromUtf8("pushButtonDisconnect"));

        gridLayout->addWidget(pushButtonDisconnect, 2, 1, 1, 1);

        lineEditIP = new QLineEdit(centralWidget);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));

        gridLayout->addWidget(lineEditIP, 1, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        listWidgetIP = new QListWidget(centralWidget);
        listWidgetIP->setObjectName(QString::fromUtf8("listWidgetIP"));

        verticalLayout->addWidget(listWidgetIP);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonUpdate = new QPushButton(centralWidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));

        horizontalLayout_3->addWidget(pushButtonUpdate);


        verticalLayout->addLayout(horizontalLayout_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName(QString::fromUtf8("horizontalSliderTiming"));
        horizontalSliderTiming->setMinimum(1);
        horizontalSliderTiming->setMaximum(60);
        horizontalSliderTiming->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderTiming);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setProperty("intValue", QVariant(1));

        horizontalLayout->addWidget(lcdNumber);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));

        horizontalLayout_2->addWidget(pushButtonStart);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));

        horizontalLayout_2->addWidget(pushButtonStop);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        labelStatus = new QLabel(centralWidget);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));

        gridLayout_3->addWidget(labelStatus, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        widget = new Plotter(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout_4->addWidget(widget);

        horizontalLayout_4->setStretch(1, 100);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 575, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderTiming, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP do servidor", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        lineEditIP->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        labelStatus->setText(QCoreApplication::translate("MainWindow", "Desconectado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

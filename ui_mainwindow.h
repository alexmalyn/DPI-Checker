/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *StatusMsg;
    QLabel *Display;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonStart;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ButtonStop;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label;
    QLabel *DPILabel;
    QLineEdit *DPISpin;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *DistanceSpin;
    QLabel *DistanceLabel;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *AboutLabel;
    QPushButton *ButtonAbout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *NWLabel;
    QPushButton *ButtonNW;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(737, 567);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(700, 550));
        MainWindow->setMaximumSize(QSize(850, 700));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        StatusMsg = new QLabel(centralwidget);
        StatusMsg->setObjectName(QString::fromUtf8("StatusMsg"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(StatusMsg->sizePolicy().hasHeightForWidth());
        StatusMsg->setSizePolicy(sizePolicy1);
        StatusMsg->setMinimumSize(QSize(0, 75));
        StatusMsg->setMaximumSize(QSize(16777215, 75));
        StatusMsg->setStyleSheet(QString::fromUtf8("font-size: 25px;\n"
""));
        StatusMsg->setAlignment(Qt::AlignCenter);
        StatusMsg->setMargin(25);

        horizontalLayout_6->addWidget(StatusMsg);

        Display = new QLabel(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        Display->setMinimumSize(QSize(210, 0));
        Display->setMaximumSize(QSize(210, 75));
        Display->setStyleSheet(QString::fromUtf8("font-size: 25px;"));
        Display->setAlignment(Qt::AlignCenter);
        Display->setMargin(25);

        horizontalLayout_6->addWidget(Display);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ButtonStart = new QPushButton(centralwidget);
        ButtonStart->setObjectName(QString::fromUtf8("ButtonStart"));
        ButtonStart->setMinimumSize(QSize(175, 80));
        ButtonStart->setMaximumSize(QSize(175, 80));
        ButtonStart->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
""));

        horizontalLayout->addWidget(ButtonStart);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ButtonStop = new QPushButton(centralwidget);
        ButtonStop->setObjectName(QString::fromUtf8("ButtonStop"));
        ButtonStop->setMinimumSize(QSize(175, 80));
        ButtonStop->setMaximumSize(QSize(175, 80));
        ButtonStop->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
""));

        horizontalLayout->addWidget(ButtonStop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(200, 16777215));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-size: 16px;\n"
""));

        gridLayout->addWidget(label, 1, 3, 1, 1);

        DPILabel = new QLabel(centralwidget);
        DPILabel->setObjectName(QString::fromUtf8("DPILabel"));
        sizePolicy1.setHeightForWidth(DPILabel->sizePolicy().hasHeightForWidth());
        DPILabel->setSizePolicy(sizePolicy1);
        DPILabel->setMinimumSize(QSize(100, 50));
        DPILabel->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        DPILabel->setFont(font);
        DPILabel->setStyleSheet(QString::fromUtf8("background-color: #f7d78b;\n"
"border: 1px solid;\n"
"border-color: #575757;"));
        DPILabel->setAlignment(Qt::AlignCenter);
        DPILabel->setMargin(15);

        gridLayout->addWidget(DPILabel, 0, 1, 1, 1);

        DPISpin = new QLineEdit(centralwidget);
        DPISpin->setObjectName(QString::fromUtf8("DPISpin"));
        DPISpin->setMinimumSize(QSize(100, 50));
        DPISpin->setMaximumSize(QSize(100, 50));
        QFont font1;
        font1.setPointSize(14);
        DPISpin->setFont(font1);
        DPISpin->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
""));
        DPISpin->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(DPISpin, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(45, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        DistanceSpin = new QLineEdit(centralwidget);
        DistanceSpin->setObjectName(QString::fromUtf8("DistanceSpin"));
        DistanceSpin->setMinimumSize(QSize(100, 50));
        DistanceSpin->setMaximumSize(QSize(100, 50));
        DistanceSpin->setFont(font1);
        DistanceSpin->setStyleSheet(QString::fromUtf8("border-radius: 20px;\n"
""));
        DistanceSpin->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(DistanceSpin, 1, 2, 1, 1);

        DistanceLabel = new QLabel(centralwidget);
        DistanceLabel->setObjectName(QString::fromUtf8("DistanceLabel"));
        sizePolicy1.setHeightForWidth(DistanceLabel->sizePolicy().hasHeightForWidth());
        DistanceLabel->setSizePolicy(sizePolicy1);
        DistanceLabel->setMinimumSize(QSize(100, 50));
        DistanceLabel->setMaximumSize(QSize(16777215, 50));
        DistanceLabel->setFont(font);
        DistanceLabel->setStyleSheet(QString::fromUtf8("background-color: #f7d78b;\n"
"border: 1px solid;\n"
"border-color: #575757;"));
        DistanceLabel->setAlignment(Qt::AlignCenter);
        DistanceLabel->setMargin(15);

        gridLayout->addWidget(DistanceLabel, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 4, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 0, 4, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font-size: 16px;\n"
""));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        AboutLabel = new QLabel(centralwidget);
        AboutLabel->setObjectName(QString::fromUtf8("AboutLabel"));
        AboutLabel->setMaximumSize(QSize(16777215, 100));
        AboutLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));

        horizontalLayout_4->addWidget(AboutLabel);

        ButtonAbout = new QPushButton(centralwidget);
        ButtonAbout->setObjectName(QString::fromUtf8("ButtonAbout"));
        sizePolicy.setHeightForWidth(ButtonAbout->sizePolicy().hasHeightForWidth());
        ButtonAbout->setSizePolicy(sizePolicy);
        ButtonAbout->setMinimumSize(QSize(50, 50));
        ButtonAbout->setMaximumSize(QSize(50, 50));
        ButtonAbout->setStyleSheet(QString::fromUtf8("font-size:20px;"));

        horizontalLayout_4->addWidget(ButtonAbout);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        NWLabel = new QLabel(centralwidget);
        NWLabel->setObjectName(QString::fromUtf8("NWLabel"));
        NWLabel->setMaximumSize(QSize(16777215, 100));
        NWLabel->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));

        horizontalLayout_5->addWidget(NWLabel);

        ButtonNW = new QPushButton(centralwidget);
        ButtonNW->setObjectName(QString::fromUtf8("ButtonNW"));
        sizePolicy.setHeightForWidth(ButtonNW->sizePolicy().hasHeightForWidth());
        ButtonNW->setSizePolicy(sizePolicy);
        ButtonNW->setMinimumSize(QSize(50, 50));
        ButtonNW->setMaximumSize(QSize(50, 50));
        ButtonNW->setStyleSheet(QString::fromUtf8("font-size:20px;"));

        horizontalLayout_5->addWidget(ButtonNW);


        verticalLayout->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 737, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DPI Checker", nullptr));
        StatusMsg->setText(QCoreApplication::translate("MainWindow", "Welcome.", nullptr));
        Display->setText(QCoreApplication::translate("MainWindow", "(0, 0)", nullptr));
        ButtonStart->setText(QCoreApplication::translate("MainWindow", "Start (Alt+Q)", nullptr));
        ButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop (Alt+W)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " inches", nullptr));
        DPILabel->setText(QCoreApplication::translate("MainWindow", "DPI", nullptr));
        DPISpin->setText(QCoreApplication::translate("MainWindow", "400", nullptr));
        DistanceSpin->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        DistanceLabel->setText(QCoreApplication::translate("MainWindow", "Distance", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "dots/inch", nullptr));
        AboutLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">About</span></p></body></html>", nullptr));
        ButtonAbout->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        NWLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">Not Working?</span></p></body></html>", nullptr));
        ButtonNW->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

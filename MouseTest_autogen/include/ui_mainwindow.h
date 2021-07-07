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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *StatusMsg;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonStart;
    QPushButton *ButtonStop;
    QLineEdit *Display;
    QGridLayout *topgrid;
    QLabel *DistanceLabel;
    QLabel *DPILabel;
    QSpinBox *DistanceSpin;
    QSpinBox *DPISpin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(676, 532);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: #292929;\n"
"	color: #e62c2c;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        StatusMsg = new QLineEdit(centralwidget);
        StatusMsg->setObjectName(QString::fromUtf8("StatusMsg"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(StatusMsg->sizePolicy().hasHeightForWidth());
        StatusMsg->setSizePolicy(sizePolicy);
        StatusMsg->setMinimumSize(QSize(350, 50));
        StatusMsg->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(9);
        StatusMsg->setFont(font);
        StatusMsg->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: #404040;\n"
"	color: #21c8ff;\n"
"	border: 1px solid gray;\n"
"}"));
        StatusMsg->setAlignment(Qt::AlignCenter);
        StatusMsg->setReadOnly(true);

        gridLayout->addWidget(StatusMsg, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        ButtonStart = new QPushButton(centralwidget);
        ButtonStart->setObjectName(QString::fromUtf8("ButtonStart"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ButtonStart->sizePolicy().hasHeightForWidth());
        ButtonStart->setSizePolicy(sizePolicy1);
        ButtonStart->setMinimumSize(QSize(0, 100));
        ButtonStart->setMaximumSize(QSize(16777215, 100));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Courier New")});
        font1.setPointSize(14);
        ButtonStart->setFont(font1);
        ButtonStart->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #303030;\n"
"	color: #E0E0E0;\n"
"}"));

        horizontalLayout->addWidget(ButtonStart);

        ButtonStop = new QPushButton(centralwidget);
        ButtonStop->setObjectName(QString::fromUtf8("ButtonStop"));
        sizePolicy1.setHeightForWidth(ButtonStop->sizePolicy().hasHeightForWidth());
        ButtonStop->setSizePolicy(sizePolicy1);
        ButtonStop->setMinimumSize(QSize(0, 100));
        ButtonStop->setMaximumSize(QSize(16777215, 100));
        ButtonStop->setFont(font1);
        ButtonStop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #303030;\n"
"	color: #E0E0E0;\n"
"}"));

        horizontalLayout->addWidget(ButtonStop);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 4);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        Display->setMinimumSize(QSize(200, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("MS Gothic")});
        font2.setPointSize(22);
        Display->setFont(font2);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: #B0B0B0;\n"
"	color: #000000;\n"
"	border: 1px solid gray;\n"
"}"));
        Display->setAlignment(Qt::AlignCenter);
        Display->setReadOnly(true);
        Display->setClearButtonEnabled(false);

        gridLayout->addWidget(Display, 3, 2, 1, 2);

        topgrid = new QGridLayout();
        topgrid->setObjectName(QString::fromUtf8("topgrid"));
        topgrid->setSizeConstraint(QLayout::SetNoConstraint);
        topgrid->setHorizontalSpacing(20);
        topgrid->setVerticalSpacing(0);
        DistanceLabel = new QLabel(centralwidget);
        DistanceLabel->setObjectName(QString::fromUtf8("DistanceLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(DistanceLabel->sizePolicy().hasHeightForWidth());
        DistanceLabel->setSizePolicy(sizePolicy2);
        DistanceLabel->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft Himalaya")});
        font3.setPointSize(22);
        font3.setBold(false);
        font3.setItalic(false);
        DistanceLabel->setFont(font3);
        DistanceLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #E0E0E0;\n"
"}\n"
""));
        DistanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        topgrid->addWidget(DistanceLabel, 1, 0, 1, 1);

        DPILabel = new QLabel(centralwidget);
        DPILabel->setObjectName(QString::fromUtf8("DPILabel"));
        sizePolicy2.setHeightForWidth(DPILabel->sizePolicy().hasHeightForWidth());
        DPILabel->setSizePolicy(sizePolicy2);
        DPILabel->setMaximumSize(QSize(16777215, 50));
        DPILabel->setFont(font3);
        DPILabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: #E0E0E0;\n"
"\n"
"}\n"
""));
        DPILabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        topgrid->addWidget(DPILabel, 0, 0, 1, 1);

        DistanceSpin = new QSpinBox(centralwidget);
        DistanceSpin->setObjectName(QString::fromUtf8("DistanceSpin"));
        DistanceSpin->setMinimumSize(QSize(0, 50));
        DistanceSpin->setMaximumSize(QSize(200, 16777215));
        QFont font4;
        font4.setPointSize(20);
        DistanceSpin->setFont(font4);
        DistanceSpin->setMinimum(1);
        DistanceSpin->setValue(10);

        topgrid->addWidget(DistanceSpin, 1, 1, 1, 1);

        DPISpin = new QSpinBox(centralwidget);
        DPISpin->setObjectName(QString::fromUtf8("DPISpin"));
        DPISpin->setMinimumSize(QSize(0, 50));
        DPISpin->setMaximumSize(QSize(200, 16777215));
        DPISpin->setFont(font4);
        DPISpin->setMaximum(16000);
        DPISpin->setSingleStep(50);
        DPISpin->setValue(400);

        topgrid->addWidget(DPISpin, 0, 1, 1, 1);


        gridLayout->addLayout(topgrid, 0, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 676, 20));
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
        StatusMsg->setText(QCoreApplication::translate("MainWindow", "Welcome to Mouse Checker!", nullptr));
        ButtonStart->setText(QCoreApplication::translate("MainWindow", "Start (Alt+Q)", nullptr));
        ButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop (Alt+W)", nullptr));
        Display->setText(QCoreApplication::translate("MainWindow", "NULL, NULL", nullptr));
        Display->setPlaceholderText(QCoreApplication::translate("MainWindow", "NULL, NULL", nullptr));
        DistanceLabel->setText(QCoreApplication::translate("MainWindow", "Distance (Inches)", nullptr));
        DPILabel->setText(QCoreApplication::translate("MainWindow", "DPI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

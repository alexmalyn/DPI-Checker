/********************************************************************************
** Form generated from reading UI file 'faq.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAQ_H
#define UI_FAQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FAQ
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *FAQ)
    {
        if (FAQ->objectName().isEmpty())
            FAQ->setObjectName(QString::fromUtf8("FAQ"));
        FAQ->resize(640, 563);
        FAQ->setMinimumSize(QSize(0, 550));
        verticalLayout = new QVBoxLayout(FAQ);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(FAQ);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        label->setMargin(50);

        verticalLayout->addWidget(label);


        retranslateUi(FAQ);

        QMetaObject::connectSlotsByName(FAQ);
    } // setupUi

    void retranslateUi(QDialog *FAQ)
    {
        FAQ->setWindowTitle(QCoreApplication::translate("FAQ", "Important", nullptr));
        label->setText(QCoreApplication::translate("FAQ", "<html><head/><body><p>This tool calculates the Euclidean norm between two coordinate points on your monitor's space. Make sure to not hit any borders while moving your mouse. Keep your distance fairly low depending on your DPI to prevent this from happening. Use accurate and strict measurement references and you will get accurate results.</p><p><span style=\" font-weight:600;\">How to Use:</span></p><p><span style=\" font-weight:600;\">1.</span> Enter your DPI and the Distance that you want to move your mouse in order to measure its real DPI. The DPI input does not affect the calculation; it's simply used as a reference for the output.</p><p><span style=\" font-weight:600;\">2.</span> Move your mouse cursor to an edge of the screen. Press Alt+Q and proceed to move your cursor in the direction of the opposite edge, making sure you haven't touched the edge of the monitor before you've traveled your distance.</p><p><span style=\" font-weight:600;\">3. </span>Press Alt+W to stop and measure your real DPI once you "
                        "have traveled your inputted distance.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FAQ: public Ui_FAQ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAQ_H

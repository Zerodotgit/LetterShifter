/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *pushButtonConvert;
    QLineEdit *lineEditInput;
    QLineEdit *lineEditOutput;
    QLabel *labelInput;
    QLabel *labelOutput;
    QCheckBox *checkBox;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 200);
        MainWindow->setMinimumSize(QSize(400, 200));
        MainWindow->setMaximumSize(QSize(400, 200));
        pushButtonConvert = new QPushButton(MainWindow);
        pushButtonConvert->setObjectName("pushButtonConvert");
        pushButtonConvert->setGeometry(QRect(140, 140, 94, 26));
        pushButtonConvert->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        lineEditInput = new QLineEdit(MainWindow);
        lineEditInput->setObjectName("lineEditInput");
        lineEditInput->setGeometry(QRect(140, 30, 113, 26));
        lineEditOutput = new QLineEdit(MainWindow);
        lineEditOutput->setObjectName("lineEditOutput");
        lineEditOutput->setGeometry(QRect(140, 70, 113, 26));
        labelInput = new QLabel(MainWindow);
        labelInput->setObjectName("labelInput");
        labelInput->setGeometry(QRect(100, 30, 41, 18));
        labelOutput = new QLabel(MainWindow);
        labelOutput->setObjectName("labelOutput");
        labelOutput->setGeometry(QRect(100, 70, 41, 18));
        checkBox = new QCheckBox(MainWindow);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(270, 70, 101, 24));
        checkBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\244\247\345\260\217\345\206\231\350\275\254\346\215\242\345\231\250", nullptr));
        pushButtonConvert->setText(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242", nullptr));
        labelInput->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\357\274\232", nullptr));
        labelOutput->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\207\272\357\274\232", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242\344\270\272\345\244\247\345\206\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

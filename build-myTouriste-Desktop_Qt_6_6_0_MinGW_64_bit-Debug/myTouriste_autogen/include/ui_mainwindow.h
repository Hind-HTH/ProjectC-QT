/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(840, 526);
        MainWindow->setMinimumSize(QSize(840, 526));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("background-image:url(:/images/valise-de-voyage.jpg);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 240, 191, 65));
        pushButton->setMaximumSize(QSize(200, 65));
        pushButton->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI Emoji\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 340, 191, 65));
        pushButton_2->setMinimumSize(QSize(0, 0));
        pushButton_2->setMaximumSize(QSize(200, 65));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI Emoji\";\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 5, 361, 101));
        label->setStyleSheet(QString::fromUtf8("font: italic 72pt \"Brush Script MT\";\n"
"color: rgb(255, 255, 255);\n"
"background: rgba(0,0,0,0.3);"));
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 840, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MyTouristManager 1.0", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add Package", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Find Package", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Holidays", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

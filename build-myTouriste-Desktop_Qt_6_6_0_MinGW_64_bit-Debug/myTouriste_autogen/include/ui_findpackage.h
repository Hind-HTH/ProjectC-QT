/********************************************************************************
** Form generated from reading UI file 'findpackage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPACKAGE_H
#define UI_FINDPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindPackage
{
public:
    QLabel *label;
    QLineEdit *txtPackageName;
    QPushButton *btnFindPackage;
    QTableView *tableView;
    QLabel *label_2;

    void setupUi(QDialog *FindPackage)
    {
        if (FindPackage->objectName().isEmpty())
            FindPackage->setObjectName("FindPackage");
        FindPackage->resize(400, 300);
        FindPackage->setMaximumSize(QSize(400, 300));
        FindPackage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 104, 152);\n"
"background-color: rgb(69, 142, 162);"));
        label = new QLabel(FindPackage);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 91, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";"));
        txtPackageName = new QLineEdit(FindPackage);
        txtPackageName->setObjectName("txtPackageName");
        txtPackageName->setGeometry(QRect(120, 60, 181, 24));
        txtPackageName->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:5px;"));
        btnFindPackage = new QPushButton(FindPackage);
        btnFindPackage->setObjectName("btnFindPackage");
        btnFindPackage->setGeometry(QRect(310, 60, 80, 24));
        btnFindPackage->setStyleSheet(QString::fromUtf8("border-radius:2px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 83, 83);\n"
"font: 10pt \"Segoe UI\";"));
        tableView = new QTableView(FindPackage);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 100, 361, 181));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:10px;"));
        label_2 = new QLabel(FindPackage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 10, 101, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 18pt \"SimSun-ExtB\";\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(FindPackage);

        QMetaObject::connectSlotsByName(FindPackage);
    } // setupUi

    void retranslateUi(QDialog *FindPackage)
    {
        FindPackage->setWindowTitle(QCoreApplication::translate("FindPackage", "Find Package", nullptr));
        label->setText(QCoreApplication::translate("FindPackage", "Package Name", nullptr));
        btnFindPackage->setText(QCoreApplication::translate("FindPackage", "Find Package", nullptr));
        label_2->setText(QCoreApplication::translate("FindPackage", "Package", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindPackage: public Ui_FindPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPACKAGE_H

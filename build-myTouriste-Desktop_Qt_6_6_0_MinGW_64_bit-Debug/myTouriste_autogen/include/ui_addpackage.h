/********************************************************************************
** Form generated from reading UI file 'addpackage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPACKAGE_H
#define UI_ADDPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPackage
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtPackageName;
    QLabel *label_2;
    QTextEdit *txtDescription;
    QLabel *label_3;
    QLineEdit *txtAmount;
    QPushButton *btnSave;
    QPushButton *btnReset;
    QLabel *label_4;

    void setupUi(QDialog *AddPackage)
    {
        if (AddPackage->objectName().isEmpty())
            AddPackage->setObjectName("AddPackage");
        AddPackage->setWindowModality(Qt::WindowModal);
        AddPackage->resize(400, 300);
        AddPackage->setMaximumSize(QSize(400, 300));
        AddPackage->setStyleSheet(QString::fromUtf8("background-color: rgb(69, 142, 162);"));
        formLayoutWidget = new QWidget(AddPackage);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 60, 341, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtPackageName = new QLineEdit(formLayoutWidget);
        txtPackageName->setObjectName("txtPackageName");
        txtPackageName->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:5px;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtPackageName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtDescription = new QTextEdit(formLayoutWidget);
        txtDescription->setObjectName("txtDescription");
        txtDescription->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:10px;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDescription);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtAmount = new QLineEdit(formLayoutWidget);
        txtAmount->setObjectName("txtAmount");
        txtAmount->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);\n"
"border-radius:5px;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtAmount);

        btnSave = new QPushButton(AddPackage);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(270, 250, 80, 24));
        btnSave->setStyleSheet(QString::fromUtf8("border-radius:2px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 83, 83);\n"
"font: 10pt \"Segoe UI\";"));
        btnReset = new QPushButton(AddPackage);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(50, 250, 80, 24));
        btnReset->setStyleSheet(QString::fromUtf8("border-radius:2px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(83, 83, 83);\n"
"font: 10pt \"Segoe UI\";"));
        label_4 = new QLabel(AddPackage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 10, 91, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"SimSun-ExtB\";\n"
"color: rgb(0, 0, 0);"));

        retranslateUi(AddPackage);

        QMetaObject::connectSlotsByName(AddPackage);
    } // setupUi

    void retranslateUi(QDialog *AddPackage)
    {
        AddPackage->setWindowTitle(QCoreApplication::translate("AddPackage", "Add Package", nullptr));
        label->setText(QCoreApplication::translate("AddPackage", "Package Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddPackage", "Description", nullptr));
        label_3->setText(QCoreApplication::translate("AddPackage", "Amount", nullptr));
        btnSave->setText(QCoreApplication::translate("AddPackage", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("AddPackage", "Reset", nullptr));
        label_4->setText(QCoreApplication::translate("AddPackage", "Package", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPackage: public Ui_AddPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPACKAGE_H

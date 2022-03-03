/********************************************************************************
** Form generated from reading UI file 'insertlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTLOGIN_H
#define UI_INSERTLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insertlogin
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *inster_IdlineEdit;
    QLabel *label_3;
    QLineEdit *insert_namelineEdit_;
    QPushButton *insertloginqueryButton;
    QLabel *label_4;
    QLineEdit *insert_passwordlineEdit;
    QPushButton *insertloginButton;
    QPushButton *insert_back_Button;
    QPushButton *insert_cancel_Button;

    void setupUi(QWidget *insertlogin)
    {
        if (insertlogin->objectName().isEmpty())
            insertlogin->setObjectName(QString::fromUtf8("insertlogin"));
        insertlogin->resize(400, 300);
        label = new QLabel(insertlogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 20, 121, 16));
        label_2 = new QLabel(insertlogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 41, 16));
        inster_IdlineEdit = new QLineEdit(insertlogin);
        inster_IdlineEdit->setObjectName(QString::fromUtf8("inster_IdlineEdit"));
        inster_IdlineEdit->setGeometry(QRect(60, 70, 121, 20));
        label_3 = new QLabel(insertlogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 70, 41, 16));
        insert_namelineEdit_ = new QLineEdit(insertlogin);
        insert_namelineEdit_->setObjectName(QString::fromUtf8("insert_namelineEdit_"));
        insert_namelineEdit_->setGeometry(QRect(280, 70, 113, 20));
        insertloginqueryButton = new QPushButton(insertlogin);
        insertloginqueryButton->setObjectName(QString::fromUtf8("insertloginqueryButton"));
        insertloginqueryButton->setGeometry(QRect(40, 130, 75, 23));
        label_4 = new QLabel(insertlogin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 120, 54, 12));
        insert_passwordlineEdit = new QLineEdit(insertlogin);
        insert_passwordlineEdit->setObjectName(QString::fromUtf8("insert_passwordlineEdit"));
        insert_passwordlineEdit->setGeometry(QRect(280, 120, 113, 20));
        insertloginButton = new QPushButton(insertlogin);
        insertloginButton->setObjectName(QString::fromUtf8("insertloginButton"));
        insertloginButton->setGeometry(QRect(40, 200, 75, 23));
        insert_back_Button = new QPushButton(insertlogin);
        insert_back_Button->setObjectName(QString::fromUtf8("insert_back_Button"));
        insert_back_Button->setGeometry(QRect(150, 200, 75, 23));
        insert_cancel_Button = new QPushButton(insertlogin);
        insert_cancel_Button->setObjectName(QString::fromUtf8("insert_cancel_Button"));
        insert_cancel_Button->setGeometry(QRect(280, 200, 75, 23));

        retranslateUi(insertlogin);

        QMetaObject::connectSlotsByName(insertlogin);
    } // setupUi

    void retranslateUi(QWidget *insertlogin)
    {
        insertlogin->setWindowTitle(QCoreApplication::translate("insertlogin", "Form", nullptr));
        label->setText(QCoreApplication::translate("insertlogin", "\346\267\273\345\212\240\347\224\250\346\210\267\347\231\273\345\205\245\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("insertlogin", "\347\274\226\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("insertlogin", "\345\247\223\345\220\215", nullptr));
        insertloginqueryButton->setText(QCoreApplication::translate("insertlogin", "\346\220\234\347\264\242", nullptr));
        label_4->setText(QCoreApplication::translate("insertlogin", "\347\231\273\345\205\245\345\257\206\347\240\201", nullptr));
        insertloginButton->setText(QCoreApplication::translate("insertlogin", "\346\267\273\345\212\240", nullptr));
        insert_back_Button->setText(QCoreApplication::translate("insertlogin", "\350\277\224\345\233\236", nullptr));
        insert_cancel_Button->setText(QCoreApplication::translate("insertlogin", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insertlogin: public Ui_insertlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTLOGIN_H

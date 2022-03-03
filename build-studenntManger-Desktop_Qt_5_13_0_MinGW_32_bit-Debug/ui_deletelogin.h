/********************************************************************************
** Form generated from reading UI file 'deletelogin.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETELOGIN_H
#define UI_DELETELOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deletelogin
{
public:
    QLineEdit *login_IDlineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *login_deletename_lineEdit;
    QPushButton *deletequeryButton;
    QLabel *label_3;
    QLineEdit *dele_login_passwordlineEdit;
    QPushButton *login_deleteButton;
    QPushButton *deletebackButton;
    QPushButton *deletecancelButton;
    QLabel *label_4;

    void setupUi(QWidget *deletelogin)
    {
        if (deletelogin->objectName().isEmpty())
            deletelogin->setObjectName(QString::fromUtf8("deletelogin"));
        deletelogin->resize(400, 300);
        login_IDlineEdit = new QLineEdit(deletelogin);
        login_IDlineEdit->setObjectName(QString::fromUtf8("login_IDlineEdit"));
        login_IDlineEdit->setGeometry(QRect(80, 60, 113, 20));
        label = new QLabel(deletelogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 54, 12));
        label_2 = new QLabel(deletelogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 60, 54, 12));
        login_deletename_lineEdit = new QLineEdit(deletelogin);
        login_deletename_lineEdit->setObjectName(QString::fromUtf8("login_deletename_lineEdit"));
        login_deletename_lineEdit->setGeometry(QRect(270, 60, 113, 20));
        deletequeryButton = new QPushButton(deletelogin);
        deletequeryButton->setObjectName(QString::fromUtf8("deletequeryButton"));
        deletequeryButton->setGeometry(QRect(50, 130, 75, 23));
        label_3 = new QLabel(deletelogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 120, 54, 12));
        dele_login_passwordlineEdit = new QLineEdit(deletelogin);
        dele_login_passwordlineEdit->setObjectName(QString::fromUtf8("dele_login_passwordlineEdit"));
        dele_login_passwordlineEdit->setGeometry(QRect(270, 120, 113, 20));
        login_deleteButton = new QPushButton(deletelogin);
        login_deleteButton->setObjectName(QString::fromUtf8("login_deleteButton"));
        login_deleteButton->setGeometry(QRect(40, 220, 75, 23));
        deletebackButton = new QPushButton(deletelogin);
        deletebackButton->setObjectName(QString::fromUtf8("deletebackButton"));
        deletebackButton->setGeometry(QRect(160, 220, 75, 23));
        deletecancelButton = new QPushButton(deletelogin);
        deletecancelButton->setObjectName(QString::fromUtf8("deletecancelButton"));
        deletecancelButton->setGeometry(QRect(290, 220, 75, 23));
        label_4 = new QLabel(deletelogin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 10, 211, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 18pt \"Arial\";"));

        retranslateUi(deletelogin);

        QMetaObject::connectSlotsByName(deletelogin);
    } // setupUi

    void retranslateUi(QWidget *deletelogin)
    {
        deletelogin->setWindowTitle(QCoreApplication::translate("deletelogin", "Form", nullptr));
        label->setText(QCoreApplication::translate("deletelogin", "\347\274\226\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("deletelogin", "\345\247\223\345\220\215", nullptr));
        deletequeryButton->setText(QCoreApplication::translate("deletelogin", "\346\220\234\347\264\242", nullptr));
        label_3->setText(QCoreApplication::translate("deletelogin", "\347\231\273\345\205\245\345\257\206\347\240\201", nullptr));
        login_deleteButton->setText(QCoreApplication::translate("deletelogin", "\345\210\240\351\231\244", nullptr));
        deletebackButton->setText(QCoreApplication::translate("deletelogin", "\350\277\224\345\233\236", nullptr));
        deletecancelButton->setText(QCoreApplication::translate("deletelogin", "\345\217\226\346\266\210", nullptr));
        label_4->setText(QCoreApplication::translate("deletelogin", "\345\210\240\351\231\244\347\224\250\346\210\267\347\231\273\345\205\245\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deletelogin: public Ui_deletelogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETELOGIN_H

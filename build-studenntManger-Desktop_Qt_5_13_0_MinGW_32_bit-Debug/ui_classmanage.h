/********************************************************************************
** Form generated from reading UI file 'classmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSMANAGE_H
#define UI_CLASSMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_classmanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *class_classIDlineEdit;
    QLineEdit *class_classnamelineEdit;
    QLineEdit *class_majorlineEdit;
    QLineEdit *class_membernumlineEdit;
    QLineEdit *instructorlineEdit;
    QPushButton *class_querypushButton;
    QPushButton *class_addpushButton;
    QPushButton *class_deletepushButton;
    QPushButton *class_upadatepushButton;
    QPushButton *class_backpushButton;

    void setupUi(QWidget *classmanage)
    {
        if (classmanage->objectName().isEmpty())
            classmanage->setObjectName(QString::fromUtf8("classmanage"));
        classmanage->resize(590, 441);
        label = new QLabel(classmanage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 15, 131, 31));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";"));
        label_2 = new QLabel(classmanage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 60, 61, 16));
        label_3 = new QLabel(classmanage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 120, 61, 16));
        label_4 = new QLabel(classmanage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 170, 61, 20));
        label_5 = new QLabel(classmanage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 210, 54, 12));
        label_6 = new QLabel(classmanage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(110, 250, 54, 12));
        class_classIDlineEdit = new QLineEdit(classmanage);
        class_classIDlineEdit->setObjectName(QString::fromUtf8("class_classIDlineEdit"));
        class_classIDlineEdit->setGeometry(QRect(250, 60, 113, 20));
        class_classnamelineEdit = new QLineEdit(classmanage);
        class_classnamelineEdit->setObjectName(QString::fromUtf8("class_classnamelineEdit"));
        class_classnamelineEdit->setGeometry(QRect(170, 120, 113, 20));
        class_majorlineEdit = new QLineEdit(classmanage);
        class_majorlineEdit->setObjectName(QString::fromUtf8("class_majorlineEdit"));
        class_majorlineEdit->setGeometry(QRect(170, 170, 113, 20));
        class_membernumlineEdit = new QLineEdit(classmanage);
        class_membernumlineEdit->setObjectName(QString::fromUtf8("class_membernumlineEdit"));
        class_membernumlineEdit->setGeometry(QRect(170, 210, 113, 20));
        instructorlineEdit = new QLineEdit(classmanage);
        instructorlineEdit->setObjectName(QString::fromUtf8("instructorlineEdit"));
        instructorlineEdit->setGeometry(QRect(170, 250, 113, 20));
        class_querypushButton = new QPushButton(classmanage);
        class_querypushButton->setObjectName(QString::fromUtf8("class_querypushButton"));
        class_querypushButton->setGeometry(QRect(400, 60, 75, 23));
        class_addpushButton = new QPushButton(classmanage);
        class_addpushButton->setObjectName(QString::fromUtf8("class_addpushButton"));
        class_addpushButton->setGeometry(QRect(60, 330, 75, 23));
        class_deletepushButton = new QPushButton(classmanage);
        class_deletepushButton->setObjectName(QString::fromUtf8("class_deletepushButton"));
        class_deletepushButton->setGeometry(QRect(170, 330, 75, 23));
        class_upadatepushButton = new QPushButton(classmanage);
        class_upadatepushButton->setObjectName(QString::fromUtf8("class_upadatepushButton"));
        class_upadatepushButton->setGeometry(QRect(280, 330, 75, 23));
        class_backpushButton = new QPushButton(classmanage);
        class_backpushButton->setObjectName(QString::fromUtf8("class_backpushButton"));
        class_backpushButton->setGeometry(QRect(410, 330, 75, 23));

        retranslateUi(classmanage);

        QMetaObject::connectSlotsByName(classmanage);
    } // setupUi

    void retranslateUi(QWidget *classmanage)
    {
        classmanage->setWindowTitle(QCoreApplication::translate("classmanage", "Form", nullptr));
        label->setText(QCoreApplication::translate("classmanage", "\347\217\255\347\272\247\347\256\241\347\220\206", nullptr));
        label_2->setText(QCoreApplication::translate("classmanage", "\347\217\255\347\272\247\347\274\226\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("classmanage", "\347\217\255\347\272\247\345\220\215\347\247\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("classmanage", "\347\263\273\345\210\253\344\270\223\344\270\232\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("classmanage", "\347\217\255\347\272\247\344\272\272\346\225\260\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("classmanage", "\350\276\205\345\257\274\345\221\230\357\274\232", nullptr));
        class_querypushButton->setText(QCoreApplication::translate("classmanage", "\346\237\245\350\257\242", nullptr));
        class_addpushButton->setText(QCoreApplication::translate("classmanage", "\346\267\273\345\212\240", nullptr));
        class_deletepushButton->setText(QCoreApplication::translate("classmanage", "\345\210\240\351\231\244", nullptr));
        class_upadatepushButton->setText(QCoreApplication::translate("classmanage", "\346\233\264\346\226\260", nullptr));
        class_backpushButton->setText(QCoreApplication::translate("classmanage", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class classmanage: public Ui_classmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSMANAGE_H

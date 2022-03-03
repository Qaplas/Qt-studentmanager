/********************************************************************************
** Form generated from reading UI file 'findscore.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDSCORE_H
#define UI_FINDSCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_findscore
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_findscore_id;
    QLabel *label_3;
    QLineEdit *lineEdit_findscore_class;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_findscore_teacher;
    QLineEdit *lineEdit_findscore_object;
    QLineEdit *lineEdit_findscore_time;
    QLineEdit *lineEdit_findscore_score;
    QLabel *label_4;
    QPushButton *findscoreButton;
    QPushButton *pushButton_findcore_back;
    QLabel *label_8;

    void setupUi(QWidget *findscore)
    {
        if (findscore->objectName().isEmpty())
            findscore->setObjectName(QString::fromUtf8("findscore"));
        findscore->resize(668, 363);
        findscore->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";"));
        label = new QLabel(findscore);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 20, 101, 20));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";"));
        label_2 = new QLabel(findscore);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 61, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        lineEdit_findscore_id = new QLineEdit(findscore);
        lineEdit_findscore_id->setObjectName(QString::fromUtf8("lineEdit_findscore_id"));
        lineEdit_findscore_id->setGeometry(QRect(90, 70, 151, 20));
        lineEdit_findscore_id->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Aharoni\";"));
        label_3 = new QLabel(findscore);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 54, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        lineEdit_findscore_class = new QLineEdit(findscore);
        lineEdit_findscore_class->setObjectName(QString::fromUtf8("lineEdit_findscore_class"));
        lineEdit_findscore_class->setGeometry(QRect(90, 120, 151, 20));
        lineEdit_findscore_class->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        label_5 = new QLabel(findscore);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(350, 72, 54, 20));
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        label_6 = new QLabel(findscore);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(350, 120, 54, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        label_7 = new QLabel(findscore);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(350, 170, 61, 31));
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        lineEdit_findscore_teacher = new QLineEdit(findscore);
        lineEdit_findscore_teacher->setObjectName(QString::fromUtf8("lineEdit_findscore_teacher"));
        lineEdit_findscore_teacher->setGeometry(QRect(90, 180, 151, 20));
        lineEdit_findscore_teacher->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        lineEdit_findscore_object = new QLineEdit(findscore);
        lineEdit_findscore_object->setObjectName(QString::fromUtf8("lineEdit_findscore_object"));
        lineEdit_findscore_object->setGeometry(QRect(430, 70, 141, 20));
        lineEdit_findscore_object->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        lineEdit_findscore_time = new QLineEdit(findscore);
        lineEdit_findscore_time->setObjectName(QString::fromUtf8("lineEdit_findscore_time"));
        lineEdit_findscore_time->setGeometry(QRect(430, 130, 141, 20));
        lineEdit_findscore_time->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        lineEdit_findscore_score = new QLineEdit(findscore);
        lineEdit_findscore_score->setObjectName(QString::fromUtf8("lineEdit_findscore_score"));
        lineEdit_findscore_score->setGeometry(QRect(430, 180, 141, 20));
        lineEdit_findscore_score->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        label_4 = new QLabel(findscore);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 170, 61, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        findscoreButton = new QPushButton(findscore);
        findscoreButton->setObjectName(QString::fromUtf8("findscoreButton"));
        findscoreButton->setGeometry(QRect(170, 270, 75, 23));
        findscoreButton->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        pushButton_findcore_back = new QPushButton(findscore);
        pushButton_findcore_back->setObjectName(QString::fromUtf8("pushButton_findcore_back"));
        pushButton_findcore_back->setGeometry(QRect(430, 270, 75, 23));
        pushButton_findcore_back->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));
        label_8 = new QLabel(findscore);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 230, 261, 20));
        label_8->setStyleSheet(QString::fromUtf8("font: 9pt \"Arial\";"));

        retranslateUi(findscore);

        QMetaObject::connectSlotsByName(findscore);
    } // setupUi

    void retranslateUi(QWidget *findscore)
    {
        findscore->setWindowTitle(QCoreApplication::translate("findscore", "Form", nullptr));
        label->setText(QCoreApplication::translate("findscore", "\346\210\220\347\273\251\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("findscore", "\345\255\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("findscore", "\347\217\255\347\272\247", nullptr));
        label_5->setText(QCoreApplication::translate("findscore", "\347\247\221\347\233\256", nullptr));
        label_6->setText(QCoreApplication::translate("findscore", "\345\255\246\346\234\237", nullptr));
        label_7->setText(QCoreApplication::translate("findscore", "\345\210\206\346\225\260", nullptr));
        label_4->setText(QCoreApplication::translate("findscore", "\346\216\210\350\257\276\350\200\201\345\270\210", nullptr));
        findscoreButton->setText(QCoreApplication::translate("findscore", "\346\237\245\350\257\242", nullptr));
        pushButton_findcore_back->setText(QCoreApplication::translate("findscore", "\350\277\224\345\233\236", nullptr));
        label_8->setText(QCoreApplication::translate("findscore", "\346\263\250\346\204\217\357\274\232\345\255\246\345\217\267\357\274\214\347\247\221\347\233\256\357\274\214\345\255\246\346\234\237\344\270\272\345\277\205\345\241\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findscore: public Ui_findscore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDSCORE_H

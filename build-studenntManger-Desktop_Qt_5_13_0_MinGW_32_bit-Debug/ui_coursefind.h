/********************************************************************************
** Form generated from reading UI file 'coursefind.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEFIND_H
#define UI_COURSEFIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coursefind
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *stu_course_IDlineEdit;
    QLineEdit *stu_course_namelineEdit;
    QLineEdit *stu_teacher_namelineEdit;
    QLineEdit *stu_course_timelineEdit;
    QLineEdit *stu_course_addresslineEdit;
    QLineEdit *stu_course_periodlineEdit;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *stu_course_creditlineEdit;
    QPushButton *stu_query_courseButton;
    QPushButton *stu_course_backButton;

    void setupUi(QWidget *coursefind)
    {
        if (coursefind->objectName().isEmpty())
            coursefind->setObjectName(QString::fromUtf8("coursefind"));
        coursefind->resize(568, 361);
        label = new QLabel(coursefind);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 20, 101, 16));
        label_2 = new QLabel(coursefind);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 60, 161, 20));
        label_3 = new QLabel(coursefind);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 120, 54, 12));
        label_4 = new QLabel(coursefind);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 160, 61, 20));
        label_5 = new QLabel(coursefind);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 190, 61, 20));
        label_6 = new QLabel(coursefind);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 230, 61, 20));
        label_7 = new QLabel(coursefind);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 270, 54, 12));
        stu_course_IDlineEdit = new QLineEdit(coursefind);
        stu_course_IDlineEdit->setObjectName(QString::fromUtf8("stu_course_IDlineEdit"));
        stu_course_IDlineEdit->setGeometry(QRect(220, 60, 113, 20));
        stu_course_namelineEdit = new QLineEdit(coursefind);
        stu_course_namelineEdit->setObjectName(QString::fromUtf8("stu_course_namelineEdit"));
        stu_course_namelineEdit->setGeometry(QRect(220, 120, 131, 20));
        stu_teacher_namelineEdit = new QLineEdit(coursefind);
        stu_teacher_namelineEdit->setObjectName(QString::fromUtf8("stu_teacher_namelineEdit"));
        stu_teacher_namelineEdit->setGeometry(QRect(220, 160, 131, 20));
        stu_course_timelineEdit = new QLineEdit(coursefind);
        stu_course_timelineEdit->setObjectName(QString::fromUtf8("stu_course_timelineEdit"));
        stu_course_timelineEdit->setGeometry(QRect(220, 190, 131, 20));
        stu_course_addresslineEdit = new QLineEdit(coursefind);
        stu_course_addresslineEdit->setObjectName(QString::fromUtf8("stu_course_addresslineEdit"));
        stu_course_addresslineEdit->setGeometry(QRect(220, 230, 131, 20));
        stu_course_periodlineEdit = new QLineEdit(coursefind);
        stu_course_periodlineEdit->setObjectName(QString::fromUtf8("stu_course_periodlineEdit"));
        stu_course_periodlineEdit->setGeometry(QRect(220, 270, 131, 20));
        label_8 = new QLabel(coursefind);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 90, 54, 12));
        label_9 = new QLabel(coursefind);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(210, 90, 71, 20));
        label_10 = new QLabel(coursefind);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(150, 310, 54, 12));
        stu_course_creditlineEdit = new QLineEdit(coursefind);
        stu_course_creditlineEdit->setObjectName(QString::fromUtf8("stu_course_creditlineEdit"));
        stu_course_creditlineEdit->setGeometry(QRect(220, 310, 131, 20));
        stu_query_courseButton = new QPushButton(coursefind);
        stu_query_courseButton->setObjectName(QString::fromUtf8("stu_query_courseButton"));
        stu_query_courseButton->setGeometry(QRect(410, 80, 75, 23));
        stu_course_backButton = new QPushButton(coursefind);
        stu_course_backButton->setObjectName(QString::fromUtf8("stu_course_backButton"));
        stu_course_backButton->setGeometry(QRect(410, 300, 75, 23));

        retranslateUi(coursefind);

        QMetaObject::connectSlotsByName(coursefind);
    } // setupUi

    void retranslateUi(QWidget *coursefind)
    {
        coursefind->setWindowTitle(QCoreApplication::translate("coursefind", "Form", nullptr));
        label->setText(QCoreApplication::translate("coursefind", "\350\257\276\347\250\213\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("coursefind", "\350\257\267\350\276\223\345\205\245\344\275\240\350\246\201\346\237\245\350\257\242\347\232\204\350\257\276\347\250\213\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("coursefind", "\350\257\276\347\250\213\345\220\215\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("coursefind", "\346\216\210\350\257\276\350\200\201\345\270\210\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("coursefind", "\346\216\210\350\257\276\346\227\266\351\227\264\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("coursefind", "\346\216\210\350\257\276\345\234\260\347\202\271\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("coursefind", "\345\255\246\346\227\266\357\274\232", nullptr));
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("coursefind", "\346\237\245\350\257\242\347\273\223\346\236\234\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("coursefind", "\345\255\246\345\210\206\357\274\232", nullptr));
        stu_query_courseButton->setText(QCoreApplication::translate("coursefind", "\346\237\245\350\257\242", nullptr));
        stu_course_backButton->setText(QCoreApplication::translate("coursefind", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coursefind: public Ui_coursefind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEFIND_H

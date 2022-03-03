/********************************************************************************
** Form generated from reading UI file 'manger.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANGER_H
#define UI_MANGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manger
{
public:
    QLabel *label;
    QFrame *line;
    QPushButton *userloginButton;
    QPushButton *stu_inform_guanlipushButton;
    QPushButton *class_managepushButton;
    QPushButton *scoremanagepushButton;
    QPushButton *dorm_guanliButton;
    QPushButton *course_manageButton;
    QPushButton *award_managepushButton;
    QPushButton *feemanagepushButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_useradmin;

    void setupUi(QWidget *manger)
    {
        if (manger->objectName().isEmpty())
            manger->setObjectName(QString::fromUtf8("manger"));
        manger->resize(400, 300);
        label = new QLabel(manger);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 20, 81, 21));
        line = new QFrame(manger);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 60, 301, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        userloginButton = new QPushButton(manger);
        userloginButton->setObjectName(QString::fromUtf8("userloginButton"));
        userloginButton->setGeometry(QRect(64, 90, 81, 23));
        stu_inform_guanlipushButton = new QPushButton(manger);
        stu_inform_guanlipushButton->setObjectName(QString::fromUtf8("stu_inform_guanlipushButton"));
        stu_inform_guanlipushButton->setGeometry(QRect(64, 130, 81, 23));
        class_managepushButton = new QPushButton(manger);
        class_managepushButton->setObjectName(QString::fromUtf8("class_managepushButton"));
        class_managepushButton->setGeometry(QRect(64, 170, 81, 23));
        scoremanagepushButton = new QPushButton(manger);
        scoremanagepushButton->setObjectName(QString::fromUtf8("scoremanagepushButton"));
        scoremanagepushButton->setGeometry(QRect(64, 210, 81, 23));
        dorm_guanliButton = new QPushButton(manger);
        dorm_guanliButton->setObjectName(QString::fromUtf8("dorm_guanliButton"));
        dorm_guanliButton->setGeometry(QRect(204, 90, 81, 23));
        course_manageButton = new QPushButton(manger);
        course_manageButton->setObjectName(QString::fromUtf8("course_manageButton"));
        course_manageButton->setGeometry(QRect(204, 130, 81, 23));
        award_managepushButton = new QPushButton(manger);
        award_managepushButton->setObjectName(QString::fromUtf8("award_managepushButton"));
        award_managepushButton->setGeometry(QRect(204, 170, 81, 23));
        feemanagepushButton = new QPushButton(manger);
        feemanagepushButton->setObjectName(QString::fromUtf8("feemanagepushButton"));
        feemanagepushButton->setGeometry(QRect(200, 210, 81, 23));
        pushButton_9 = new QPushButton(manger);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(110, 250, 51, 21));
        pushButton_10 = new QPushButton(manger);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(200, 250, 51, 21));
        label_useradmin = new QLabel(manger);
        label_useradmin->setObjectName(QString::fromUtf8("label_useradmin"));
        label_useradmin->setGeometry(QRect(30, 10, 71, 31));

        retranslateUi(manger);

        QMetaObject::connectSlotsByName(manger);
    } // setupUi

    void retranslateUi(QWidget *manger)
    {
        manger->setWindowTitle(QCoreApplication::translate("manger", "Form", nullptr));
        label->setText(QCoreApplication::translate("manger", "\347\256\241\347\220\206\345\221\230\347\253\257", nullptr));
        userloginButton->setText(QCoreApplication::translate("manger", "\347\224\250\346\210\267\347\231\273\345\275\225\347\256\241\347\220\206", nullptr));
        stu_inform_guanlipushButton->setText(QCoreApplication::translate("manger", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        class_managepushButton->setText(QCoreApplication::translate("manger", "\347\217\255\347\272\247\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        scoremanagepushButton->setText(QCoreApplication::translate("manger", "\346\210\220\347\273\251\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        dorm_guanliButton->setText(QCoreApplication::translate("manger", "\345\256\277\350\210\215\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        course_manageButton->setText(QCoreApplication::translate("manger", "\350\257\276\347\250\213\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        award_managepushButton->setText(QCoreApplication::translate("manger", "\345\245\226\346\203\251\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        feemanagepushButton->setText(QCoreApplication::translate("manger", "\347\274\264\350\264\271\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        pushButton_9->setText(QCoreApplication::translate("manger", "\350\277\224\345\233\236", nullptr));
        pushButton_10->setText(QCoreApplication::translate("manger", "\345\217\226\346\266\210", nullptr));
        label_useradmin->setText(QCoreApplication::translate("manger", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manger: public Ui_manger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANGER_H

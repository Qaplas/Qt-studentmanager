/********************************************************************************
** Form generated from reading UI file 'dormfind.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DORMFIND_H
#define UI_DORMFIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dormfind
{
public:
    QTableWidget *find_dorm_tableWidget;
    QLabel *label;
    QPushButton *stu_finddormButton;

    void setupUi(QWidget *dormfind)
    {
        if (dormfind->objectName().isEmpty())
            dormfind->setObjectName(QString::fromUtf8("dormfind"));
        dormfind->resize(737, 469);
        find_dorm_tableWidget = new QTableWidget(dormfind);
        if (find_dorm_tableWidget->columnCount() < 6)
            find_dorm_tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        find_dorm_tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        find_dorm_tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        find_dorm_tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        find_dorm_tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        find_dorm_tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        find_dorm_tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        find_dorm_tableWidget->setObjectName(QString::fromUtf8("find_dorm_tableWidget"));
        find_dorm_tableWidget->setGeometry(QRect(30, 50, 671, 391));
        label = new QLabel(dormfind);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 20, 201, 21));
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"Arial\";"));
        stu_finddormButton = new QPushButton(dormfind);
        stu_finddormButton->setObjectName(QString::fromUtf8("stu_finddormButton"));
        stu_finddormButton->setGeometry(QRect(530, 10, 75, 23));

        retranslateUi(dormfind);

        QMetaObject::connectSlotsByName(dormfind);
    } // setupUi

    void retranslateUi(QWidget *dormfind)
    {
        dormfind->setWindowTitle(QCoreApplication::translate("dormfind", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = find_dorm_tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("dormfind", "\345\257\235\345\256\244\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = find_dorm_tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("dormfind", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = find_dorm_tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("dormfind", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = find_dorm_tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("dormfind", "\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = find_dorm_tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("dormfind", "\345\272\212\344\275\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = find_dorm_tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("dormfind", "\345\244\207\346\263\250", nullptr));
        label->setText(QCoreApplication::translate("dormfind", "\346\211\200\346\234\211\345\255\246\347\224\237\344\275\217\345\256\277\346\203\205\345\206\265", nullptr));
        stu_finddormButton->setText(QCoreApplication::translate("dormfind", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dormfind: public Ui_dormfind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DORMFIND_H

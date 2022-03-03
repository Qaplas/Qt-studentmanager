/********************************************************************************
** Form generated from reading UI file 'allstuinform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLSTUINFORM_H
#define UI_ALLSTUINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllstuInform
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *back_stuButton;

    void setupUi(QWidget *AllstuInform)
    {
        if (AllstuInform->objectName().isEmpty())
            AllstuInform->setObjectName(QString::fromUtf8("AllstuInform"));
        AllstuInform->resize(1037, 452);
        tableWidget = new QTableWidget(AllstuInform);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 40, 971, 391));
        label = new QLabel(AllstuInform);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 10, 221, 16));
        back_stuButton = new QPushButton(AllstuInform);
        back_stuButton->setObjectName(QString::fromUtf8("back_stuButton"));
        back_stuButton->setGeometry(QRect(750, 10, 75, 23));

        retranslateUi(AllstuInform);

        QMetaObject::connectSlotsByName(AllstuInform);
    } // setupUi

    void retranslateUi(QWidget *AllstuInform)
    {
        AllstuInform->setWindowTitle(QCoreApplication::translate("AllstuInform", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AllstuInform", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AllstuInform", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AllstuInform", "\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AllstuInform", "\345\271\264\351\276\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AllstuInform", "\344\270\223\344\270\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AllstuInform", "\347\217\255\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AllstuInform", "\345\256\266\345\272\255\344\275\217\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("AllstuInform", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("AllstuInform", "\345\244\207\346\263\250", nullptr));
        label->setText(QCoreApplication::translate("AllstuInform", "\346\211\200\346\234\211\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        back_stuButton->setText(QCoreApplication::translate("AllstuInform", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllstuInform: public Ui_AllstuInform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLSTUINFORM_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *Login_password;
    QLineEdit *Login_username;
    QLabel *label_3;
    QPushButton *LoginButton;
    QPushButton *cancelButton;
    QPushButton *remitButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 90, 54, 12));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(70, 150, 89, 16));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(200, 150, 89, 16));
        Login_password = new QLineEdit(centralWidget);
        Login_password->setObjectName(QString::fromUtf8("Login_password"));
        Login_password->setGeometry(QRect(130, 90, 113, 20));
        Login_password->setStyleSheet(QString::fromUtf8("font: 6pt \"Arial\";\n"
"font: 9pt \"Arial\";"));
        Login_username = new QLineEdit(centralWidget);
        Login_username->setObjectName(QString::fromUtf8("Login_username"));
        Login_username->setGeometry(QRect(130, 50, 113, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 0, 141, 31));
        LoginButton = new QPushButton(centralWidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(50, 200, 75, 23));
        cancelButton = new QPushButton(centralWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(160, 200, 75, 23));
        remitButton = new QPushButton(centralWidget);
        remitButton->setObjectName(QString::fromUtf8("remitButton"));
        remitButton->setGeometry(QRect(260, 200, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 71, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\256\276\350\256\241\350\200\205\357\274\232\351\231\210\346\260\270\345\226\206 8001716066", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\344\272\272\345\221\230", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\346\231\256\351\200\232\347\224\250\346\210\267", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\205\245", nullptr));
        cancelButton->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
        remitButton->setText(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

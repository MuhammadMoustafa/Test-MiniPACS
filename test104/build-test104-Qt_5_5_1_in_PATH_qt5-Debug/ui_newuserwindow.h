/********************************************************************************
** Form generated from reading UI file 'newuserwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSERWINDOW_H
#define UI_NEWUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewUserWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lnedt_firstname;
    QLineEdit *lnedt_lastname;
    QLineEdit *lnedt_height;
    QLineEdit *lnedt_weight;
    QRadioButton *rdbtn_male;
    QRadioButton *rdbtn_female;
    QDateEdit *dateEdit;
    QLabel *lbl_age;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewUserWindow)
    {
        if (NewUserWindow->objectName().isEmpty())
            NewUserWindow->setObjectName(QStringLiteral("NewUserWindow"));
        NewUserWindow->resize(990, 729);
        centralwidget = new QWidget(NewUserWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lnedt_firstname = new QLineEdit(centralwidget);
        lnedt_firstname->setObjectName(QStringLiteral("lnedt_firstname"));
        lnedt_firstname->setGeometry(QRect(60, 70, 113, 27));
        lnedt_lastname = new QLineEdit(centralwidget);
        lnedt_lastname->setObjectName(QStringLiteral("lnedt_lastname"));
        lnedt_lastname->setGeometry(QRect(220, 80, 113, 27));
        lnedt_height = new QLineEdit(centralwidget);
        lnedt_height->setObjectName(QStringLiteral("lnedt_height"));
        lnedt_height->setGeometry(QRect(190, 170, 113, 27));
        lnedt_weight = new QLineEdit(centralwidget);
        lnedt_weight->setObjectName(QStringLiteral("lnedt_weight"));
        lnedt_weight->setGeometry(QRect(180, 300, 113, 27));
        rdbtn_male = new QRadioButton(centralwidget);
        rdbtn_male->setObjectName(QStringLiteral("rdbtn_male"));
        rdbtn_male->setGeometry(QRect(420, 240, 117, 22));
        rdbtn_female = new QRadioButton(centralwidget);
        rdbtn_female->setObjectName(QStringLiteral("rdbtn_female"));
        rdbtn_female->setGeometry(QRect(430, 300, 117, 22));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(290, 370, 110, 27));
        lbl_age = new QLabel(centralwidget);
        lbl_age->setObjectName(QStringLiteral("lbl_age"));
        lbl_age->setGeometry(QRect(590, 350, 67, 17));
        NewUserWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewUserWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 990, 25));
        NewUserWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(NewUserWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        NewUserWindow->setStatusBar(statusbar);

        retranslateUi(NewUserWindow);

        QMetaObject::connectSlotsByName(NewUserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NewUserWindow)
    {
        NewUserWindow->setWindowTitle(QApplication::translate("NewUserWindow", "MainWindow", 0));
        lnedt_firstname->setPlaceholderText(QApplication::translate("NewUserWindow", "First Name", 0));
        lnedt_lastname->setPlaceholderText(QApplication::translate("NewUserWindow", "Last Name", 0));
        lnedt_height->setPlaceholderText(QApplication::translate("NewUserWindow", "Height", 0));
        lnedt_weight->setPlaceholderText(QApplication::translate("NewUserWindow", "Weight", 0));
        rdbtn_male->setText(QApplication::translate("NewUserWindow", "&Male", 0));
        rdbtn_female->setText(QApplication::translate("NewUserWindow", "&Female", 0));
        lbl_age->setText(QApplication::translate("NewUserWindow", "Age", 0));
    } // retranslateUi

};

namespace Ui {
    class NewUserWindow: public Ui_NewUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSERWINDOW_H

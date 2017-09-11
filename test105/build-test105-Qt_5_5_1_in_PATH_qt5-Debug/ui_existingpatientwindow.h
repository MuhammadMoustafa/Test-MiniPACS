/********************************************************************************
** Form generated from reading UI file 'existingpatientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXISTINGPATIENTWINDOW_H
#define UI_EXISTINGPATIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExistingPatientWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QPushButton *btn_Search;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ExistingPatientWindow)
    {
        if (ExistingPatientWindow->objectName().isEmpty())
            ExistingPatientWindow->setObjectName(QStringLiteral("ExistingPatientWindow"));
        ExistingPatientWindow->resize(800, 600);
        centralwidget = new QWidget(ExistingPatientWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 110, 751, 421));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 30, 331, 27));
        btn_Search = new QPushButton(centralwidget);
        btn_Search->setObjectName(QStringLiteral("btn_Search"));
        btn_Search->setGeometry(QRect(460, 30, 99, 27));
        ExistingPatientWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ExistingPatientWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ExistingPatientWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ExistingPatientWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ExistingPatientWindow->setStatusBar(statusbar);

        retranslateUi(ExistingPatientWindow);

        QMetaObject::connectSlotsByName(ExistingPatientWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ExistingPatientWindow)
    {
        ExistingPatientWindow->setWindowTitle(QApplication::translate("ExistingPatientWindow", "MainWindow", 0));
        lineEdit->setPlaceholderText(QApplication::translate("ExistingPatientWindow", "search by id", 0));
        btn_Search->setText(QApplication::translate("ExistingPatientWindow", "Search", 0));
    } // retranslateUi

};

namespace Ui {
    class ExistingPatientWindow: public Ui_ExistingPatientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXISTINGPATIENTWINDOW_H

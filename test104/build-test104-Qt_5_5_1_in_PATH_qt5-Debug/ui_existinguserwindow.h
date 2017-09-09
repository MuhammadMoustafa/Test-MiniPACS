/********************************************************************************
** Form generated from reading UI file 'existinguserwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXISTINGUSERWINDOW_H
#define UI_EXISTINGUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExistingUserWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ExistingUserWindow)
    {
        if (ExistingUserWindow->objectName().isEmpty())
            ExistingUserWindow->setObjectName(QStringLiteral("ExistingUserWindow"));
        ExistingUserWindow->resize(800, 600);
        centralwidget = new QWidget(ExistingUserWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(190, 200, 256, 192));
        ExistingUserWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ExistingUserWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ExistingUserWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ExistingUserWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ExistingUserWindow->setStatusBar(statusbar);

        retranslateUi(ExistingUserWindow);

        QMetaObject::connectSlotsByName(ExistingUserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ExistingUserWindow)
    {
        ExistingUserWindow->setWindowTitle(QApplication::translate("ExistingUserWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class ExistingUserWindow: public Ui_ExistingUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXISTINGUSERWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'adminpanelwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANELWINDOW_H
#define UI_ADMINPANELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPanelWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminPanelWindow)
    {
        if (AdminPanelWindow->objectName().isEmpty())
            AdminPanelWindow->setObjectName(QStringLiteral("AdminPanelWindow"));
        AdminPanelWindow->resize(800, 600);
        centralwidget = new QWidget(AdminPanelWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 60, 99, 27));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 60, 99, 27));
        AdminPanelWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminPanelWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        AdminPanelWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminPanelWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AdminPanelWindow->setStatusBar(statusbar);

        retranslateUi(AdminPanelWindow);

        QMetaObject::connectSlotsByName(AdminPanelWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminPanelWindow)
    {
        AdminPanelWindow->setWindowTitle(QApplication::translate("AdminPanelWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("AdminPanelWindow", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("AdminPanelWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminPanelWindow: public Ui_AdminPanelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANELWINDOW_H

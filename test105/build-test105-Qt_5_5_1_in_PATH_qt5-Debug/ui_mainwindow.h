/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbl_date;
    QLabel *lbl_time;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_currentuser;
    QLabel *lbl_currentusername;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lnedt_username;
    QLineEdit *lnedt_password;
    QPushButton *btn_login;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *wdgt_userpanel;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QWidget *wdgt_user;
    QVBoxLayout *verticalLayout_8;
    QPushButton *btn_newuser;
    QPushButton *btn_existinguser;
    QWidget *wdgt_admin;
    QVBoxLayout *verticalLayout_9;
    QPushButton *btn_adminpanel;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1123, 797);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lbl_date = new QLabel(centralWidget);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));

        verticalLayout_3->addWidget(lbl_date);

        lbl_time = new QLabel(centralWidget);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));

        verticalLayout_3->addWidget(lbl_time);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, -1);
        lbl_currentuser = new QLabel(centralWidget);
        lbl_currentuser->setObjectName(QStringLiteral("lbl_currentuser"));

        verticalLayout_2->addWidget(lbl_currentuser);

        lbl_currentusername = new QLabel(centralWidget);
        lbl_currentusername->setObjectName(QStringLiteral("lbl_currentusername"));

        verticalLayout_2->addWidget(lbl_currentusername);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lnedt_username = new QLineEdit(centralWidget);
        lnedt_username->setObjectName(QStringLiteral("lnedt_username"));

        horizontalLayout->addWidget(lnedt_username);

        lnedt_password = new QLineEdit(centralWidget);
        lnedt_password->setObjectName(QStringLiteral("lnedt_password"));
        lnedt_password->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lnedt_password);

        btn_login = new QPushButton(centralWidget);
        btn_login->setObjectName(QStringLiteral("btn_login"));

        horizontalLayout->addWidget(btn_login);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_5->addItem(verticalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        wdgt_userpanel = new QWidget(centralWidget);
        wdgt_userpanel->setObjectName(QStringLiteral("wdgt_userpanel"));
        horizontalLayout_4 = new QHBoxLayout(wdgt_userpanel);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(400, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        wdgt_user = new QWidget(wdgt_userpanel);
        wdgt_user->setObjectName(QStringLiteral("wdgt_user"));
        verticalLayout_8 = new QVBoxLayout(wdgt_user);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, -1, -1, 1);
        btn_newuser = new QPushButton(wdgt_user);
        btn_newuser->setObjectName(QStringLiteral("btn_newuser"));

        verticalLayout_8->addWidget(btn_newuser);

        btn_existinguser = new QPushButton(wdgt_user);
        btn_existinguser->setObjectName(QStringLiteral("btn_existinguser"));

        verticalLayout_8->addWidget(btn_existinguser);


        verticalLayout->addWidget(wdgt_user);

        wdgt_admin = new QWidget(wdgt_userpanel);
        wdgt_admin->setObjectName(QStringLiteral("wdgt_admin"));
        verticalLayout_9 = new QVBoxLayout(wdgt_admin);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, -1, -1, 1);
        btn_adminpanel = new QPushButton(wdgt_admin);
        btn_adminpanel->setObjectName(QStringLiteral("btn_adminpanel"));

        verticalLayout_9->addWidget(btn_adminpanel);


        verticalLayout->addWidget(wdgt_admin);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(400, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_7->addItem(horizontalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_5->addWidget(wdgt_userpanel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1123, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lbl_date->setText(QString());
        lbl_time->setText(QString());
        lbl_currentuser->setText(QApplication::translate("MainWindow", "Current User :", 0));
        lbl_currentusername->setText(QString());
        lnedt_username->setPlaceholderText(QApplication::translate("MainWindow", "Username", 0));
        lnedt_password->setPlaceholderText(QApplication::translate("MainWindow", "Password", 0));
        btn_login->setText(QApplication::translate("MainWindow", "login", 0));
        btn_newuser->setText(QApplication::translate("MainWindow", "New Patient", 0));
        btn_existinguser->setText(QApplication::translate("MainWindow", "Existing Patient", 0));
        btn_adminpanel->setText(QApplication::translate("MainWindow", "Admin Panel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

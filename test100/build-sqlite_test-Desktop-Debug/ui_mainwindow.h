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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *lbl_id;
    QLineEdit *lnedt_Search;
    QLineEdit *lnedt_address;
    QRadioButton *rdbtn_serch_id;
    QLineEdit *lnedt_age;
    QLineEdit *lnedt_name;
    QLabel *lbl_age;
    QLabel *lbl_name;
    QLabel *lbl_address;
    QPushButton *btn_insert;
    QLineEdit *lnedt_id;
    QRadioButton *rdbtn_search_name;
    QPushButton *btn_search;
    QLineEdit *lnedt_delete;
    QPushButton *btn_delete;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(975, 767);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(50);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(20, 0, 20, -1);
        lbl_id = new QLabel(centralWidget);
        lbl_id->setObjectName(QStringLiteral("lbl_id"));
        lbl_id->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_id, 0, 1, 1, 1);

        lnedt_Search = new QLineEdit(centralWidget);
        lnedt_Search->setObjectName(QStringLiteral("lnedt_Search"));

        gridLayout->addWidget(lnedt_Search, 4, 1, 2, 3);

        lnedt_address = new QLineEdit(centralWidget);
        lnedt_address->setObjectName(QStringLiteral("lnedt_address"));

        gridLayout->addWidget(lnedt_address, 1, 4, 1, 1);

        rdbtn_serch_id = new QRadioButton(centralWidget);
        rdbtn_serch_id->setObjectName(QStringLiteral("rdbtn_serch_id"));

        gridLayout->addWidget(rdbtn_serch_id, 4, 4, 1, 1);

        lnedt_age = new QLineEdit(centralWidget);
        lnedt_age->setObjectName(QStringLiteral("lnedt_age"));

        gridLayout->addWidget(lnedt_age, 1, 2, 1, 1);

        lnedt_name = new QLineEdit(centralWidget);
        lnedt_name->setObjectName(QStringLiteral("lnedt_name"));

        gridLayout->addWidget(lnedt_name, 0, 4, 1, 1);

        lbl_age = new QLabel(centralWidget);
        lbl_age->setObjectName(QStringLiteral("lbl_age"));
        lbl_age->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_age, 1, 1, 1, 1);

        lbl_name = new QLabel(centralWidget);
        lbl_name->setObjectName(QStringLiteral("lbl_name"));
        lbl_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_name, 0, 3, 1, 1);

        lbl_address = new QLabel(centralWidget);
        lbl_address->setObjectName(QStringLiteral("lbl_address"));
        lbl_address->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_address, 1, 3, 1, 1);

        btn_insert = new QPushButton(centralWidget);
        btn_insert->setObjectName(QStringLiteral("btn_insert"));

        gridLayout->addWidget(btn_insert, 0, 0, 2, 1);

        lnedt_id = new QLineEdit(centralWidget);
        lnedt_id->setObjectName(QStringLiteral("lnedt_id"));

        gridLayout->addWidget(lnedt_id, 0, 2, 1, 1);

        rdbtn_search_name = new QRadioButton(centralWidget);
        rdbtn_search_name->setObjectName(QStringLiteral("rdbtn_search_name"));

        gridLayout->addWidget(rdbtn_search_name, 5, 4, 1, 1);

        btn_search = new QPushButton(centralWidget);
        btn_search->setObjectName(QStringLiteral("btn_search"));

        gridLayout->addWidget(btn_search, 4, 0, 2, 1);

        lnedt_delete = new QLineEdit(centralWidget);
        lnedt_delete->setObjectName(QStringLiteral("lnedt_delete"));

        gridLayout->addWidget(lnedt_delete, 6, 1, 1, 3);

        btn_delete = new QPushButton(centralWidget);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));

        gridLayout->addWidget(btn_delete, 6, 0, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 7, 0, 1, 5);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 975, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lnedt_id, lnedt_name);
        QWidget::setTabOrder(lnedt_name, lnedt_age);
        QWidget::setTabOrder(lnedt_age, lnedt_address);
        QWidget::setTabOrder(lnedt_address, btn_insert);
        QWidget::setTabOrder(btn_insert, lnedt_Search);
        QWidget::setTabOrder(lnedt_Search, rdbtn_serch_id);
        QWidget::setTabOrder(rdbtn_serch_id, rdbtn_search_name);
        QWidget::setTabOrder(rdbtn_search_name, btn_search);
        QWidget::setTabOrder(btn_search, btn_delete);
        QWidget::setTabOrder(btn_delete, lnedt_delete);
        QWidget::setTabOrder(lnedt_delete, tableView);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lbl_id->setText(QApplication::translate("MainWindow", "ID", 0));
        rdbtn_serch_id->setText(QApplication::translate("MainWindow", "S&earch By ID", 0));
        lbl_age->setText(QApplication::translate("MainWindow", "Age", 0));
        lbl_name->setText(QApplication::translate("MainWindow", "Name", 0));
        lbl_address->setText(QApplication::translate("MainWindow", "Address", 0));
        btn_insert->setText(QApplication::translate("MainWindow", "Insert", 0));
        rdbtn_search_name->setText(QApplication::translate("MainWindow", "Search By &Name", 0));
        btn_search->setText(QApplication::translate("MainWindow", "Search", 0));
        btn_delete->setText(QApplication::translate("MainWindow", "Delete By ID", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

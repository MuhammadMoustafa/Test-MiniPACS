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
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QPushButton *btn_addNew;
    QWidget *wdgt_addNew;
    QGridLayout *gridLayout_2;
    QLineEdit *lnedt_middlename;
    QLineEdit *lnedt_firstname;
    QLabel *label;
    QLineEdit *lnedt_lastname;
    QWidget *wdgt_table;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1185, 855);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_addNew = new QPushButton(centralWidget);
        btn_addNew->setObjectName(QStringLiteral("btn_addNew"));

        gridLayout->addWidget(btn_addNew, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        wdgt_addNew = new QWidget(centralWidget);
        wdgt_addNew->setObjectName(QStringLiteral("wdgt_addNew"));
        gridLayout_2 = new QGridLayout(wdgt_addNew);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lnedt_middlename = new QLineEdit(wdgt_addNew);
        lnedt_middlename->setObjectName(QStringLiteral("lnedt_middlename"));
        lnedt_middlename->setInputMethodHints(Qt::ImhLatinOnly);

        gridLayout_2->addWidget(lnedt_middlename, 0, 1, 1, 1);

        lnedt_firstname = new QLineEdit(wdgt_addNew);
        lnedt_firstname->setObjectName(QStringLiteral("lnedt_firstname"));
        lnedt_firstname->setInputMethodHints(Qt::ImhLatinOnly);

        gridLayout_2->addWidget(lnedt_firstname, 0, 0, 1, 1);

        label = new QLabel(wdgt_addNew);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        lnedt_lastname = new QLineEdit(wdgt_addNew);
        lnedt_lastname->setObjectName(QStringLiteral("lnedt_lastname"));
        lnedt_lastname->setInputMethodHints(Qt::ImhLatinOnly);

        gridLayout_2->addWidget(lnedt_lastname, 0, 2, 1, 1);


        verticalLayout_5->addWidget(wdgt_addNew);


        verticalLayout_6->addLayout(verticalLayout_5);

        wdgt_table = new QWidget(centralWidget);
        wdgt_table->setObjectName(QStringLiteral("wdgt_table"));
        horizontalLayout_2 = new QHBoxLayout(wdgt_table);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        tableView = new QTableView(wdgt_table);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(tableView);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_6->addWidget(wdgt_table);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1185, 25));
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
        btn_addNew->setText(QApplication::translate("MainWindow", "Add New Patient", 0));
        lnedt_middlename->setPlaceholderText(QApplication::translate("MainWindow", "Middle Name", 0));
        lnedt_firstname->setPlaceholderText(QApplication::translate("MainWindow", "First Name", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        lnedt_lastname->setPlaceholderText(QApplication::translate("MainWindow", "Last Name", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

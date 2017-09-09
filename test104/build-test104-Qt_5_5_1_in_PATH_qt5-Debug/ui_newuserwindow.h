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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewUserWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *horizontalSpacer;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *doubleSpinBox;
    QLineEdit *lnedt_lastname;
    QLabel *label_8;
    QComboBox *comboBox_4;
    QLabel *label_9;
    QLineEdit *lnedt_firstname;
    QRadioButton *rdbtn_male;
    QRadioButton *rdbtn_female;
    QLabel *lbl_age;
    QDateEdit *dateEdit;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewUserWindow)
    {
        if (NewUserWindow->objectName().isEmpty())
            NewUserWindow->setObjectName(QStringLiteral("NewUserWindow"));
        NewUserWindow->resize(1152, 863);
        centralwidget = new QWidget(NewUserWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(140, 30, 621, 191));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(horizontalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_5->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_5);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(150, 460, 370, 168));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_7->addWidget(label);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_7->addWidget(label_3);


        gridLayout->addLayout(verticalLayout_7, 0, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_6->addWidget(pushButton_2);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_6->addWidget(pushButton);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_6->addWidget(pushButton_3);


        gridLayout->addLayout(verticalLayout_6, 0, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(gridLayoutWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        verticalLayout->addWidget(comboBox_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(260, 250, 641, 191));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        doubleSpinBox = new QDoubleSpinBox(gridLayoutWidget_2);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setMaximum(300);

        gridLayout_2->addWidget(doubleSpinBox, 1, 1, 1, 1);

        lnedt_lastname = new QLineEdit(gridLayoutWidget_2);
        lnedt_lastname->setObjectName(QStringLiteral("lnedt_lastname"));

        gridLayout_2->addWidget(lnedt_lastname, 0, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        comboBox_4 = new QComboBox(gridLayoutWidget_2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout_2->addWidget(comboBox_4, 5, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        lnedt_firstname = new QLineEdit(gridLayoutWidget_2);
        lnedt_firstname->setObjectName(QStringLiteral("lnedt_firstname"));

        gridLayout_2->addWidget(lnedt_firstname, 0, 0, 1, 1);

        rdbtn_male = new QRadioButton(gridLayoutWidget_2);
        rdbtn_male->setObjectName(QStringLiteral("rdbtn_male"));

        gridLayout_2->addWidget(rdbtn_male, 3, 0, 1, 1);

        rdbtn_female = new QRadioButton(gridLayoutWidget_2);
        rdbtn_female->setObjectName(QStringLiteral("rdbtn_female"));

        gridLayout_2->addWidget(rdbtn_female, 3, 1, 1, 1);

        lbl_age = new QLabel(gridLayoutWidget_2);
        lbl_age->setObjectName(QStringLiteral("lbl_age"));

        gridLayout_2->addWidget(lbl_age, 4, 1, 1, 1);

        dateEdit = new QDateEdit(gridLayoutWidget_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCalendarPopup(true);

        gridLayout_2->addWidget(dateEdit, 4, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(gridLayoutWidget_2);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setMaximum(600);

        gridLayout_2->addWidget(doubleSpinBox_2, 2, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(940, 280, 160, 80));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_8->addItem(horizontalSpacer_2);

        verticalLayoutWidget_8 = new QWidget(centralwidget);
        verticalLayoutWidget_8->setObjectName(QStringLiteral("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(50, 300, 160, 80));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_9->addItem(horizontalSpacer_3);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(330, 720, 421, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        NewUserWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewUserWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1152, 25));
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
        label_4->setText(QApplication::translate("NewUserWindow", "TextLabel", 0));
        label_5->setText(QApplication::translate("NewUserWindow", "TextLabel", 0));
        label_6->setText(QApplication::translate("NewUserWindow", "TextLabel", 0));
        label_7->setText(QApplication::translate("NewUserWindow", "TextLabel", 0));
        label_2->setText(QApplication::translate("NewUserWindow", "TextLabel", 0));
        label->setText(QApplication::translate("NewUserWindow", "TextLabel", 0));
        label_3->setText(QApplication::translate("NewUserWindow", "TextLabel", 0));
        pushButton_2->setText(QApplication::translate("NewUserWindow", "PushButton", 0));
        pushButton->setText(QApplication::translate("NewUserWindow", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("NewUserWindow", "PushButton", 0));
        lnedt_lastname->setPlaceholderText(QApplication::translate("NewUserWindow", "Last Name", 0));
        label_8->setText(QApplication::translate("NewUserWindow", "TextLabel", 0));
        label_9->setText(QApplication::translate("NewUserWindow", "TextLabel", 0));
        lnedt_firstname->setPlaceholderText(QApplication::translate("NewUserWindow", "First Name", 0));
        rdbtn_male->setText(QApplication::translate("NewUserWindow", "&Male", 0));
        rdbtn_female->setText(QApplication::translate("NewUserWindow", "&Female", 0));
        lbl_age->setText(QApplication::translate("NewUserWindow", "Age", 0));
        dateEdit->setDisplayFormat(QApplication::translate("NewUserWindow", "dd/MM/yyyy", 0));
        label_10->setText(QApplication::translate("NewUserWindow", "TextLabel", 0));
        pushButton_5->setText(QApplication::translate("NewUserWindow", "PushButton", 0));
        pushButton_4->setText(QApplication::translate("NewUserWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class NewUserWindow: public Ui_NewUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSERWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'lopatool.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOPATOOL_H
#define UI_LOPATOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LOPATool
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *newProject;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LOPATool)
    {
        if (LOPATool->objectName().isEmpty())
            LOPATool->setObjectName(QString::fromUtf8("LOPATool"));
        LOPATool->resize(800, 600);
        centralwidget = new QWidget(LOPATool);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, -10, 771, 541));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        newProject = new QPushButton(gridLayoutWidget);
        newProject->setObjectName(QString::fromUtf8("newProject"));

        verticalLayout->addWidget(newProject);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        listView = new QListView(gridLayoutWidget);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout_3->addWidget(listView);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        logo = new QLabel(gridLayoutWidget);
        logo->setObjectName(QString::fromUtf8("logo"));

        horizontalLayout->addWidget(logo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        LOPATool->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LOPATool);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        LOPATool->setMenuBar(menubar);
        statusbar = new QStatusBar(LOPATool);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LOPATool->setStatusBar(statusbar);

        retranslateUi(LOPATool);

        QMetaObject::connectSlotsByName(LOPATool);
    } // setupUi

    void retranslateUi(QMainWindow *LOPATool)
    {
        LOPATool->setWindowTitle(QCoreApplication::translate("LOPATool", "LOPATool", nullptr));
        newProject->setText(QCoreApplication::translate("LOPATool", "Create Project", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LOPATool", "Open Project", nullptr));
        label->setText(QCoreApplication::translate("LOPATool", "Recent Projects", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LOPATool: public Ui_LOPATool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOPATOOL_H

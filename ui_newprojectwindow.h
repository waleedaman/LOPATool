/********************************************************************************
** Form generated from reading UI file 'newprojectwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECTWINDOW_H
#define UI_NEWPROJECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewProjectWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *title;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *organization;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *user;
    QLabel *databse_status;

    void setupUi(QDialog *NewProjectWindow)
    {
        if (NewProjectWindow->objectName().isEmpty())
            NewProjectWindow->setObjectName(QString::fromUtf8("NewProjectWindow"));
        NewProjectWindow->resize(400, 300);
        horizontalLayoutWidget = new QWidget(NewProjectWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 240, 381, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        okBtn = new QPushButton(horizontalLayoutWidget);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        horizontalLayout->addWidget(okBtn);

        cancelBtn = new QPushButton(horizontalLayoutWidget);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        horizontalLayout->addWidget(cancelBtn);

        verticalLayoutWidget = new QWidget(NewProjectWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 50, 381, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        title = new QLineEdit(verticalLayoutWidget);
        title->setObjectName(QString::fromUtf8("title"));

        horizontalLayout_3->addWidget(title);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        organization = new QLineEdit(verticalLayoutWidget);
        organization->setObjectName(QString::fromUtf8("organization"));

        horizontalLayout_4->addWidget(organization);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6);

        user = new QLineEdit(verticalLayoutWidget);
        user->setObjectName(QString::fromUtf8("user"));

        horizontalLayout_8->addWidget(user);


        verticalLayout->addLayout(horizontalLayout_8);

        databse_status = new QLabel(NewProjectWindow);
        databse_status->setObjectName(QString::fromUtf8("databse_status"));
        databse_status->setGeometry(QRect(289, 10, 101, 20));

        retranslateUi(NewProjectWindow);

        QMetaObject::connectSlotsByName(NewProjectWindow);
    } // setupUi

    void retranslateUi(QDialog *NewProjectWindow)
    {
        NewProjectWindow->setWindowTitle(QCoreApplication::translate("NewProjectWindow", "Dialog", nullptr));
        okBtn->setText(QCoreApplication::translate("NewProjectWindow", "Ok", nullptr));
        cancelBtn->setText(QCoreApplication::translate("NewProjectWindow", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("NewProjectWindow", "Project Title ", nullptr));
        label_2->setText(QCoreApplication::translate("NewProjectWindow", "Organization", nullptr));
        label_6->setText(QCoreApplication::translate("NewProjectWindow", "Created By   ", nullptr));
        databse_status->setText(QCoreApplication::translate("NewProjectWindow", "Not connected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProjectWindow: public Ui_NewProjectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECTWINDOW_H

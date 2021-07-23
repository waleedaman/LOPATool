#ifndef NEWPROJECTWINDOW_H
#define NEWPROJECTWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include "DatabaseUtils.h"

namespace Ui {
class NewProjectWindow;
}

class NewProjectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit NewProjectWindow(QWidget *parent = nullptr);
    ~NewProjectWindow();
    static DatabaseUtils *utils;

private slots:
    void on_user_textChanged(const QString &arg1);

    void on_organization_textChanged(const QString &arg1);

    void on_title_textChanged(const QString &arg1);

    void on_okBtn_clicked();

private:
    Ui::NewProjectWindow *ui;
    QSqlDatabase *db;
};

#endif // NEWPROJECTWINDOW_H

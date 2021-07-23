#include "newprojectwindow.h"
#include "ui_newprojectwindow.h"

QPalette p1;
NewProjectWindow::NewProjectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewProjectWindow)
{
    ui->setupUi(this);
    qDebug() << "App path : " << qApp->applicationDirPath();

    NewProjectWindow::utils = new DatabaseUtils();
    NewProjectWindow::db = NewProjectWindow::utils->CreateConnection(QString(qApp->applicationDirPath()));
    if(db != nullptr){
        ui->databse_status->setText("Connected");
        ui->databse_status->setStyleSheet("color:green;");
    }else{
        ui->databse_status->setText("Not connected");
        ui->databse_status->setStyleSheet("color:red;");
    }

    p1 = ui->organization->palette();

    NewProjectWindow::utils->initDatabse(1);

}



NewProjectWindow::~NewProjectWindow()
{
    delete ui;
}

void accept(){
    qDebug("Clcik");
}

void NewProjectWindow::on_user_textChanged(const QString &arg1)
{
    ui->user->setPalette(p1);
}


void NewProjectWindow::on_organization_textChanged(const QString &arg1)
{
    ui->organization->setPalette(p1);
}


void NewProjectWindow::on_title_textChanged(const QString &arg1)
{
    ui->title->setPalette(p1);
}


void NewProjectWindow::on_okBtn_clicked()
{
    QMap<QString,QString> map;
    if(!ui->title->text().isEmpty() && !ui->organization->text().isEmpty() && !ui->user->text().isEmpty()){
        ui->organization->setPalette(p1);
        ui->user->setPalette(p1);
        ui->title->setPalette(p1);
        map.insert("projectName",ui->title->text());
        map.insert("organization",ui->organization->text());
        map.insert("createdBy",ui->user->text());
        NewProjectWindow::utils->insertData("projects",map);
    }else{
        QPalette pal = ui->organization->palette();
        pal.setColor(QPalette::Text, Qt::red);
        ui->organization->setPalette(pal);
        ui->user->setPalette(pal);
        ui->title->setPalette(pal);
    }
}


#include "lopatool.h"
#include "ui_lopatool.h"
#include "newprojectwindow.h"

void newProject();
LOPATool::LOPATool(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LOPATool)
{
    ui->setupUi(this);
    QPixmap pixmap(":/assets/Logo_Uni-Kassel.png");
    ui->logo->setPixmap(pixmap);
    QCoreApplication::setOrganizationName("UNI-KASSEL");
    QCoreApplication::setApplicationName("LOPA Tool");
    connect(ui->newProject,&QPushButton::clicked,this,[](){
        newProject();
     });
}

void newProject(){
    NewProjectWindow *nw = new NewProjectWindow();
    nw->show();
}

LOPATool::~LOPATool()
{
    delete ui;
}


#include "databaseutils.h"

QSettings set;


const QString DRIVER("QSQLITE");


DatabaseUtils::DatabaseUtils()
{
    set.setValue("app/database_version",0);
}

QSqlDatabase* DatabaseUtils::CreateConnection(QString path){
    QSqlDatabase db;
    if(QSqlDatabase::isDriverAvailable(DRIVER)){
        db = QSqlDatabase::addDatabase(DRIVER);
        db.setDatabaseName(path+"/db");
        if(!db.open()){
            qWarning() << "ERROR: " << db.lastError();
            return nullptr;
        }
        return &db;
    }
    return nullptr;
}

void DatabaseUtils::initDatabse(int version){

    if(version > set.value("app/database_version").toInt()){
        QString query = "CREATE TABLE projects ("
                        "_id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL UNIQUE,"
                        "projectName TEXT NOT NULL"
                        "createdBy TEXT NOT NULL"
                        "organization TEXT NOT NULL"
                        ")";
        QSqlQuery q;
        if(!q.exec(query)){
            qDebug()<<"ERROR creating table";
        }else{
            set.setValue("app/database_version",version);
        }
    }
}

void DatabaseUtils::insertData(QString table, QMap<QString, QString> values){

    QMapIterator<QString, QString> i(values);

    QString colNames = "";
    QString colValues = "";

    while(i.hasNext()){
        i.next();
        colNames += i.key()+",";
        colValues += ":"+i.key()+",";
    }

    QString query = "INSERT into "+table+" ("+colNames+") VALUES ("+colValues+")";

    QSqlQuery q;
    q.prepare(query);
    i.toFront();
    while(i.hasNext()){
        i.next();
        q.bindValue(":"+i.key(),i.value());
    }
    if(!q.exec()){
        qDebug()<<"ERROR inserting data";
    }
}





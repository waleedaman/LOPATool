#ifndef DATABASEUTILS_H
#define DATABASEUTILS_H
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSettings>
#include <QMap>

class DatabaseUtils
{
public:
    DatabaseUtils();
    QSqlDatabase* CreateConnection(QString);
    void initDatabse(int);
    void insertData(QString,QMap<QString,QString>);
};

#endif // DATABASEUTILS_H

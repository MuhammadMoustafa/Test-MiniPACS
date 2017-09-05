#ifndef DAO_H
#define DAO_H
#include <QtSql/QtSql>

class Dao
{
public:
    Dao(QString databasename = "");

protected:
    QSqlDatabase db;
};

#endif // DAO_H

#ifndef DAO_H
#define DAO_H

#include <QtSql/QtSql>
#include "Headers/account.h"
class Dao
{
public:
    Dao();
   // Dao(QString databasename = "");
    bool isUser(Account account);

private:
    QSqlDatabase db;
};

#endif // DAO_H

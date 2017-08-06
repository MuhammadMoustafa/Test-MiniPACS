#ifndef DAO_H
#define DAO_H

#include <QtSql/QtSql>
#include "person.h"

class Dao
{

public:
    QString status;
    bool daoIsOpened;
    Dao();
    void dao_insert(Person entryPerson, QString& status);
    void dao_createTable(QString& status);
    QSqlQuery dao_select(QString& status);
    QSqlQuery dao_select(int id, QString& status);
    void dao_delete(int, QString& status, bool& queryIsExecuted);
    ~Dao();

private:
    QSqlDatabase db;
};

#endif // DAO_H

#ifndef DAO_H
#define DAO_H

#include <QtSql/QtSql>
#include "Headers/account.h"
#include "Headers/patient.h"
#include "Headers/image.h"
#include "Headers/visit.h"

class Dao
{
public:
    Dao();
    Dao(QString databasename);
    bool isUser(Account& account, QString& status);
    QStringListModel* selectPhysician();
    QStringListModel* selectRefPhysician();
    QStringListModel* selectDepartment();
    QStringListModel* selectExamtype();
    void insertPatient(Patient patient, QString& status);

    QSqlTableModel* selectPatient(QString id, QString& status);

private:
    QSqlDatabase db;
};

#endif // DAO_H

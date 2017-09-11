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

    void insertPhysician(QString name, QString &status);
    void insertRefPhysician(QString name, QString &status);
    void insertDepartment(QString name, QString &status);
    void insertExamtype(QString name, QString &status);

    void deletePhysician(QString name, QString &status);
    void deleteRefPhysician(QString name, QString &status);
    void deleteDepartment(QString name, QString &status);
    void deleteExamtype(QString name, QString &status);

    QSqlTableModel* selectPatient(QString id, QString& status);

private:
    QSqlDatabase db;
};

#endif // DAO_H

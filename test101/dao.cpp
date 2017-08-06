#include "dao.h"
#include <QtSql/QtSql>

Dao::Dao()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("db.db");
    db.open();

    if (db.isOpen() && !db.isOpenError()){
        this->status = "Database opend Seccessfully ... ";
        this->daoIsOpened = true;
    }
    else{
        this->status = db.lastError().text() + " ... ";
        this->daoIsOpened = false;
    }
}

void Dao::dao_createTable(QString& status){

    QSqlQuery query(db);
    QString q = "CREATE TABLE IF NOT EXISTS employee("  \
                    "ID             INTEGER PRIMARY KEY," \
                    "NAME           TEXT    NOT NULL," \
                    "AGE            INT     NOT NULL," \
                    "ADDRESS        TEXT);";
    query.prepare(q);
    if (!query.exec()){
        status += query.lastError().text();
    }
    else{
       status += "Table created successfully";
    }
}

void Dao::dao_insert(Person person, QString& status){

    QSqlQuery query(db);
    query.prepare("INSERT INTO employee (ID, NAME, AGE, ADDRESS) "\
                   "VALUES (NULL, :name, :age, :address)");

    query.bindValue(":name", person.name);
    query.bindValue(":age", person.age);
    query.bindValue(":address", person.address);

    if(! query.exec()){
        status = query.lastError().text();
    }
    else{
        status = "Record Inserted Successfully";
    }
}

QSqlQuery Dao::dao_select(QString& status){

    QSqlQuery query(db);
    query.prepare("SELECT * FROM EMPLOYEE");
    if (!query.exec()){
        status = query.lastError().text();
    }
    else{
        if(query.size() == -1){
            status = "Query Executed Successfully";
            //qDebug() << query.record.count();
        }

        else{
            status = "Database is empty";
        }
    }
    return query;
}

QSqlQuery Dao::dao_select(int id, QString& status){

    QSqlQuery query;

    query.prepare("SELECT * FROM EMPLOYEE where ID = :id");
    query.bindValue(":id", id);

    if (!query.exec()){
        status = query.lastError().text();
    }

    else{
        if (query.size() == -1){
            status = "Query Executed Successfully";
            //qDebug() << query.record.count();
        }

        else{
            status = "No Such ID";
        }
    }
    return query;
}

void Dao::dao_delete(int id, QString& status, bool& queryIsExecuted){

    QSqlQuery query;
    query.prepare("DELETE FROM employee WHERE ID = :id");
    query.bindValue(":id", id);
    if (!query.exec()){
        status = query.lastError().text();
        queryIsExecuted = false;
    }

    else if (query.numRowsAffected() == 0){
        status = "NO Such ID";
        queryIsExecuted = false;
    }

    else{
        status = "Record Deleted Successfully";
        queryIsExecuted = true;
    }


}

Dao::~Dao(){
    db.close();
}

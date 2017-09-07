#include "Headers/dao.h"

Dao::Dao()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dileny");
    db.open();
}

Dao::Dao(QString databasename)
{

    db = QSqlDatabase::addDatabase("QSQLITE");
    if (databasename == ""){
        db.setDatabaseName("dileny.db");
    }
    else{
        db.setDatabaseName(databasename);
    }

    try{
        if (!db.open() && db.isOpenError())
        {
            throw "connection failed";
        }
    }

    catch(...){
        /**
         * https://stackoverflow.com/questions/30250934/how-to-end-c-code
         *
        */
        /****
         *
         Bad method to end the program ...
         *
        ****/
        std::exit(0);
    }
}

bool Dao::isUser(Account& account, QString& status)
{
    //
    QString qry = "SELECT USERNAME, PASSWORD, PRIVILEGE "
                  "FROM ACCOUNT "
                  "WHERE USERNAME = :username AND PASSWORD = :password";

    QSqlQuery query(db);
    query.prepare(qry);

    query.bindValue(":username", account.get_username());
    query.bindValue(":password", account.get_password());

    if(! query.exec() ){
        status = query.lastError().text();
        return false;
    }
    else{
        if(query.first()){
            status = "login successfully";
            account.set_privilage(query.value("PRIVILEGE").toInt());
            return true;
        }
    }
    status = "check your username and password";
    return false;
}

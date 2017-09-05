#include "Headers/dao.h"

Dao::Dao()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dileny");
    db.open();
}

//Dao::Dao(QString databasename)
//{

//    db = QSqlDatabase::addDatabase("QSQLITE");
//    if (databasename == ""){
//        db.setDatabaseName("dileny.db");
//    }
//    else{
//        db.setDatabaseName(databasename);
//    }

//    try{
//        if (!db.open() && db.isOpenError())
//        {
//            throw "connection failed";
//        }
//    }

//    catch(...){
//        /**
//         * https://stackoverflow.com/questions/30250934/how-to-end-c-code
//         *
//        */
//        /****
//         *
//         Bad method to end the program ...
//         *
//        ****/
//        std::exit(0);
//    }
//}

bool Dao::isUser(Account account)
{
    QString qry = "SELECT USERNAME, PASSWORD "
                  "FROM ACCOUNT "
                  "WHERE USERNAME = :username AND PASSWORD = :password";


    QSqlQuery query(db);
    query.prepare(qry);

    qDebug() << account.get_username();
    qDebug() << account.get_password();

    query.bindValue(":username", account.get_username());
    query.bindValue(":password", account.get_password());

    if(! query.exec() ){
        qDebug()<< query.lastError().text();
        return false;
    }
    else{
        if(query.first()){
            return true;
        }
    }
    return false;
}

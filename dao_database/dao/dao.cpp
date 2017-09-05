#include "dao.h"

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

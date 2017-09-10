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

QStringListModel* Dao::selectPhysician(){

    QSqlQuery query(db);
    QStringListModel* model = new QStringListModel();
    QStringList list;

    query.prepare("SELECT name FROM Physician");

    if (!query.exec()){
    }
    else{
        while(query.next()){
            list.append(query.value(0).toString());
        }
    }

    model->setStringList(list);
    return model;
}

QStringListModel* Dao::selectExamtype(){

    QSqlQuery query(db);
    QStringListModel* model = new QStringListModel();
    QStringList list;

    query.prepare("SELECT type FROM Examtype");

    if (!query.exec()){
    }
    else{
        while(query.next()){
            list.append(query.value(0).toString());
        }
    }

    model->setStringList(list);
    return model;
}

void Dao::insertPatient(Patient patient, QString& status)
{
    QString qry = "INSERT INTO PATIENT (ID, FIRSTNAME, LASTNAME, GENDER, BIRTHDAY, HEIGHT, WEIGHT)"
                  "VALUES (:id, :firstname, :lastname, :gender, :birthday, :height, :weight)";


    QSqlQuery query(db);
    query.prepare(qry);

    query.bindValue(":id", patient.get_id());
    query.bindValue(":firstname", patient.get_firstname());
    query.bindValue(":lastname", patient.get_lastname());
    query.bindValue(":gender", patient.get_gender());
    query.bindValue(":birthday", patient.get_birthday());
    query.bindValue(":height", patient.get_height());
    query.bindValue(":weight", patient.get_weight());

    if(! query.exec() ){
        status = query.lastError().text();
    }
    else{
        status = "Patient Inserted Successfully";
    }
    //status = "check your username and password";
}

QSqlTableModel *Dao::selectPatient(QString id, QString& status)
{
    QSqlTableModel* model = new QSqlTableModel();
    model->setTable("PATIENT");
    QString filter = QString("id LIKE ") + "'%" + id + "%'";
    model->setFilter(filter);
    model->select();
    status = "Successful";
    return model;
}

QStringListModel* Dao::selectRefPhysician(){

    QSqlQuery query(db);
    QStringListModel* model = new QStringListModel();
    QStringList list;

    query.prepare("SELECT name FROM RefPhysician");

    if (!query.exec()){
        qDebug() << "????????????????????????";
    }
    else{
        while(query.next()){
            list.append(query.value(0).toString());
        }
    }

    model->setStringList(list);
    return model;
}

QStringListModel* Dao::selectDepartment(){

    QSqlQuery query(db);
    QStringListModel* model = new QStringListModel();
    QStringList list;

    query.prepare("SELECT name FROM Department");

    if (!query.exec()){
    }
    else{
        while(query.next()){
            list.append(query.value(0).toString());
        }
    }

    model->setStringList(list);
    return model;
}

#include <QCoreApplication>
#include <QtSql/QtSql>

int main()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dileny");
    db.open();

    QSqlQuery query;
        query.exec("CREATE TABLE IF NOT EXISTS patient ("
                   "id          INTEGER    ,"
                   "firstname   VARCHAR(20),"
                   "middlename  VARCHAR(20),"
                   "lastname    VARCHAR(20),"
                   "gender      VARCHAR(20),"
                   "birthday    VARCHAR(8) ,"
                   "address     VARCHAR(30))"
                   "PRIMARY KEY (id) )");

        query.exec("CREATE TABLE IF NOT EXISTS disease ("
                   "patient_id  INTEGER    ,"
                   "disease     VARCHAR(50),"
                   "PRIMARY KEY (patient_id, disiease) )");

        query.exec("CREATE TABLE IF NOT EXISTS doctor ("
                   "id          INTEGER    , "
                   "firstname   VARCHAR(20),"
                   "middlename  VARCHAR(20),"
                   "lastname    VARCHAR(20),"
                   "gender      VARCHAR(20),"
                   "birthday    VARCHAR(8) ,"
                   "address     VARCHAR(30)"
                   "PRIMARY KEY (id) )");

        query.exec("CREATE TABLE IF NOT EXISTS patient_mobile ("
                   "patient_id  INTEGER     PRIMARY KEY REFERENCES patient(id), "
                   "mobile      VARCHAR(20) PRIMARY KEY"
                   "FOREIGN KEY (patient_id) REFERENCES patient(id)"
                   "PRIMARY KEY (patient_id, mobile) )");

        query.exec("CREATE TABLE IF NOT EXISTS doctor_mobile ("
                   "doctor_id   INTEGER    , "
                   "mobile      VARCHAR(20),"
                   "PRIMARY KEY (doctor_id, mobile)"
                   "FOREIGN KEY (doctor_id) REFERENCES doctor(id) )");

        query.exec("CREATE TABLE IF NOT EXISTS patient_doctor ("
                   "patient_id   INTEGER,"
                   "doctor_id    INTEGER,"
                   "PRIMARY KEY (patient_id, doctor_id),"
                   "FOREIGN KEY (patient_id) REFERENCES patient(id),"
                   "FOREIGN KEY (doctor_id) REFERENCES doctor(id) )");

        query.exec("CREATE TABLE IF NOT EXISTS visit ("
                   "id          INTEGER   ,"
                   "date        VARCHAR(8),"
                   "patient_id  INTEGER   ,"
                   "doctor_id   INTEGER   ,"
                   "PRIMARY KEY (id)      ,"
                   "FOREIGN KEY (patient_id) REFERENCES patient(id),"
                   "FOREIGN KEY (doctor_id)  REFERENCES doctor(id) )");

        query.exec("CREATE TABLE IF NOT EXISTS image ("
                   "id            INTEGER,"
                   "filename      TEXT   ,"
                   "image_data    BLOB   ,"
                   "patient_id    INTEGER,"
                   "doctor_id     INTEGER,"
                   "tsukuba_score VARCHAR(1),"
                   "comments      TEXT   ,"
                   "PRIMARY KEY (id),"
                   "FOREIGN KEY (patient_id) REFERENCES patient(id),"
                   "FOREIGN KEY (doctor_id)  REFERENCES doctor(id) )");

        db.close();
}

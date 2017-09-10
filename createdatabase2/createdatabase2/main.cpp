#include <QCoreApplication>
#include <QtSql/QtSql>

int main()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("dileny");
    db.open();

    QSqlQuery query;
        query.exec("CREATE TABLE IF NOT EXISTS patient ("
                   "id          TEXT,"
                   "firstname   TEXT,"
                   "lastname    TEXT,"
                   "prefix      TEXT,"
                   "gender      TEXT,"
                   "birthday    TEXT,"
                   "height      REAL,"
                   "weight      REAL,"
                   "PRIMARY KEY (id) )");

        query.exec("CREATE TABLE IF NOT EXISTS visit ("
                   "id              INT ,"
                   "date            TEXT,"
                   "patient_id      TEXT,"
                   "physician       TEXT,"
                   "ref_physician   TEXT,"
                   "department      TEXT,"
                   "PRIMARY KEY (id),"
                   "FOREIGN KEY (patient_id) REFERENCES patient(id) )");


        query.exec("CREATE TABLE IF NOT EXISTS account ("
                   "username    TEXT    ,"
                   "password    TEXT    ,"
                   "privilege   NUMERIC ,"
                   "PRIMARY KEY (username) )");

        query.exec("CREATE TABLE IF NOT EXISTS image ("
                   "id            INT ,"
                   "visit_id      INT ,"
                   "patient_id    TEXT,"
                   "filename      TEXT,"
                   "image_data    BLOB,"
                   "tsukuba_score TEXT,"
                   "comments      TEXT,"
                   "PRIMARY KEY (id),"
                   "FOREIGN KEY (patient_id) REFERENCES patient(id),"
                   "FOREIGN KEY (visit_id) REFERENCES visit(id) )");

        query.exec("CREATE TABLE IF NOT EXISTS physician ("
                   "name    TEXT    ,"
                   "PRIMARY KEY (name) )");

        query.exec("CREATE TABLE IF NOT EXISTS refphysician ("
                   "name    TEXT    ,"
                   "PRIMARY KEY (name) )");

        query.exec("CREATE TABLE IF NOT EXISTS department ("
                   "name    TEXT    ,"
                   "PRIMARY KEY (name) )");

        query.exec("CREATE TABLE IF NOT EXISTS examtype ("
                   "type    TEXT    ,"
                   "PRIMARY KEY (type) )");

        qDebug() << query.lastError().text();

        db.close();
}

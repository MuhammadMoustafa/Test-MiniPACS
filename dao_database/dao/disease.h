#ifndef DISEASE_H
#define DISEASE_H
#include <QtSql/QtSql>

struct Disease
{
public:
    Disease();

    void set_patient_id(int patient_id);
    int get_patient_id();

    void set_disease(QString disease);
    QString get_disease();

private:
    int patient_id;
    QString disease;
};

#endif // DISEASE_H

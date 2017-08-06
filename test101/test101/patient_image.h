#ifndef PATIENT_IMAGE_H
#define PATIENT_IMAGE_H

#include <QtCore>

class Patient_Image
{
public:

    int id;
    QString filename;
    QByteArray image;

    Patient_Image();
    Patient_Image(int id, QString filename, QByteArray image);
};

#endif // PATIENT_IMAGE_H

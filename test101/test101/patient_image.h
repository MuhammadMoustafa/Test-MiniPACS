#ifndef PATIENT_IMAGE_H
#define PATIENT_IMAGE_H

#include <QtCore>

/**
 The names of all types — classes, structs, type aliases, enums, and type template parameters — have the same naming convention.
 Type names should start with a capital letter and have a capital letter for each new word. No underscores.

 https://google.github.io/styleguide/cppguide.html#Variable_Names
 */
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

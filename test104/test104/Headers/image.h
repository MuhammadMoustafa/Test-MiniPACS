#ifndef IMAGE_H
#define IMAGE_H

#include <QtCore>

class image
{
public:
    image();
    
    void set_image_id(int image_id);
    int get_image_id();
    
    void set_visit_id(int visit_id);
    int get_visit_id();

    void set_filename(QString filename);
    QString get_filename();
    
    void set_image_data(QByteArray image_data);
    QByteArray get_image_data();
    
    void set_patient_id(QString patient_id);
    QString get_patient_id();
    
    void set_tsukuba_score(QChar tsukuba_score);
    QChar get_tsukuba_score();
    
    void set_comment(QString comment);
    QString get_comment();
    
private:
    int image_id;
    int visit_id;
    QString patient_id;
    QString filename;
    QByteArray image_data;
    QChar tsukuba_score;
    QString comment;

};

#endif // IMAGE_H

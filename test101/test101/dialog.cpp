#include "dialog.h"
#include "ui_dialog.h"
#include <QtWidgets>
#include <QLabel>

void Dialog::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';

    QLabel *label = new QLabel(this);
    label->setText(text);
}
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

/**
parametes without default values must be written before those with // c++ rules
 */
Dialog::Dialog(QVector <QByteArray> & images, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    int yPos=-1;
    int xPos=-1;
    for (int i = 0; i < images.length(); i++){
        QLabel *label = new QLabel(this);

        int width =500;
        int height =300;

        if ( i%3 == 0){
            yPos++;
            xPos = -1;
        }

        xPos++;
        label->setGeometry(xPos*width, yPos*height, width, height);


        QPixmap pixmap = QPixmap();
        pixmap.loadFromData(images.at(i));
        /**
        using at() is faster than [] operator as ... using non-const operators can cause QVector to do a deep copy.

        Note:
        const T &QVector::at(int i) const
        T &QVector::operator[](int i)

         at() is a constatnt operator, unlike operator[] which is a non constatnt
        */
        label->setPixmap(pixmap.scaled(label->size(), Qt::KeepAspectRatio));
        label->show();
    }

    //QLabel *label = new QLabel(this);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));

    timer->start(1000);

    //qDebug() << timer->isSingleShot();
    //showTime();
}

Dialog::~Dialog()
{
    delete ui;
}

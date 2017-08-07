#ifndef DIALOG_H
#define DIALOG_H

#include <QtCore>
#include <QtGui>
#include <QDialog>
#include <QGraphicsScene>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QVector <QByteArray> & images, QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    //QGraphicsScene *scene;
};

#endif // DIALOG_H

#ifndef DIALOG_H
#define DIALOG_H

#include <QtCore>
#include <QtGui>
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    explicit Dialog(QVector <QByteArray> & images, QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    //QGraphicsScene *scene;

private slots:
    void showTime();
};

#endif // DIALOG_H

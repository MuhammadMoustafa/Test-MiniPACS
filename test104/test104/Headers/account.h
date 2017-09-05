#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QtCore>

class Account
{
public:
    Account();

    void set_username(QString username);
    void set_password(QString password);
    void set_privilage(int privilage);

    QString get_username();
    QString get_password();
    int get_privilage();

private:
    QString username;
    QString password;
    int privilege;
};

#endif // ACCOUNT_H

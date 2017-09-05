#include "Headers/account.h"

Account::Account()
{

}

void Account::set_username(QString username)
{
    this->username = username;
}

void Account::set_password(QString password)
{
    this->password = password;
}

void Account::set_privilage(int privilage)
{
    this->privilege = privilage;
}

QString Account::get_username()
{
    return this->username;
}

QString Account::get_password()
{
    return this->password;
}

int Account::get_privilage()
{
    return this->privilege;
}


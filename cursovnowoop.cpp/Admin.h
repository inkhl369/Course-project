#pragma once
#include "Header.h"

class User
{
private:
    string login;//логин 
    string password;//пароль 
public:
    User();
    User(const User&);
    User(string, string);
    void setData();
    void Test();
    int authorization();
    bool TestAuthotizalion();
    friend ostream& operator<<(ostream&, User&);
    friend istream& operator >> (istream&, User&);
    friend ofstream& operator<<(ofstream&, User&);
    friend ifstream& operator >> (ifstream&, User&);
    ~User();
};
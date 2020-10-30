#pragma once
#include "Header.h"
class Student
{
protected:
    string F;//фамилия
    string I;//имя
    string O;//отчество
    int year;//год рождения
public:
    Student(); 
    Student(const Student&); 
    Student(string, string, string, int);
    ~Student(); 
    void setData(); //метод, определяющий поля элемента
    void showData(); //метод, выводящий данные полей элемента
    void showLabel(); //метод, выводящий поля элемента
    void editData(); //метод, изменяющий данные полей элемента
    virtual string getF(); //метод, возвращающий F
    virtual string getI(); //метод, возвращающий I
    virtual string getO(); //метод, возвращающий O
    virtual int getYear(); //метод, возвращающий значение year
    virtual void setF(string); //метод, изменяющий значение F
    virtual void setI(string); //метод, изменяющий значение I
    virtual void setO(string); //метод, изменяющий значение O
    virtual void setYear(int); //метод, изменяющий значение year
    friend ostream& operator << (ostream&, Student&);
    friend istream& operator >> (istream&, Student&); 
    friend ofstream& operator << (ofstream&, Student&); 
    friend ifstream& operator >> (ifstream&, Student&); 
    Student operator = (const Student&); 
    void showHeader(); 
};

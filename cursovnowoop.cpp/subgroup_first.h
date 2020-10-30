#pragma once
#include "Student.h"

class subgroup_first : public Student
{
protected:
    int credit; //количество сданных зачЄтов
    int exam;// количество сданных экзаменов
    double grade_point_average;//средний балл
public:
    subgroup_first(); 
    subgroup_first(const subgroup_first&); 
    subgroup_first(string, string, string, int, int, int, double); 
    ~subgroup_first(); 
    void setData(); //метод, определ€ющий пол€ элемента
    virtual void setCredit(int); //метод, измен€ющий значение credit
    void showData(); //метод, вывод€щий данные полей элемента
    void editData(); //метод, измен€ющий данные полей элемента
    void showLabel(); //метод, вывод€щий полей элемента
    friend ostream& operator << (ostream&, subgroup_first&); 
    friend istream& operator >> (istream&, subgroup_first&); 
    subgroup_first operator=(const subgroup_first&); 
    friend ofstream& operator << (ofstream&, subgroup_first&);
    friend ifstream& operator >> (ifstream&, subgroup_first&); 
    void showHeader(); 
}; 

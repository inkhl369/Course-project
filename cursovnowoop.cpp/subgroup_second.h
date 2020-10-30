#pragma once
#include "Student.h"

class subgroup_second : public Student
{
protected:
    int  credit; //количество сданных зачЄтов
    int exam;// количество сданных экзаменов
    double grade_point_average;//средний балл
public:
    subgroup_second();
    subgroup_second(const subgroup_second &); 
    subgroup_second(string, string, string, int, int, int, double);
    ~subgroup_second(); 
    void setData(); //метод, определ€ющий пол€ элемента
    void showData(); //метод, вывод€щий данные полей элемента
    void editData(); //метод, измен€ющий данные полей элемента
    void showLabel(); //метод, вывод€щий полей элемента
    friend ostream& operator<<(ostream&, subgroup_second &); 
    friend istream& operator >> (istream&, subgroup_second &); 
    subgroup_second  operator=(const subgroup_second &); 
    friend ofstream& operator<<(ofstream&, subgroup_second &); 
    friend ifstream& operator >> (ifstream&, subgroup_second &); 
    void showHeader(); 
};
#pragma once
#include "subgroup_first.h"

class students_successful_subgroup_1 : public subgroup_first
{
protected:
    int max_rating;//максимальна€ оценка за экзамен
    int min_rating;//минимальна€ оценка за экзамен
public:
    students_successful_subgroup_1(); 
    students_successful_subgroup_1(const students_successful_subgroup_1&);
    students_successful_subgroup_1(string, string, string, int, int, int, double, int, int); 
    ~students_successful_subgroup_1();  //деструктор без параметров
    void setData(); //метод, определ€ющий пол€ элемента
    void showData(); //метод, вывод€щий данные полей элемента
    void editData(); //метод, измен€ющий данные полей элемента
    void showLabel(); //метод, вывод€щий пол€ элемента
    friend ostream& operator<<(ostream&, students_successful_subgroup_1&);
    friend istream& operator >> (istream&, students_successful_subgroup_1&); 
    friend ofstream& operator<<(ofstream&, students_successful_subgroup_1&); 
    friend ifstream& operator >> (ifstream&, students_successful_subgroup_1&); 
    students_successful_subgroup_1 operator=(const students_successful_subgroup_1&);
    void showHeader(); 
};

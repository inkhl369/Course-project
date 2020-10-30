
#pragma once
#include "subgroup_second.h"

class students_lagging_subgroup_2 : public subgroup_second
{
protected:
    int debts_for_credit;//количество задолженностей по зачЄтам
    int debt_for_exams; //количество задолженностей по экзаменам
public:
    students_lagging_subgroup_2(); 
    students_lagging_subgroup_2(const students_lagging_subgroup_2&);
    students_lagging_subgroup_2(string, string, string, int, int, int, double, int, int); 
    ~students_lagging_subgroup_2();  //деструктор без параметров
    void setData(); //метод, определ€ющий пол€ элемента
    void showData(); //метод, вывод€щий данные полей элемента
    void editData(); //метод, измен€ющий данные полей элемента
    void showLabel(); //метод, вывод€щий пол€ элемента
    friend ostream& operator<<(ostream&, students_lagging_subgroup_2&); 
    friend istream& operator >> (istream&, students_lagging_subgroup_2&); 
    friend ofstream& operator<<(ofstream&, students_lagging_subgroup_2&); 
    friend ifstream& operator >> (ifstream&, students_lagging_subgroup_2&); 
    students_lagging_subgroup_2 operator=(const students_lagging_subgroup_2&); 
    void showHeader(); 
};

#pragma once
#include "subgroup_first.h"

class students_lagging_subgroup_1 : public subgroup_first
{
protected:
    int debts_for_credit;//количество задолженностей по зачЄтам
    int debt_for_exams; //количество задолженностей по экзаменам
public:
    students_lagging_subgroup_1(); 
    students_lagging_subgroup_1(const students_lagging_subgroup_1&); 
    students_lagging_subgroup_1(string, string, string, int, int, int, double, int, int); 
    ~students_lagging_subgroup_1();  //деструктор без параметров
    void setData(); //метод, определ€ющий пол€ элемента
    void showData(); //метод, вывод€щий данные полей элемента
    void editData(); //метод, измен€ющий данные полей элемента
    void showLabel(); //метод, вывод€щий пол€ элемента
    friend ostream& operator<<(ostream&, students_lagging_subgroup_1&); 
    friend istream& operator >> (istream&, students_lagging_subgroup_1&); 
    friend ofstream& operator<<(ofstream&, students_lagging_subgroup_1&); 
    friend ifstream& operator >> (ifstream&, students_lagging_subgroup_1&);
    students_lagging_subgroup_1 operator=(const students_lagging_subgroup_1&);
    void showHeader(); 
}; 

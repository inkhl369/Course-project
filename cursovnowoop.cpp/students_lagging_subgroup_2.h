
#pragma once
#include "subgroup_second.h"

class students_lagging_subgroup_2 : public subgroup_second
{
protected:
    int debts_for_credit;//���������� �������������� �� �������
    int debt_for_exams; //���������� �������������� �� ���������
public:
    students_lagging_subgroup_2(); 
    students_lagging_subgroup_2(const students_lagging_subgroup_2&);
    students_lagging_subgroup_2(string, string, string, int, int, int, double, int, int); 
    ~students_lagging_subgroup_2();  //���������� ��� ����������
    void setData(); //�����, ������������ ���� ��������
    void showData(); //�����, ��������� ������ ����� ��������
    void editData(); //�����, ���������� ������ ����� ��������
    void showLabel(); //�����, ��������� ���� ��������
    friend ostream& operator<<(ostream&, students_lagging_subgroup_2&); 
    friend istream& operator >> (istream&, students_lagging_subgroup_2&); 
    friend ofstream& operator<<(ofstream&, students_lagging_subgroup_2&); 
    friend ifstream& operator >> (ifstream&, students_lagging_subgroup_2&); 
    students_lagging_subgroup_2 operator=(const students_lagging_subgroup_2&); 
    void showHeader(); 
};

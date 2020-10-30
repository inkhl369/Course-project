#pragma once
#include "subgroup_first.h"

class students_lagging_subgroup_1 : public subgroup_first
{
protected:
    int debts_for_credit;//���������� �������������� �� �������
    int debt_for_exams; //���������� �������������� �� ���������
public:
    students_lagging_subgroup_1(); 
    students_lagging_subgroup_1(const students_lagging_subgroup_1&); 
    students_lagging_subgroup_1(string, string, string, int, int, int, double, int, int); 
    ~students_lagging_subgroup_1();  //���������� ��� ����������
    void setData(); //�����, ������������ ���� ��������
    void showData(); //�����, ��������� ������ ����� ��������
    void editData(); //�����, ���������� ������ ����� ��������
    void showLabel(); //�����, ��������� ���� ��������
    friend ostream& operator<<(ostream&, students_lagging_subgroup_1&); 
    friend istream& operator >> (istream&, students_lagging_subgroup_1&); 
    friend ofstream& operator<<(ofstream&, students_lagging_subgroup_1&); 
    friend ifstream& operator >> (ifstream&, students_lagging_subgroup_1&);
    students_lagging_subgroup_1 operator=(const students_lagging_subgroup_1&);
    void showHeader(); 
}; 

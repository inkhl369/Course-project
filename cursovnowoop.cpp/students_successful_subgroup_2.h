#pragma once
#include "subgroup_second.h"

class students_successful_subgroup_2 : public subgroup_second
{
protected:
    int max_rating;//������������ ������ �� �������
    int min_rating;//����������� ������ �� �������
public:
    students_successful_subgroup_2(); 
    students_successful_subgroup_2(const students_successful_subgroup_2&); 
    students_successful_subgroup_2(string, string, string, int, int, int, double, int, int); 
    ~students_successful_subgroup_2();  
    void setData(); //�����, ������������ ���� ��������
    void showData(); //�����, ��������� ������ ����� ��������
    void editData(); //�����, ���������� ������ ����� ��������
    void showLabel(); //�����, ��������� ���� ��������
    friend ostream& operator<<(ostream&, students_successful_subgroup_2&); 
    friend istream& operator >> (istream&, students_successful_subgroup_2&); 
    friend ofstream& operator << (ofstream&, students_successful_subgroup_2&); 
    friend ifstream& operator >> (ifstream&, students_successful_subgroup_2&);
    students_successful_subgroup_2 operator=(const students_successful_subgroup_2&); 
    void showHeader(); 
};


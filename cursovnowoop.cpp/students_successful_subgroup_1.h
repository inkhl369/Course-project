#pragma once
#include "subgroup_first.h"

class students_successful_subgroup_1 : public subgroup_first
{
protected:
    int max_rating;//������������ ������ �� �������
    int min_rating;//����������� ������ �� �������
public:
    students_successful_subgroup_1(); 
    students_successful_subgroup_1(const students_successful_subgroup_1&);
    students_successful_subgroup_1(string, string, string, int, int, int, double, int, int); 
    ~students_successful_subgroup_1();  //���������� ��� ����������
    void setData(); //�����, ������������ ���� ��������
    void showData(); //�����, ��������� ������ ����� ��������
    void editData(); //�����, ���������� ������ ����� ��������
    void showLabel(); //�����, ��������� ���� ��������
    friend ostream& operator<<(ostream&, students_successful_subgroup_1&);
    friend istream& operator >> (istream&, students_successful_subgroup_1&); 
    friend ofstream& operator<<(ofstream&, students_successful_subgroup_1&); 
    friend ifstream& operator >> (ifstream&, students_successful_subgroup_1&); 
    students_successful_subgroup_1 operator=(const students_successful_subgroup_1&);
    void showHeader(); 
};

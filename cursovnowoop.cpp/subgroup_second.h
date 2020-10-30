#pragma once
#include "Student.h"

class subgroup_second : public Student
{
protected:
    int  credit; //���������� ������� �������
    int exam;// ���������� ������� ���������
    double grade_point_average;//������� ����
public:
    subgroup_second();
    subgroup_second(const subgroup_second &); 
    subgroup_second(string, string, string, int, int, int, double);
    ~subgroup_second(); 
    void setData(); //�����, ������������ ���� ��������
    void showData(); //�����, ��������� ������ ����� ��������
    void editData(); //�����, ���������� ������ ����� ��������
    void showLabel(); //�����, ��������� ����� ��������
    friend ostream& operator<<(ostream&, subgroup_second &); 
    friend istream& operator >> (istream&, subgroup_second &); 
    subgroup_second  operator=(const subgroup_second &); 
    friend ofstream& operator<<(ofstream&, subgroup_second &); 
    friend ifstream& operator >> (ifstream&, subgroup_second &); 
    void showHeader(); 
};
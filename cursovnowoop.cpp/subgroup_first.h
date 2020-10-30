#pragma once
#include "Student.h"

class subgroup_first : public Student
{
protected:
    int credit; //���������� ������� �������
    int exam;// ���������� ������� ���������
    double grade_point_average;//������� ����
public:
    subgroup_first(); 
    subgroup_first(const subgroup_first&); 
    subgroup_first(string, string, string, int, int, int, double); 
    ~subgroup_first(); 
    void setData(); //�����, ������������ ���� ��������
    virtual void setCredit(int); //�����, ���������� �������� credit
    void showData(); //�����, ��������� ������ ����� ��������
    void editData(); //�����, ���������� ������ ����� ��������
    void showLabel(); //�����, ��������� ����� ��������
    friend ostream& operator << (ostream&, subgroup_first&); 
    friend istream& operator >> (istream&, subgroup_first&); 
    subgroup_first operator=(const subgroup_first&); 
    friend ofstream& operator << (ofstream&, subgroup_first&);
    friend ifstream& operator >> (ifstream&, subgroup_first&); 
    void showHeader(); 
}; 

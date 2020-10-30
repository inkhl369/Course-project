#pragma once
#include "Header.h"
class Student
{
protected:
    string F;//�������
    string I;//���
    string O;//��������
    int year;//��� ��������
public:
    Student(); 
    Student(const Student&); 
    Student(string, string, string, int);
    ~Student(); 
    void setData(); //�����, ������������ ���� ��������
    void showData(); //�����, ��������� ������ ����� ��������
    void showLabel(); //�����, ��������� ���� ��������
    void editData(); //�����, ���������� ������ ����� ��������
    virtual string getF(); //�����, ������������ F
    virtual string getI(); //�����, ������������ I
    virtual string getO(); //�����, ������������ O
    virtual int getYear(); //�����, ������������ �������� year
    virtual void setF(string); //�����, ���������� �������� F
    virtual void setI(string); //�����, ���������� �������� I
    virtual void setO(string); //�����, ���������� �������� O
    virtual void setYear(int); //�����, ���������� �������� year
    friend ostream& operator << (ostream&, Student&);
    friend istream& operator >> (istream&, Student&); 
    friend ofstream& operator << (ofstream&, Student&); 
    friend ifstream& operator >> (ifstream&, Student&); 
    Student operator = (const Student&); 
    void showHeader(); 
};

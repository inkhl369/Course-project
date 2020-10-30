#pragma once
#include "Admin.h"
#include "students_lagging_subgroup_1.h"
#include "students_lagging_subgroup_2.h"
#include "students_successful_subgroup_1.h"
#include "students_successful_subgroup_2.h"
#include "subgroup_second.h"
#include "subgroup_first.h"
#include "Student.h"
#include "Header.h"
#include <Windows.h>

using namespace std;
template<class T>
struct Line
{
    T variab; //�������
    Line<T> *next; //��������� �� ��������� �������
    Line<T> *prev; //��������� �� ����������� �������
};

template<class T>
class List
{
private:
    Line<T> *begin; //��������� �� ������ ������
    Line<T> *end; //��������� �� ����� ������
    int count; //���������� ���������
public:
    List(); 
    T dellOne(); //������� ������� � ������
    T dellOneBack(); //������� ������� � �����
    T dellPoint(Line<T>*); //�������� ������������ ��������
    Line<T>* operator [] (int);
    void push(const T&); //�������� ������� � ������
    void pushBack(const T&); //�������� ������� � �����
    void dellElements();  //������� ��� ��������
    int getNumber();  //�����, ������������ ���� number
    void show(); //�����, ��������� ��� �������� ������ � ������
    void showBack(); //�����, ��������� ��� �������� ������ � �����
    void readFile(string);  //������ ������ �� �����
    void writeFile(string); //������ ������ � ����
    bool isEmpty(); //�������� �� �������
    void searchF(string); //����� �������� �� �������
    void searchI(string); //����� �������� �� �����
    void searchYear(int); //����� �������� �� ���� ��������
    void searchFI(string, string); //����� �������� �� ������� � �����
    void searchIYear(string, int); //����� �������� �� ����� � ���� ��������
    void searchFYear(string, int); //����� �������� �� ������� � ���� ��������
    ~List(); 
}; 

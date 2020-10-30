#pragma once
#include "List.cpp"

template<class T>
class Console
{
    T variab;
public:
    Console() {} 
    Console(const T& variab); //����������� �����������
    void MenuMain(int); //������� ����
    void MenuBase(int, string, int); //������� ����
    int selection_group(); //�����, ������������ ������ ���������
    void error(); //����� ��������� �� ������
    void empty(); //����� ��������� � ������ ������
    void success(); //����� ��������� �� �������� ���������� ��������
    int subcategory(); //����� ������ ���������
    int action_selection(); //����� ��������
    int mesto_data(); //����� ��� ���������� ��������
    int delete_mesto_data(); //����� ��� �������� ��������
    int show_mesto_data(); //����� ��� ������ �� �����
    int type_search_data(); //����� ��� ������ ��������
    int search1(); //����� ������ �� 1 ���������
    int search2(); //����� ������ �� 2 ����������
    void subgroup_first_students(int);
    void subgroup_second_students(int);
    void add_student(List<T> &);
    void delete_student(List<T> &);
    void search_student(List<T> &);
    void show_student(List<T>&);
    void editing_student(List<T>&);
    ~Console() {} 
};

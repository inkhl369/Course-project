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
    T variab; //элемент
    Line<T> *next; //указатель на следующий элемент
    Line<T> *prev; //указатель на предыдующий элемент
};

template<class T>
class List
{
private:
    Line<T> *begin; //указатель на начало списка
    Line<T> *end; //указатель на конец списка
    int count; //количество элементов
public:
    List(); 
    T dellOne(); //удалить элемент с начала
    T dellOneBack(); //удалить элемент с конца
    T dellPoint(Line<T>*); //удаление определённого элемента
    Line<T>* operator [] (int);
    void push(const T&); //добавить элемент в начало
    void pushBack(const T&); //добавить элемент в конец
    void dellElements();  //удалить все элементы
    int getNumber();  //метод, возвращающий поле number
    void show(); //метод, выводящий все элемента списка с начала
    void showBack(); //метод, выводящий все элемента списка с конца
    void readFile(string);  //чтение данных из файла
    void writeFile(string); //запись данных в файл
    bool isEmpty(); //проверка на пустоту
    void searchF(string); //поиск элемента по фамилии
    void searchI(string); //поиск элемента по имени
    void searchYear(int); //поиск элемента по году рождения
    void searchFI(string, string); //поиск элемента по фамилии и имени
    void searchIYear(string, int); //поиск элемента по имени и году рождения
    void searchFYear(string, int); //поиск элемента по фамилии и году рождения
    ~List(); 
}; 

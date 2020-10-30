#pragma once
#include "List.cpp"

template<class T>
class Console
{
    T variab;
public:
    Console() {} 
    Console(const T& variab); //конструктор копирования
    void MenuMain(int); //главное меню
    void MenuBase(int, string, int); //базовое меню
    int selection_group(); //метод, возвращающий группу студентов
    void error(); //вывод сообщения об ошибке
    void empty(); //вывод сообщения о пустом списке
    void success(); //вывод сообщения об успешном выполнении действия
    int subcategory(); //выбор группы студентов
    int action_selection(); //выбор действия
    int mesto_data(); //выбор при добавлении элемента
    int delete_mesto_data(); //выбор при удалении элемента
    int show_mesto_data(); //выбор при выводе на экран
    int type_search_data(); //выбор при поиске элемента
    int search1(); //выбор поиска по 1 параметру
    int search2(); //выбор поиска по 2 параметрам
    void subgroup_first_students(int);
    void subgroup_second_students(int);
    void add_student(List<T> &);
    void delete_student(List<T> &);
    void search_student(List<T> &);
    void show_student(List<T>&);
    void editing_student(List<T>&);
    ~Console() {} 
};

#include "Console.h"
#include "Validation.h"

template<class T>
Console<T>::Console(const T& variab)
{
    this->variab = variab.variab;
}

template<class T>
void Console<T>::MenuMain(int rol)
{
    int role = rol;
    int decision;
    while (true)
    {
        decision = selection_group();
        switch (decision)
        {
        case 1:
            subgroup_first_students(role);
            break;
        case 2:
            subgroup_second_students(role);
            break;
        case 3:
            system("cls");
            return;
        default:
            system("cls");
            error();
            break;
        }
    }
}

template<class T>
void Console<T>::MenuBase(int choice, string fileName, int role)
{
    List<T> list;
    bool flag = true;
    list.readFile(fileName);
    while (flag)
    {
        switch (action_selection())
        {
        case 1:
            add_student(list);
            list.writeFile(fileName);
            break;
        case 2:
            delete_student(list);
            list.writeFile(fileName);
            break;
        case 3:
            search_student(list);
            break;
        case 4:
            show_student(list);
            break;
        case 5:
            editing_student(list);
            list.writeFile(fileName);
            break;
        case 6:
            system("cls");
            flag = false;
            break;
        default:
            system("cls");
            error();
            break;
        }
    }
}

template<class T>
int Console<T>::selection_group()
{
    int decision;
    cout << "                                   �� ���������� ����� ������ �� ������ ��������? " << endl;
    SetColor(LightMagenta, Black);
    cout << "                                       ----------------------------------------" << endl;
    cout << "                                       | 1. 810101                            |" << endl;
    cout << "                                       |--------------------------------------|" << endl;
    cout << "                                       | 2. 810102                            |" << endl;
    cout << "                                       |--------------------------------------|" << endl;
    cout << "                                       | 3. �����                             |" << endl;
    cout << "                                       ----------------------------------------" << endl << endl;
    cout << "\t\t���� ->: ";
    SetColor(Green, Black);
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 3);
    return decision;
}

template<class T>
void Console<T>::error()
{
    cout << endl << endl;
    SetColor(Red, Black);
    cout << endl;
    cout << "����� ����� �����������! ���������� ��� ���" << endl;
    Sleep(1000);
    SetColor(White, Black);
}

template<class T>
int Console<T>::subcategory()
{
    int decision;
    system("cls");
    SetColor(White, Black);
    cout << "                                          �������� ������������ ������" << endl;
    SetColor(Blue, Black);
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 1. �������� ��������                 |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 2. �������� � ����������� ������     |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 3. �����                             |" << endl;
    cout << "                                     ----------------------------------------" << endl << endl;
    SetColor(White, Black);
    cout << "\t\t���� ->: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 3);
    return decision;
}

template<class T>
int Console<T>::action_selection()
{
    int decision;
    system("cls");
    SetColor(White, Black);
    cout << "                                                   �������� � �������" << endl;
    SetColor(Magenta, Black);
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 1. �������� ��������                 |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 2. ������� ��������                  |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 3. ����� ��������                    |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 4. ����������� ������                |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 5. �������������� ������             |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 6. �����                             |" << endl;
    cout << "                                     ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "\t\t���� ->: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 6);
    return decision;
}


template<class T>
int Console<T>::mesto_data()
{
    int decision;
    system("cls");
    cout << "                                                   �������� ��������" << endl;
    SetColor(Green, Black);
    cout << "                                        ----------------------------------------" << endl;
    cout << "                                        | 1. �������� � ������ ������          |" << endl;
    cout << "                                        ----------------------------------------" << endl;
    cout << "                                        | 2. �������� � ����� ������           |" << endl;
    cout << "                                        ----------------------------------------" << endl;
    cout << "                                        | 3. �����                             |" << endl;
    cout << "                                        ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "\t\t���� ->: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 3);
    return decision;
}

template<class T>
int Console<T>::delete_mesto_data()
{
    int decision;
    system("cls");
    cout << "                                                �������� ��������" << endl;
    SetColor(Green, Black);
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 1. ������� � ������ ������           |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 2. ������� � ����� ������            |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 3. ������� �������� ������� ������   |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 4. �����                             |" << endl;
    cout << "                                     ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "\t\t���� ->: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 4);
    return decision;
}

template<class T>
int Console<T>::type_search_data()
{
    int decision;
    system("cls");
    cout << "                                                      �������� ��������" << endl;
    SetColor(Green, Black);
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 1. ����� �� 1 ���������              |" << endl;
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 2. ����� �� 2 ����������             |" << endl;
    cout << "                                            ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "\t\t���� ->: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 2);
    return decision;
}

template<class T>
int Console<T>::search1()
{
    int decision;
    system("cls");
    cout << "                                                       �������� ��������" << endl;
    SetColor(Green, Black);
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 1. ����� �� ������� ������           |" << endl;
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 2. ����� �� ����� ��������           |" << endl;
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 3. ����� �� ���� ��������            |" << endl;
    cout << "                                            ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "\t\t���� ->: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 3);
    return decision;
}

template<class T>
int Console<T>::search2()
{
    int decision;
    system("cls");
    cout << "                                                     �������� ��������" << endl;
    SetColor(Green, Black);
    cout << "                                            ----------------------------------------------" << endl;
    cout << "                                            | 1. ����� �� ������� � ����� ��������        |" << endl;
    cout << "                                            ----------------------------------------------" << endl;
    cout << "                                            | 2. ����� �� ����� � ���� ��������           |" << endl;
    cout << "                                            ----------------------------------------------" << endl;
    cout << "                                            | 3. ����� �� ������� � ���� ��������         |" << endl;
    cout << "                                            ----------------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "\t\t���� ->: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 3);
    return decision;
}

template<class T>
int Console<T>::show_mesto_data()
{
    int decision;
    system("cls");
    cout << "                                                 �������� ��������" << endl;
    SetColor(Green, Black);
    cout << "                                       ----------------------------------------" << endl;
    cout << "                                       | 1. ����������� � ������              |" << endl;
    cout << "                                       ----------------------------------------" << endl;
    cout << "                                       | 2. ����������� � �����               |" << endl;
    cout << "                                       ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "\t\t���� ->: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 2);
    return decision;
}

template<class T>
void Console<T>::success()
{
    SetColor(Yellow, Black);
    cout << endl;
    cout << "�������� ��������� �������!" << endl;
    Sleep(1000);
    SetColor(White, Black);
}

template<class T>
void Console<T>::empty()
{
    SetColor(Red, Black);
    cout << endl;
    cout << "������ ����!" << endl;
    Sleep(1000);
    SetColor(White, Black);
}

template<class T>
void Console<T>::subgroup_first_students(int role)
{
    string fileName;
    int choice;
    int decision;
    decision = subcategory();
    switch (decision)
    {
    case 1:
    {
        Console <students_lagging_subgroup_1> design;
        fileName = "Students_lagging_subgroup_1.dat";
        choice = 1;
        design.MenuBase(choice, fileName, role);
    }break;
    case 2:
    {
        Console <students_successful_subgroup_1> design;
        fileName = "Students_successful_subgroup_1.dat";
        choice = 2;
        design.MenuBase(choice, fileName, role);
    }break;
    case 3:
        system("cls");
        break;
    default:
        system("cls");
        error();
        break;
    }
}

template<class T>
void Console<T>::subgroup_second_students(int role)
{
    string fileName;
    int choice;
    int decision;
    decision = subcategory();
    switch (decision)
    {
    case 1: {
        Console <students_lagging_subgroup_2> design;
        fileName = "Students_lagging_subgroup_2.dat";
        choice = 4;
        design.MenuBase(choice, fileName, role);
    }break;
    case 2: {
        Console <students_successful_subgroup_2> design;
        fileName = "Students_successful_subgroup_2.dat";
        choice = 5;
        design.MenuBase(choice, fileName, role);
    }break;
    case 3:
        system("cls");
        break;
    default:
        system("cls");
        error();
        break;
    }
}

template <class T>
void Console<T>::add_student(List<T> &list)
{
    T value;
    int decision;
    decision = mesto_data();
    switch (decision)
    {
    case 1:
        system("cls");
        value.setData();
        list.push(value);
        success();
        break;
    case 2:
        system("cls");
        value.setData();
        list.pushBack(value);
        success();
        break;
    case 3:
        system("cls");
        break;
    default:
        system("cls");
        error();
        break;
    }
}

template <class T>
void Console<T>::delete_student(List<T> &list)
{
    T value;
    int decision, index;
    decision = delete_mesto_data();
    if (list.getNumber() == 0)
        empty();
    else {
        switch (decision)
        {
        case 1:
            list.dellOne();
            success();
            break;
        case 2:
            list.dellOneBack();
            success();
            break;
        case 3:
            system("cls");
            value.showHeader();
            list.show();
            cout << "����� ��������: ";
            cin >> index;
            list.dellPoint(list[index]);
            success();
            break;
        default:
            system("cls");
            error();
            break;
        }
    }
}

template <class T>
void Console<T>::search_student(List<T> &list)
{
    T value;
    int decision;
    int yes;
    string key, key2;
    int key1;
    decision = type_search_data();
    system("cls");
    if (list.getNumber() == 0)
        empty();
    else {
        switch (decision)
        {
        case 1:
            switch (search1())
            {
            case 1:
                cout << "������� ������� ��������: ";
                cin >> key;
                cout << endl;
                list.searchF(key);
                cout << "\n������� �� 1 ��� �������� � ����: ";
                cin >> yes;
                break;
            case 2:
                cout << "������� ��� ��������: ";
                cin >> key;
                cout << endl;
                list.searchI(key);
                cout << "\n������� �� 1 ��� �������� � ����: ";
                cin >> yes;
                break;
            case 3:
                cout << "������� ��� �������� ��������: ";
                cin >> key1;
                cout << endl;
                list.searchYear(key1);
                cout << "\n������� �� 1 ��� �������� � ����: ";
                cin >> yes;
                break;
            default:
                system("cls");
                error();
                break;
            } break;
        case 2:
            switch (search2())
            {
            case 1:
                cout << "������� ������� ��������: ";
                cin >> key;
                cout << "������� ��� ��������: ";
                cin >> key2;
                cout << endl;
                list.searchFI(key, key2);
                cout << "\n������� �� 1 ��� �������� � ����: ";
                cin >> yes;
                break;
            case 2:
                cout << "������� ��� ��������: ";
                cin >> key;
                cout << "������� ��� �������� ��������: ";
                cin >> key1;
                cout << endl;
                list.searchIYear(key, key1);
                cout << "\n������� �� 1 ��� �������� � ����: ";
                cin >> yes;
                break;
            case 3:
                cout << "������� ������� ��������: ";
                cin >> key;
                cout << "������� ��� �������� �������� : ";
                cin >> key2;
                cout << endl;
                list.searchFYear(key, key1);
                cout << "\n������� �� 1 ��� �������� � ����: ";
                cin >> yes;
                break;
            default:
                system("cls");
                error();
                break;
            } break;
        default:
            system("cls");
            error();
            break;
        }
    }
}

template <class T>
void Console<T>::show_student(List<T> &list)
{
    T value;
    int decision;
    int yes;
    decision = show_mesto_data();
	
    if (list.getNumber() == 0)
        empty();
    else {
        switch (decision)
        {
        case 1: {
            system("cls");
            value.showHeader();
            list.show();
            success();
            cout << "\n������� �� 1 ��� �������� � ����: ";
            cin >> yes;
            break;
        }
        case 2:
            system("cls");
            value.showHeader();
            list.showBack();
            success();
            cout << "\n������� �� 1 ��� �������� � ����: ";
            cin >> yes;
            break;
        default:
            system("cls");
            error();
            break;
        }
    }
}

template <class T>
void Console<T>::editing_student(List<T> &list)
{
    string new1;
    int new2;
    T value;
    int index, yes;
    if (list.getNumber() == 0)
        empty();
    else {
        system("cls");
        value.showHeader();
        list.show();
        SetColor(Blue, Black);
        cout << endl << endl;
        cout << "������� ����� ������� ��� ��������������: ";
        cin >> index;
        cout << endl;
        int id;
        cout << "�������� ����� ������� ��� ��������������(�� 1 �� 4): ";
        id = security_for_any_numbers_i(1, 5);
        cout << endl << endl;
        SetColor(White, Black);
        switch (id)
        {
        case 1:
            cout << "������� ����� ��������: ";
            cin >> new1;
            list[index]->variab.setF(new1);
            value.showHeader();
            list.show();
            success();
            cout << "\n������� �� 1 ��� �������� � ����: ";
            cin >> yes;
            if (yes == 1)
                break;
        case 2:
            cout << "������� ����� ��������: ";
            cin >> new1;
            list[index]->variab.setI(new1);
            value.showHeader();
            list.show();
            success();
            cout << "\n������� �� 1 ��� �������� � ����: ";
            cin >> yes;
            if (yes == 1)
                break;
        case 3:
            cout << "������� ����� ��������: ";
            cin >> new1;
            list[index]->variab.setO(new1);
            list.show();
            success();
            cout << "\n������� �� 1 ��� �������� � ����: ";
            cin >> yes;
            if (yes == 1)
                break;
        case 4:
            cout << "������� ����� ��������: ";
            cin >> new2;
            list[index]->variab.setYear(new2);
            value.showHeader();
            list.show();
            success();
            cout << "\n������� �� 1 ��� �������� � ����: ";
            cin >> yes;
            if (yes == 1)
                break;
        default:
            system("cls");
            error();
            break;
        }
    }
}
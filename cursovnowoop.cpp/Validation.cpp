#include"List.h"

int security_for_any_numbers_i(int border1, int border2)
{
    int A;
    while (!(cin >> A) || A< border1 || A>border2 || cin.get() != '\n')
    {
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Неверный вввод! Попробуйте снова.\n";
        cout << "\t-> ";
    }
    return A;
}
int security_for_any_numbers_i_with_message(int border1, int border2, string message)
{
    int A;
    while (!(cin >> A) || A< border1 || A>border2 || cin.get() != '\n')
    {
        cout << message << endl;
        cin.clear();
        cin.ignore(256, '\n');
    }
    return A;
}
double security_for_any_numbers_i_with_messageD(double border1, double border2, string message)
{
    double A;
    while (!(cin >> A) || A< border1 || A>border2 || cin.get() != '\n')
    {
        cout << message << endl;
        cin.clear();
        cin.ignore(256, '\n');
    }
    return A;
}
int unnumericInputProtection(int &number)
{
    while (true)
    {
        cin >> number;
        if (cin.good())
        {
            break;
        }
        else
        {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Некорректный ввод! Повторите попытку." << endl;
        }
    }
    return number;
}


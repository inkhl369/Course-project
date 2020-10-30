#include "Admin.h"

User::User()
{
    this->login = "";
    this->password = "";
}

User::User(string login, string password)
{
    this->login = login;
    this->password = password;
}

User::User(const User & variab)
{
    this->login = variab.login;
    this->password = variab.password;
}

void User::setData()
{
    SetColor(Cyan, Black);
    cout << setw(80) << "Введите логин и пароль для авторизации" << endl;
    SetColor(Green, Black);
    cout << "Введите логин: ";
    cin >> this->login;
    string str;
    int k = 0;
    cout << "Введите пароль: ";
    while (1) 
    {

        char c = _getch(); //получение кода символа
        if (c == 0)
            c = _getch();
        if (c == '\r' || c == '\n' && k != 0)
            break; //выход из цикла
        if (c == 8 && k > 0) 
        {
            cout << "Введите логин: " << this->login << endl;
            cout << "Введите пароль: ";
            for (int i = 0; i < k - 1; i++)
                cout << '*';
            str.erase(k - 1, 1); //удаление последнего символа из строки
            k--; //- одного значения от флага
        }
        else
        {
            if (c == 8 && k == 0);
            else
            {
                cout << '*';
                str += c;
                k++;
            }
        }
    }
    k = 0;
    this->password = (string)str;//копирование строк
}

bool User::TestAuthotizalion()
{
    ifstream fin("Users.txt");
    User variab;
    while (fin >> variab) {
        if (this->login == variab.login && this->password == variab.password)
        {
            return true;
        }
    }
    fin.close();
    return false;
}

void User::Test()
{
    ifstream fin("Users.txt");
    if (!fin.is_open())
    {
        ofstream fout("Users.txt");
        SetColor(LightGreen, Black);
        cout << " Используйте admin для логина и admin для пароля" << endl;
        SetColor(White, Black);
        fout << "admin" << " " << "admin" << "\n";
        fout.close();
    }
    fin.close();
}

int User::authorization()
{
    User user;
    char decision;
    user.Test();
    SetColor(Black, Black);
    SetColor(White, Black);
    user.setData();
    while (!user.TestAuthotizalion())
    {
        system("cls");
        SetColor(Red, Black);
        cout << setw(30) << "Вы ввели неправильный логин или пароль" << endl;
        SetColor(White, Black);
        cout << "1. Продолжить" << endl;
        cout << "2. Выход" << endl << endl;
        cout << "Попробуйте ещё раз: ";
        cin >> decision;
        if (decision == '1')
        {
            user.setData();
        }
        else {
            exit(0);
        }
    }
    SetColor(LightGreen, Black);
    cout << endl << endl;
    cout << "                                       ******Авторизация прошла успешно******" << endl;
    Sleep(1000);
    SetColor(White, Black);
    system("cls");
    if (user.login == "admin" && user.password == "admin")
        return 0;
    else
        return 1;
}


User::~User()
{
}

ifstream& operator >> (ifstream & fin, User & variab)
{
    fin >> variab.login;
    fin >> variab.password;
    return fin;
}
ostream & operator<<(ostream & sout, User & variab)
{
    sout << variab.login << " " << variab.password << endl;
    return sout;
}
istream & operator >> (istream & sin, User & variab)
{
    cout << "Введите логин: ";
    sin >> variab.login;
    cout << "Введите пароль: ";
    sin >> variab.password;
    return sin;
}
ofstream& operator<<(ofstream & fout, User & variab)
{
    fout << variab.login << " " << variab.password;
    return fout;
}

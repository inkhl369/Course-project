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
    cout << setw(80) << "������� ����� � ������ ��� �����������" << endl;
    SetColor(Green, Black);
    cout << "������� �����: ";
    cin >> this->login;
    string str;
    int k = 0;
    cout << "������� ������: ";
    while (1) 
    {

        char c = _getch(); //��������� ���� �������
        if (c == 0)
            c = _getch();
        if (c == '\r' || c == '\n' && k != 0)
            break; //����� �� �����
        if (c == 8 && k > 0) 
        {
            cout << "������� �����: " << this->login << endl;
            cout << "������� ������: ";
            for (int i = 0; i < k - 1; i++)
                cout << '*';
            str.erase(k - 1, 1); //�������� ���������� ������� �� ������
            k--; //- ������ �������� �� �����
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
    this->password = (string)str;//����������� �����
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
        cout << " ����������� admin ��� ������ � admin ��� ������" << endl;
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
        cout << setw(30) << "�� ����� ������������ ����� ��� ������" << endl;
        SetColor(White, Black);
        cout << "1. ����������" << endl;
        cout << "2. �����" << endl << endl;
        cout << "���������� ��� ���: ";
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
    cout << "                                       ******����������� ������ �������******" << endl;
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
    cout << "������� �����: ";
    sin >> variab.login;
    cout << "������� ������: ";
    sin >> variab.password;
    return sin;
}
ofstream& operator<<(ofstream & fout, User & variab)
{
    fout << variab.login << " " << variab.password;
    return fout;
}

#include "User.h"

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

User::User(const User & obj)
{
	this->login = obj.login;
	this->password = obj.password;
}

void User::setData()
{
	cout << "������� �����: ";
	cin >> this->login;
	string str;
	int k = 0;
	cout << "������� ������: ";
	while (1) //����������� ����
	{

		char c = _getch(); //��������� ���� �������
		if (c == 0)
			c = _getch();
		if (c == '\r' || c == '\n' && k != 0)
			break; //����������� ����� �� �����
		if (c == 8 && k > 0) //�=8 ������� backspase
		{
			cout << "������� �����: " << this->login << endl;
			cout << "������� ������: ";
			for (int i = 0; i < k - 1; i++)
				cout << '*';
			str.erase(k - 1, 1); //�������� ���������� ������� �� ������
			k--; //��������� ������ �������� �� �����
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

bool User::checkAuth()
{
	ifstream fin("Userss.txt");
	User obj;
	while (fin >> obj) {
		if (this->login == obj.login && this->password == obj.password)
		{
			return true;
		}
	}
	fin.close();
	return false;
}

void User::checkDB()
{
	ifstream fin("Userss.txt");
	if (!fin.is_open())
	{
		ofstream fout("Userss.txt");
		SetColor(Red, Black);
		cout << "���� � ������� ������������� �� ��� ������!" << endl;
		SetColor(LightGreen, Black);
		cout << " ����������� Admin | qwerty ��� �����" << endl;
		SetColor(White, Black);
		fout << "Admin" << " " << "qwerty" << "\n";
		fout.close();
	}
	fin.close();
}

int User::authorization()
{
	User user;
	char decision;
	user.checkDB();
	SetColor(Green, Black);
	cout << setw(80) << "��� ����� � ��������� �������� �����������" << endl;
	SetColor(White, Black);
	user.setData();
	while (!user.checkAuth())
	{
		system("cls");
		SetColor(Red, Black);
		cout << setw(30) << "�� ����� �������� ����� ��� ������! ���������� ��� ���" << endl;
		SetColor(White, Black);
		cout << "1. ����������" << endl;
		cout << "2. �����" << endl << endl;
		cout << "������� ����� � ������: ";
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
	cout << "                                                �������� �����������" << endl;
	Sleep(1000);
	SetColor(White, Black);
	system("cls");
	if (user.login == "Admin" && user.password == "qwerty")
		return 0;
	else
		return 1;
}


User::~User()
{
}

ifstream& operator >> (ifstream & fin, User & obj)
{
	fin >> obj.login;
	fin >> obj.password;
	return fin;
}
ostream & operator<<(ostream & sout, User & obj)
{
	sout << obj.login << " " << obj.password << endl;
	return sout;
}
istream & operator >> (istream & sin, User & obj)
{
	cout << "������� �����: ";
	sin >> obj.login;
	cout << "������� ������: ";
	sin >> obj.password;
	return sin;
}
ofstream& operator<<(ofstream & fout, User & obj)
{
	fout << obj.login << " " << obj.password;
	return fout;
}
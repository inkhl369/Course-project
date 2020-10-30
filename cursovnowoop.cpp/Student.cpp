#include "Student.h"
#include "Validation.h"

Student::Student()
{
    F = "";
    I = "";
    O = "";
    year = 0;
}

Student::Student(const Student &  variab)
{
    this->F = variab.F;
    this->I = variab.I;
    this->O = variab.O;
    this->year = variab.year;
}

Student::Student(string sF, string sI, string sO, int syear)
{
    this->F = F;
    this->I = I;
    this->O = O;
    this->year = year;
}

Student::~Student()
{
}

void Student::setData()
{
    string temp;
    cout << "������� ������� ��������: ";
    cin >> F;
    cout << "������� ��� ��������: ";
    cin >> I;
    cout << "������� �������� ��������: ";
    cin >> O;
    cout << "������� ��� �������� ��������: ";
    year = security_for_any_numbers_i_with_message(0, 2001, "������!�� ����� �������� ��� ��������");
}

void Student::showHeader()
{
    cout << "|" << setw(20) << left << "�������" << "|" << setw(15) << "���" << "|" << setw(20) << "��������" << "|" << setw(11) << "��� ��������" << "|";
}

void Student::showData()
{
    cout << "|" << setw(25) << left << F << "|" << setw(12) << I << "|" << setw(7) << O << "|" << setw(11) << year << "|";
}

void Student::editData()
{
    cout << "                                            �������� ���� ��� ��������������" << endl;
    SetColor(Green, Black);
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 1. �������                             |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 2. ���                                 |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 3. ��������                            |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 4. ��� ��������                        |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

void Student::showLabel()
{
    SetColor(Green, Black);
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 1. �������                                |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 2. ���                                    |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 3. ��������                               |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 4. ��� ��������                           |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

Student Student::operator=(const Student &  variab)
{
    this->F = variab.F;
    this->I = variab.I;
    this->O = variab.O;
    this->year = variab.year;
    return *this;
}

ostream & operator << (ostream & sout, Student& variab)
{
    sout << "|" << setw(20) << left << variab.F << "|" << setw(15) << variab.I << "|" << setw(20) << variab.O << "|" << setw(12) << variab.year << "|";
    return sout;
}

istream & operator >> (istream & sin, Student & variab)
{
    cout << "������� ������� ��������: ";
    sin >> variab.F;
    cout << "������� ��� ��������: ";
    sin >> variab.I;
    cout << "������� �������� ��������: ";
    sin >> variab.O;
    cout << "������� ��� �������� ��������: ";
    cin >> variab.year;
    return sin;
}

ofstream & operator << (ofstream & fout, Student & variab)
{
    fout << variab.F << " " << variab.I << " " << variab.O << " " << variab.year << " ";
    return fout;
}

ifstream & operator >> (ifstream & fin, Student & variab)
{
    fin >> variab.F;
    fin >> variab.I;
    fin >> variab.O;
    fin >> variab.year;
    return fin;
}

string Student::getF()
{
    return this->F;
}

string Student::getI()
{
    return this->I;
}

string Student::getO()
{
    return this->O;
}
int Student::getYear()
{
    return this->year;
}

void Student::setF(string f)
{
    this->F = f;
}

void Student::setI(string i)
{
    this->I = i;
}

void Student::setO(string o)
{
    this->O = o;
}

void Student::setYear(int yeare)
{
    this->year = yeare;
}


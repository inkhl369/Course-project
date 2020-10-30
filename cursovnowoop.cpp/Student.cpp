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
    cout << "Введите фамилию студента: ";
    cin >> F;
    cout << "Введите имя студента: ";
    cin >> I;
    cout << "Введите отчество студента: ";
    cin >> O;
    cout << "Введите год рождения студента: ";
    year = security_for_any_numbers_i_with_message(0, 2001, "Ошибка!Вы ввели неверный год рождения");
}

void Student::showHeader()
{
    cout << "|" << setw(20) << left << "Фамилия" << "|" << setw(15) << "Имя" << "|" << setw(20) << "Отчество" << "|" << setw(11) << "Год рождения" << "|";
}

void Student::showData()
{
    cout << "|" << setw(25) << left << F << "|" << setw(12) << I << "|" << setw(7) << O << "|" << setw(11) << year << "|";
}

void Student::editData()
{
    cout << "                                            Выберите поле для редактирования" << endl;
    SetColor(Green, Black);
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 1. Фамилия                             |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 2. Имя                                 |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 3. Отчество                            |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 4. Год рождения                        |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

void Student::showLabel()
{
    SetColor(Green, Black);
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 1. Фамилия                                |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 2. Имя                                    |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 3. Отчество                               |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 4. Год рождения                           |" << endl;
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
    cout << "Введите фамилию студента: ";
    sin >> variab.F;
    cout << "Введите имя студента: ";
    sin >> variab.I;
    cout << "Введите отчество студента: ";
    sin >> variab.O;
    cout << "Введите год рождения студента: ";
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


#include "subgroup_first.h"
#include "Validation.h"

subgroup_first::subgroup_first() : Student()
{
    credit = 0;
    exam = 0;
    grade_point_average = 0.0;
}

subgroup_first::subgroup_first(const subgroup_first& variab) : Student(variab)
{
    this->credit = variab.credit;
    this->exam = variab.exam;
    this->grade_point_average = variab.grade_point_average;
}
subgroup_first::subgroup_first(string F, string I, string O, int year, int credit, int exam, double grade_point_average) : Student(F, I, O, year)
{
    this->credit = credit;
    this->exam = exam;
    this->grade_point_average = grade_point_average;
}

subgroup_first::~subgroup_first()
{
}

void subgroup_first::setData()
{
    string temp;
    Student::setData();
    cout << "Введите количество зачётов студента: ";
    credit = security_for_any_numbers_i_with_message(0, 6, "Неверный ввод! Перепроверьте ввод. Количество зачётов не может быть меньше 0 либо больше 6");
    cout << "Введите количество экзаменов студента: ";
    exam = security_for_any_numbers_i_with_message(0, 6, "Неверный ввод! Перепроверьте ввод. Количество экзаменов не может быть меньше 0 либо больше 6");
    cout << "Введите средний балл студента: ";
    grade_point_average = security_for_any_numbers_i_with_messageD(0, 10, "Неверный ввод! Перепроверьте ввод. Средний балл в не может быть меньше 0 либо больше 10");;
}
void subgroup_first::setCredit(int credit)
{
    this->credit = credit;
}
void subgroup_first::showHeader()
{
    Student::showHeader();
    cout << setw(13) << "Кол-во зачётов" << "|" << setw(13) << "Кол-во экзаменов" << "|" << setw(13) << "Средний балл" << "|";
}

void subgroup_first::showData()
{
    Student::showData();
    cout << setw(20) << left << credit << "|" << setw(20) << left << exam << "|" << setw(20) << left << grade_point_average << "|";
}

void subgroup_first::editData()
{
    Student::editData();
    SetColor(Green, Black);
    cout << "                                         | 6. Количество зачётов                  |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 7. Количество экзаменов                |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 8. Средний балл                        |" << endl;
    cout << "                                         ------------------------------------------" << endl;

}

void subgroup_first::showLabel()
{
    Student::showLabel();
    SetColor(Green, Black);
    cout << "                                         | 6. Количество зачётов                  |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 7. Количество экзааменов               |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 8. Средний балл                        |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

subgroup_first subgroup_first::operator=(const subgroup_first &  variab)
{
    Student::operator=(variab);
    this->credit = variab.credit;
    this->exam = variab.exam;
    this->grade_point_average = variab.grade_point_average;
    return *this;
}

ostream & operator << (ostream & sout, subgroup_first & variab)
{
    sout << dynamic_cast<Student&>(variab); //Приведение типа к service
    sout << setw(14) << variab.credit << "|" << setw(16) << variab.exam << "|" << setw(13) << variab.grade_point_average << "|";
    return sout;
}

istream & operator >> (istream & sin, subgroup_first & variab)
{
    string temp;
    sin >> dynamic_cast<Student&>(variab); //Приведение типа к service
    cout << "Введите количество зачётов: ";
    sin >> variab.credit;
    cout << "Введите количество экзаменов: ";
    sin >> variab.exam;
    cout << "Введите средний балл: ";
    sin >> variab.grade_point_average;
    return sin;
}
ofstream & operator<<(ofstream & fout, subgroup_first & variab)
{
    fout << dynamic_cast<Student&>(variab); //Приведение типа к service
    fout << variab.credit << " " << variab.exam << " " << variab.grade_point_average << " ";
    return fout;
}

ifstream & operator >> (ifstream & fin, subgroup_first & variab)
{
    fin >> dynamic_cast<Student&>(variab); //Приведение типа к Student
    fin >> variab.credit;
    fin >> variab.exam;
    fin >> variab.grade_point_average;
    return fin;
}
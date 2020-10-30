#include "subgroup_second.h"
#include "Validation.h"

subgroup_second::subgroup_second() : Student()
{
    credit = 0;
    exam = 0;
    grade_point_average = 0.0;
}

subgroup_second::subgroup_second(const subgroup_second& variab) : Student(variab)
{
    this->credit = variab.credit;
    this->exam = variab.exam;
    this->grade_point_average = variab.grade_point_average;
}
subgroup_second::subgroup_second(string F, string I, string O, int year, int credit, int exam, double grade_point_average) : Student(F, I, O, year)
{
    this->credit = credit;
    this->exam = exam;
    this->grade_point_average = grade_point_average;
}
subgroup_second::~subgroup_second()
{
}

void subgroup_second::setData()
{
    string temp;
    Student::setData();
    cout << "Введите количество зачётов студента: ";
    credit = security_for_any_numbers_i_with_message(0, 6, "Перепроверьте ввод. Количество зачётов не может быть меньше 0 либо больше 6");
    cout << "Введите количество экзаменов студента: ";
    exam = security_for_any_numbers_i_with_message(0, 6, "Перепроверьте ввод. Количество экзаменов не может быть меньше 0 либо больше 6");
    cout << "Введите средний балл студента: ";
    grade_point_average = security_for_any_numbers_i_with_messageD(0, 10, "Перепроверьте ввод. Средний балл не может быть меньше 0 либо больше 10");
}

void subgroup_second::showHeader()
{
    Student::showHeader();
    cout << setw(13) << "Кол-во зачётов" << "|" << setw(13) << "Кол-во экзаменов" << "|" << setw(13) << "Средний балл" << "|";
}

void subgroup_second::showData()
{
    Student::showData();
    cout << setw(20) << left << credit << "|" << setw(20) << left << exam << "|" << setw(20) << left << grade_point_average << "|";
}
void subgroup_second::editData()
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

void subgroup_second::showLabel()
{
    Student::showLabel();
    SetColor(Green, Black);
    cout << "                                         | 6. Количество зачётов                  |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 7. Количество экзаменов                |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 8. Средний балл                        |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

subgroup_second subgroup_second::operator=(const subgroup_second &  variab)
{
    Student::operator=(variab);
    this->credit = variab.credit;
    this->exam = variab.exam;
    this->grade_point_average = variab.grade_point_average;
    return *this;
}

ostream & operator<<(ostream & sout, subgroup_second & variab)
{
    sout << dynamic_cast<Student&>(variab); //Приведение типа к service
    sout << setw(14) << variab.credit << "|" << setw(16) << variab.exam << "|" << setw(13) << variab.grade_point_average << "|";
    return sout;
}

istream & operator >> (istream & sin, subgroup_second & variab)
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
ofstream & operator<<(ofstream & fout, subgroup_second & variab)
{
    fout << dynamic_cast<Student&>(variab); //Приведение типа к service
    fout << variab.credit << " " << variab.exam << " " << variab.grade_point_average << " ";
    return fout;
}

ifstream & operator >> (ifstream & fin, subgroup_second & variab)
{
    fin >> dynamic_cast<Student&>(variab); //Приведение типа к Student
    fin >> variab.credit;
    fin >> variab.exam;
    fin >> variab.grade_point_average;
    return fin;
}
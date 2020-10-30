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
    cout << "������� ���������� ������� ��������: ";
    credit = security_for_any_numbers_i_with_message(0, 6, "������������� ����. ���������� ������� �� ����� ���� ������ 0 ���� ������ 6");
    cout << "������� ���������� ��������� ��������: ";
    exam = security_for_any_numbers_i_with_message(0, 6, "������������� ����. ���������� ��������� �� ����� ���� ������ 0 ���� ������ 6");
    cout << "������� ������� ���� ��������: ";
    grade_point_average = security_for_any_numbers_i_with_messageD(0, 10, "������������� ����. ������� ���� �� ����� ���� ������ 0 ���� ������ 10");
}

void subgroup_second::showHeader()
{
    Student::showHeader();
    cout << setw(13) << "���-�� �������" << "|" << setw(13) << "���-�� ���������" << "|" << setw(13) << "������� ����" << "|";
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
    cout << "                                         | 6. ���������� �������                  |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 7. ���������� ���������                |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 8. ������� ����                        |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

void subgroup_second::showLabel()
{
    Student::showLabel();
    SetColor(Green, Black);
    cout << "                                         | 6. ���������� �������                  |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 7. ���������� ���������                |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 8. ������� ����                        |" << endl;
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
    sout << dynamic_cast<Student&>(variab); //���������� ���� � service
    sout << setw(14) << variab.credit << "|" << setw(16) << variab.exam << "|" << setw(13) << variab.grade_point_average << "|";
    return sout;
}

istream & operator >> (istream & sin, subgroup_second & variab)
{
    string temp;
    sin >> dynamic_cast<Student&>(variab); //���������� ���� � service
    cout << "������� ���������� �������: ";
    sin >> variab.credit;
    cout << "������� ���������� ���������: ";
    sin >> variab.exam;
    cout << "������� ������� ����: ";
    sin >> variab.grade_point_average;
    return sin;
}
ofstream & operator<<(ofstream & fout, subgroup_second & variab)
{
    fout << dynamic_cast<Student&>(variab); //���������� ���� � service
    fout << variab.credit << " " << variab.exam << " " << variab.grade_point_average << " ";
    return fout;
}

ifstream & operator >> (ifstream & fin, subgroup_second & variab)
{
    fin >> dynamic_cast<Student&>(variab); //���������� ���� � Student
    fin >> variab.credit;
    fin >> variab.exam;
    fin >> variab.grade_point_average;
    return fin;
}
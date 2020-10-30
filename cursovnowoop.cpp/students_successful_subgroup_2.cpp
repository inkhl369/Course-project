#include "students_successful_subgroup_2.h"
#include "Validation.h"

students_successful_subgroup_2::students_successful_subgroup_2() : subgroup_second()
{
    max_rating = 0;
    min_rating = 0;
}

students_successful_subgroup_2::students_successful_subgroup_2(const students_successful_subgroup_2& variab) : subgroup_second(variab)
{
    this->max_rating = variab.max_rating;
    this->min_rating = variab.min_rating;
}

students_successful_subgroup_2::students_successful_subgroup_2(string F, string I, string O, int year, int credit, int exam, double grade_point_average, int max_rating, int min_rating) : subgroup_second(F, I, O, year, credit, exam, grade_point_average)
{
    this->max_rating = max_rating;
    this->min_rating = min_rating;
}

students_successful_subgroup_2::~students_successful_subgroup_2()
{
}
void students_successful_subgroup_2::setData()
{
    subgroup_second::setData();
    cout << "������� ������������ ������ �� �������: ";
    this->max_rating = security_for_any_numbers_i_with_message(0, 10, "������������� ����. ������������ ������ �� ����� ���� ������ 0 ���� ������ 10 ");
    cout << "������� ����������� ������ �� �������: ";
    this->min_rating = security_for_any_numbers_i_with_message(0, 10, "������������� ����. ����������� ������ �� ����� ���� ������ 0 ���� ������ 10 ");
}

void students_successful_subgroup_2::showHeader()
{
    SetColor(LightMagenta, Black);
    cout << "|-------------------------------------------------------------------------------------������--------------------------------------------------------------------------------------|" << endl;
    subgroup_second::showHeader();
    cout << setw(15) << "������������ ������ �� �������" << "|" << setw(15) << "����������� ������ �� �������" << "|" << endl;
    cout << "|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|" << endl;;
    SetColor(White, Black);
}

void students_successful_subgroup_2::showData()
{
    subgroup_second::showData();
    cout << setw(25) << left << this->max_rating << "|" << setw(25) << left << this->min_rating << "|" << endl;
}

void students_successful_subgroup_2::editData()
{
    subgroup_second::editData();
    cout << "9.������������ ������" << endl;
    cout << "10.����������� ������" << endl;
}

void students_successful_subgroup_2::showLabel()
{
    subgroup_second::showLabel();
    cout << "9.������������ ������" << endl;
    cout << "10.����������� ������" << endl;
}

students_successful_subgroup_2 students_successful_subgroup_2::operator=(const students_successful_subgroup_2 &  variab)
{
    subgroup_second::operator=(variab);
    this->max_rating = variab.max_rating;
    this->min_rating = variab.min_rating;
    return *this;
}

ostream & operator<<(ostream & sout, students_successful_subgroup_2 & variab)
{
    sout << dynamic_cast<subgroup_second&>(variab); //���������� ���� � subgroup_first
    sout << setw(30) << variab.max_rating << "|" << setw(29) << variab.min_rating << "|" << endl;
    return sout;
}

istream & operator >> (istream & sin, students_successful_subgroup_2 & variab)
{
    sin >> dynamic_cast<subgroup_second&>(variab); //���������� ���� � subgroup_first
    cout << "������� ������������ ������ �� �������: ";
    cin >> variab.max_rating;
    cout << "������� ����������� ������ �� �������";
    cin >> variab.min_rating;
    return sin;
}
ofstream & operator<<(ofstream & fout, students_successful_subgroup_2 & variab)
{
    fout << dynamic_cast<subgroup_second&>(variab); //���������� ���� � subgroup_first
    fout << variab.max_rating << variab.min_rating << "\n";
    return fout;
}

ifstream & operator >> (ifstream & fin, students_successful_subgroup_2 & variab)
{
    fin >> dynamic_cast<subgroup_second&>(variab); //���������� ���� � subgroup_first
    fin >> variab.max_rating >> variab.min_rating;
    return fin;
}
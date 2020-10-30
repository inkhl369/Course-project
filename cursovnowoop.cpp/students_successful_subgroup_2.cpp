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
    cout << "Введите максимальную оценку за экзамен: ";
    this->max_rating = security_for_any_numbers_i_with_message(0, 10, "Перепроверьте ввод. Максимальная оценка не может быть меньше 0 либо больше 10 ");
    cout << "Введите минимальную оценку за экзамен: ";
    this->min_rating = security_for_any_numbers_i_with_message(0, 10, "Перепроверьте ввод. Минимальная оценка не может быть меньше 0 либо больше 10 ");
}

void students_successful_subgroup_2::showHeader()
{
    SetColor(LightMagenta, Black);
    cout << "|-------------------------------------------------------------------------------------СПИСОК--------------------------------------------------------------------------------------|" << endl;
    subgroup_second::showHeader();
    cout << setw(15) << "Максимальная оценка за экзамен" << "|" << setw(15) << "Минимальная оценка за экзамен" << "|" << endl;
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
    cout << "9.Максимальная оценка" << endl;
    cout << "10.Минимальная оценка" << endl;
}

void students_successful_subgroup_2::showLabel()
{
    subgroup_second::showLabel();
    cout << "9.Максимальная оценка" << endl;
    cout << "10.Минимальная оценка" << endl;
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
    sout << dynamic_cast<subgroup_second&>(variab); //Приведение типа к subgroup_first
    sout << setw(30) << variab.max_rating << "|" << setw(29) << variab.min_rating << "|" << endl;
    return sout;
}

istream & operator >> (istream & sin, students_successful_subgroup_2 & variab)
{
    sin >> dynamic_cast<subgroup_second&>(variab); //Приведение типа к subgroup_first
    cout << "Введите максимальную оценку за экзамен: ";
    cin >> variab.max_rating;
    cout << "Введите минимальную оценку за экзамен";
    cin >> variab.min_rating;
    return sin;
}
ofstream & operator<<(ofstream & fout, students_successful_subgroup_2 & variab)
{
    fout << dynamic_cast<subgroup_second&>(variab); //Приведение типа к subgroup_first
    fout << variab.max_rating << variab.min_rating << "\n";
    return fout;
}

ifstream & operator >> (ifstream & fin, students_successful_subgroup_2 & variab)
{
    fin >> dynamic_cast<subgroup_second&>(variab); //Приведение типа к subgroup_first
    fin >> variab.max_rating >> variab.min_rating;
    return fin;
}
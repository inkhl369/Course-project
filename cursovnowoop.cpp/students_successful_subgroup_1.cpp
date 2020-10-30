#include "students_successful_subgroup_1.h"
#include "Validation.h"

students_successful_subgroup_1::students_successful_subgroup_1() : subgroup_first()
{
    max_rating = 0;
    min_rating = 0;
}

students_successful_subgroup_1::students_successful_subgroup_1(const students_successful_subgroup_1& variab) : subgroup_first(variab)
{
    this->max_rating = variab.max_rating;
    this->min_rating = variab.min_rating;
}

students_successful_subgroup_1::students_successful_subgroup_1(string F, string I, string O, int year, int credit, int exam, double grade_point_average, int max_rating, int min_rating) : subgroup_first(F, I, O, year, credit, exam, grade_point_average)
{
    this->max_rating = max_rating;
    this->min_rating = min_rating;
}

students_successful_subgroup_1::~students_successful_subgroup_1()
{
}
void students_successful_subgroup_1::setData()
{
    subgroup_first::setData();
    cout << "Введите максимальную оценку за экзамен: ";
    this->max_rating = security_for_any_numbers_i_with_message(0, 10, "Перепроверьте ввод. Максимальная оценка не может быть меньше 0 либо больше 10 ");
    cout << "Введите минимальную оценку за экзамен: ";
    this->min_rating = security_for_any_numbers_i_with_message(0, 10, "Перепроверьте ввод. Максимальная оценка не может быть меньше 0 либо больше 10 ");
}

void students_successful_subgroup_1::showHeader()
{
    SetColor(LightMagenta, Black);
    cout << "|-------------------------------------------------------------------------------------СПИСОК--------------------------------------------------------------------------------------|" << endl;
    subgroup_first::showHeader();
    cout << setw(15) << "Максимальная оценка за экзамен" << "|" << setw(15) << "Минимальная оценка за экзамен" << "|" << endl;
    cout << "|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|" << endl;
    SetColor(White, Black);
}

void students_successful_subgroup_1::showData()
{
    subgroup_first::showData();
    cout << setw(25) << left << this->max_rating << "|" << setw(25) << left << this->min_rating << "|" << endl;
}

void students_successful_subgroup_1::editData()
{
    subgroup_first::editData();
    cout << "9.Максимальная оценка" << endl;
    cout << "10.Минимальная оценка" << endl;
}

void students_successful_subgroup_1::showLabel()
{
    subgroup_first::showLabel();
    cout << "9.Максимальная оценка" << endl;
    cout << "10.Минимальная оценка" << endl;
}

students_successful_subgroup_1 students_successful_subgroup_1::operator=(const students_successful_subgroup_1 &  variab)
{
    subgroup_first::operator=(variab);
    this->max_rating = variab.max_rating;
    this->min_rating = variab.min_rating;
    return *this;
}

ostream & operator<<(ostream & sout, students_successful_subgroup_1 & variab)
{
    sout << dynamic_cast<subgroup_first&>(variab); //Приведение типа к subgroup_first
    sout << setw(30) << variab.max_rating << "|" << setw(29) << variab.min_rating << "|" << endl;
    return sout;
}

istream & operator >> (istream & sin, students_successful_subgroup_1 & variab)
{
    sin >> dynamic_cast<subgroup_first&>(variab); //Приведение типа к subgroup_first
    cout << "Введите максимальную оценку за экзамен: ";
    cin >> variab.max_rating;
    cout << "Введите минимальную оценку за экзамен";
    cin >> variab.min_rating;
    return sin;
}
ofstream & operator<<(ofstream & fout, students_successful_subgroup_1 & variab)
{
    fout << dynamic_cast<subgroup_first&>(variab); //Приведение типа к subgroup_first
    fout << variab.max_rating << variab.min_rating << "\n";
    return fout;
}

ifstream & operator >> (ifstream & fin, students_successful_subgroup_1 & variab)
{
    fin >> dynamic_cast<subgroup_first&>(variab); //Приведение типа к subgroup_first
    fin >> variab.max_rating >> variab.min_rating;
    return fin;
}

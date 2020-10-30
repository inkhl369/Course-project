#include "students_lagging_subgroup_1.h"
#include "Validation.h"

students_lagging_subgroup_1::students_lagging_subgroup_1() : subgroup_first()
{
    debts_for_credit = 0;
    debt_for_exams = 0;
}

students_lagging_subgroup_1::students_lagging_subgroup_1(const students_lagging_subgroup_1& variab) : subgroup_first(variab)
{
    this->debts_for_credit = variab.debts_for_credit;
    this->debt_for_exams = variab.debt_for_exams;
}

students_lagging_subgroup_1::students_lagging_subgroup_1(string F, string I, string O, int year, int credit, int exam, double grade_point_average, int debts_for_credit, int debt_for_exams) : subgroup_first(F, I, O, year, credit, exam, grade_point_average)
{
    this->debts_for_credit = debts_for_credit;
    this->debt_for_exams = debt_for_exams;
}

students_lagging_subgroup_1::~students_lagging_subgroup_1()
{
}
void students_lagging_subgroup_1::setData()
{
    subgroup_first::setData();
    cout << "Введите количество долгов студента по зачётам: ";
    this->debts_for_credit = security_for_any_numbers_i_with_message(0, 10, "Перепроверьте ввод. Количество долгов по зачётам не может быть меньше 0 либо больше 6");
    cout << "Введите количество долгов студента по экзаменам: ";
    this->debt_for_exams = security_for_any_numbers_i_with_message(0, 10, "Перепроверьте ввод. Количество долгов по экзаменам не может быть меньше 0 либо больше 6");

}

void students_lagging_subgroup_1::showHeader()
{
    SetColor(LightMagenta, Black);
    cout << "|-------------------------------------------------------------------------------------СПИСОК-----------------------------------------------------------------------------|" << endl;
    subgroup_first::showHeader();
    cout << setw(15) << "Кол-во долгов по зачётам" << "|" << setw(15) << "Кол-во долгов по экзаменам" << "|" << endl;
    cout << "|------------------------------------------------------------------------------------------------------------------------------------------------------------------------|" << endl;
    SetColor(White, Black);
}

void students_lagging_subgroup_1::showData()
{
    subgroup_first::showData();
    cout << setw(25) << left << this->debts_for_credit << "|" << setw(25) << left << this->debt_for_exams << "|" << endl;
}

void students_lagging_subgroup_1::editData()
{
    subgroup_first::editData();
    cout << "9.Долги по зачётам" << endl;
    cout << "10.Долги по экзаменам" << endl;
}

void students_lagging_subgroup_1::showLabel()
{
    subgroup_first::showLabel();
    cout << "9.Долги по зачётам" << endl;
    cout << "10.Долги по экзаменам" << endl;
}

students_lagging_subgroup_1 students_lagging_subgroup_1::operator=(const students_lagging_subgroup_1 & variab)
{
    subgroup_first::operator=(variab);
    this->debts_for_credit = variab.debts_for_credit;
    this->debt_for_exams = variab.debt_for_exams;
    return *this;
}

ostream & operator << (ostream & sout, students_lagging_subgroup_1 & variab)
{
    sout << dynamic_cast<subgroup_first&>(variab); //Приведение типа к subgroup_first
    sout << setw(24) << variab.debts_for_credit << "|" << setw(26) << variab.debt_for_exams << "|" << endl;
    return sout;
}

istream & operator >> (istream & sin, students_lagging_subgroup_1 & variab)
{
    sin >> dynamic_cast<subgroup_first&>(variab); //Приведение типа к subgroup_first
    cout << "Введите количество долгов студента по зачётам: ";
    cin >> variab.debts_for_credit;
    cout << "Введите количество долгов студента по экзаменам";
    cin >> variab.debt_for_exams;
    return sin;
}
ofstream & operator<<(ofstream & fout, students_lagging_subgroup_1 & variab)
{
    fout << dynamic_cast<subgroup_first&>(variab); //Приведение типа к subgroup_first
    fout << variab.debts_for_credit << " " << variab.debt_for_exams << "\n";
    return fout;
}

ifstream & operator >> (ifstream & fin, students_lagging_subgroup_1 & variab)
{
    fin >> dynamic_cast<subgroup_first&>(variab); //Приведение типа к subgroup_first
    fin >> variab.debts_for_credit >> variab.debt_for_exams;
    return fin;
}

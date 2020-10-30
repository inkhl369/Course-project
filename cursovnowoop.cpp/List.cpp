#include "List.h"

template<class T>
List<T>::List()
{
     count = 0;
     begin = NULL;
     end= NULL;
}

template<class T>
List<T>::~List()
{
     Line<T> * tmp = nullptr;
     if (begin != NULL)
     {
            while (begin != NULL)
            {
                    tmp = begin->next;
                    delete begin;
                    begin = tmp;
            }
}
}

template<class T>
void List<T>::push(const T& variab)
{
	count++;
     Line<T> *temp = new Line<T>;
     temp->next = NULL;
     Line<T> *number = nullptr;
     temp->variab = variab;
     if (begin != NULL)
     {
            temp->prev = end;
            end->next = temp;
            end = temp;
            number = end;
     }
     else
     {
            temp->prev = NULL;
            begin = end = temp;
     }
}
template<class T>
void List<T>::pushBack(const T& variab)
{
     Line<T> *number = nullptr;
     Line<T> *temp = new Line<T>;
     temp->prev = NULL;
     number = NULL;
     temp->variab = variab;
	 count++;
     if (begin != NULL)
     {
            begin->prev = temp;
            temp->next = begin;
            begin = temp;
            number = begin;
     }
     else
     {
            temp->next = NULL;
            begin = end = temp;
     }
}
template<class T>
void List<T>::show()
{
     Line<T> *number = nullptr;
     number = end;
     cout << number->variab;
     while (number->prev != NULL)
     {
            number = number->prev;
            cout << number->variab;

     }
}
template<class T>
void List<T>::showBack()
{
     Line<T> *number = nullptr;
     number = begin;
     cout << number->variab << endl;
     while (number->next != NULL)
     {
            number = number->next;
            cout << number->variab << endl;

     }
}
template<class T>
T List<T>::dellPoint(Line<T>* variab)
{
     Line<T> *temp, *tempn, data;
	 count--;
     if (variab == begin && variab != end)
     {
            tempn = variab->next;
            tempn->prev = NULL;
            begin = tempn;
            data.variab = variab->variab;
            delete variab;
     }
     else if (variab == end && variab != begin)
     {
            temp = variab->prev;
            temp->next = variab->next;
            end = temp;
            data.variab = variab->variab;
            delete variab;
     }
     else if (variab == end && variab == begin)
     {
            temp = variab;
            data.variab = variab->variab;
            delete end;
            end = begin = NULL;
     }
     else
     {
            temp = variab->prev;
            tempn = variab->next;
            temp->next = tempn;
            tempn->prev = temp;
            data.variab = variab->variab;
            delete variab;
     }
     return data.variab;
}
template<class T>
T List<T>::dellOne()
{
     Line<T> data;
     Line<T> *number = nullptr;
	 count--;
     if (end == begin)
     {
            data.variab = end->variab;
            delete end;
            end = begin = NULL;
     }
     else {
            number = end->prev;
            number->next = NULL;
			end = number;
            data.variab = end->variab;
            delete end;
           
     }
     return data.variab;
}
template<class T>
T List<T>::dellOneBack()
{
     if (end == begin)
     {
		 count--;
            Line<T> data;
            data.variab = end->variab;
            delete end;
            end = begin = NULL;
            return data.variab;
     }
     else {
            Line<T> *number = nullptr;
            Line<T> data;
			count--;
            number = begin->next;
            number->prev = NULL;
            data.variab = end->variab;
            delete begin;
            begin = number;
            return data.variab;
     }
}
template<class T>
bool List<T>::isEmpty()
{
     if (begin != NULL)
     {
            return true;
     }
     else {
            return false;
     }
}

template<class T>
void List<T>::searchF(string F)
{
     int index = 0;
     Line<T> *number = nullptr;
     number = end;
     while (number != NULL)
     {
            if (number->variab.Student::getF() == F)
            {
                    index++;
                    if (index == 1)
                    {
                          number->variab.showHeader();
                    }
                    cout << number->variab;
            }
            number = number->prev;
     }
     if (index == 0)
     {
            SetColor(Red, Black);
            cout << "—тудента с такой фамилией не существует!" << endl;
            SetColor(White, Black);
     }
}

template<class T>
void List<T>::searchI(string I)
{
     int index = 0;
     Line<T> *number = nullptr;
     number = end;
     while (number != NULL)
     {
            if (number->variab.Student::getI() == I)
            {
                    index++;
                    if (index == 1)
                    {
                          number->variab.showHeader();
                    }
                    cout << number->variab;
            }
            number = number->prev;
     }
     if (index == 0)
     {
            SetColor(Red, Black);
            cout << "—тудента с таким именем не существует!" << endl;
            SetColor(White, Black);
     }
}

template<class T>
void List<T>::searchYear(int year)
{
     int index = 0;
     Line<T> *number = nullptr;
     number = end;
     while (number != NULL)
     {
            if (number->variab.Student::getYear() == year)
            {
                    index++;
                    if (index == 1)
                    {
                          number->variab.showHeader();
                    }
                    cout << number->variab;
            }
            number = number->prev;
     }
     if (index == 0)
     {
            SetColor(Red, Black);
            cout << "—тудента с таким годом рождени€ не существует!" << endl;
            SetColor(White, Black);
     }
}

template<class T>
void List<T>::searchFI(string F, string I)
{
     int index = 0;
     Line<T> *number = nullptr;
     number = end;
     while (number != NULL)
     {
            if (number->variab.Student::getF() == F && number->variab.Student::getI() == I)
            {
                    index++;
                    if (index == 1)
                    {
                          number->variab.showHeader();
                    }
                    cout << number->variab;
            }
            number = number->prev;
     }
     if (index == 0)
     {
            SetColor(Red, Black);
            cout << "—тудента с такой фамилией и именем не существует!" << endl;
            SetColor(White, Black);
     }
}

template<class T>
void List<T>::searchIYear(string I, int Year)
{
     int index = 0;
     Line<T> *number = nullptr;
     number = end;
     while (number != NULL)
     {
            if (number->variab.Student::getI() == I && number->variab.Student::getYear() == Year)
            {
                    index++;
                    if (index == 1)
                    {
                          number->variab.showHeader();
                    }
                    cout << number->variab;
            }
            number = number->prev;
     }
     if (index == 0)
     {
            SetColor(Red, Black);
            cout << "—тудента с таким именем и годом рождени€ не существует!" << endl;
            SetColor(White, Black);
     }
}
template<class T>
void List<T>::searchFYear(string F, int Year)
{
     int index = 0;
     Line<T> *number = nullptr;
     number = end;
     while (number != NULL)
     {
            if (number->variab.Student::getF() == F && number->variab.Student::getYear() == Year)
            {
                    index++;
                    if (index == 1)
                    {
                          number->variab.showHeader();
                    }
                    cout << number->variab;
            }
            number = number->prev;
     }
     if (index == 0)
     {
            SetColor(Red, Black);
            cout << "—тудента с такой фамилией и годом рождени€ не существует!" << endl;
            SetColor(White, Black);
     }
}
template<class T>
Line<T>* List<T>::operator[] (int id)
{
     Line<T> *number = nullptr;
     number = end;
     int index = 1;
     while (id != index)
     {
            if (number->prev != NULL)
            {
                    number = number->prev;
            }
            index++;
     }
     return number;
}
template<class T>
void List<T>::readFile(string fileName)
{
     ifstream fin(fileName, ios::in);
     T temp;
     while (fin >> temp)
     {
            this->push(temp);
     }
     fin.close();
}
template<class T>
void List<T>::writeFile(string fileName)
{
     ofstream fout(fileName, ios::binary | ios_base::out);
     Line<T> *number = begin;
     while (number != NULL)
     {
            fout << number->variab;
            number = number->next;
     }
     fout.close();
}

template<class T>
void List<T>::dellElements()
{
     Line<T> * tmp = nullptr;
     if (begin != NULL)
     {
            while (begin != NULL)
            {
                    tmp = begin->next;
                    delete begin;
                    begin = tmp;
            }
     }
}
template<class T>
int List<T>::getNumber()
{
     return this->count;
}
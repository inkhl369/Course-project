#pragma once
#include "Console.cpp"

void main()
{
    setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	User auth;
	Console<bool> design;
	int role = auth.authorization();
	if (role == 0)
		design.MenuMain(0);
	else
	{
		if (role == 1)
			design.MenuMain(1);
		else
		{
			Sleep(100);
			exit(0);
		}
	}
}
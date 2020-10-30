#pragma once
#include "Header.h"

class User
{
private:
	string login;
	string password;
public:
	User();
	User(string, string);
	User(const User&);
	void setData();
	int authorization();
	bool checkAuth();
	void checkDB();
	friend ostream& operator<<(ostream&, User&);
	friend istream& operator >> (istream&, User&);
	friend ofstream& operator<<(ofstream&, User&);
	friend ifstream& operator >> (ifstream&, User&);
	~User();
};

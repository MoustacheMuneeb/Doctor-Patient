#pragma once
#include<iostream>
using namespace std;
class Person
{
protected:
	char* name;
	int age;
	char* phone;
	char* address;
public:
	void setname(char* n);
	void setage(int a);
	void setphone(char* p);
	void setaddress(char* ad);

	char* getname();
	int getage();
	char* getphone();
	char* getaddress();

	Person();
	Person(char* n, int a, char* p, char* ad);
	Person(Person& obj);

	ostream& operator <<(ostream& out);
	istream& operator >>(istream& in);

	~Person();
};


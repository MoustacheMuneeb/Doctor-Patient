#pragma once
#include"Person.h"
class Doctor:public Person
{
protected:
	char* specialization;
	char* designation;

public:
	void setspecialization(char* s);
	void setdesignation(char* d);

	void displayfordoctor();

	char* getspecialization();
	char* getdesignation();

	Doctor();
	Doctor(char*s, char*d);
	Doctor(Doctor& obj);

	ostream& operator<<(ostream& out);
	istream& operator>>(istream& in);

	~Doctor();
};


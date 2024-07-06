#pragma once
#include"Person.h"
class Patient:public Person
{
protected:
	char* disease;
public:

	void setdisease(char* di);

	char* getdisease();

	void display();

	Patient();
	Patient(char* di);
	Patient(Patient& obj);

	ostream& operator<<(ostream& out);
	istream& operator>>(istream& in);

	~Patient();
};


#include "Patient.h"

void Patient::setdisease(char* di)
{
	int len = 0;
	for (int i = 0; di[i] != '\0'; i++)
	{
		len++;
	}
	disease = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		disease[j] = di[j];
	}
	disease[len] = '\0';
}

char* Patient::getdisease()
{
	return disease;
}

void Patient::display()
{
	cout << "Patient Name :" << this->getname() << endl;
	cout << "Patient Age :" << this->getage() << endl;
	cout << "Patient Phone Number :" << this->getphone() << endl;
	cout << "Patient Address :" << this->getaddress() << endl;
	cout << "Patient Disease :" << getdisease() << endl;
}

Patient::Patient()
{
	disease = NULL;
}

Patient::Patient(char* di)
{
	int len = 0;
	for (int i = 0; di[i] != '\0'; i++)
	{
		len++;
	}
	disease = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		disease[j] = di[j];
	}
	disease[len] = '\0';
}

Patient::Patient(Patient& obj)
{
	int len = 0;
	for (int i = 0; obj.disease[i] != '\0'; i++)
	{
		len++;
	}
	disease = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		disease[j] = obj.disease[j];
	}
	disease[len] = '\0';
}

ostream& Patient::operator<<(ostream& out)
{
	out << disease;
	return out;
}

istream& Patient::operator>>(istream& in)
{
	in >> disease;
	return in;
}

Patient::~Patient()
{
	delete[]disease;
}

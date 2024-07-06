#include "Doctor.h"

void Doctor::setspecialization(char* s)
{
	int len = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	specialization = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		specialization[j] = s[j];
	}
	specialization[len] = '\0';
}

void Doctor::setdesignation(char* d)
{
	int len = 0;
	for (int i = 0; d[i] != '\0'; i++)
	{
		len++;
	}
	designation = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		designation[j] = d[j];
	}
	designation[len] = '\0';
}

void Doctor::displayfordoctor()
{
	cout << "Patient was checked by (Doctor Name):" << this->getname() << endl;
	cout << "Doctor's Specialization in :" << getspecialization() << endl;
	cout << "Doctor Designation in Hospital :" << getdesignation() << endl;
}

char* Doctor::getspecialization()
{
	return specialization;
}

char* Doctor::getdesignation()
{
	return designation;
}

Doctor::Doctor()
{
	cout << "This is the default constructor for Doctor" << endl;
	specialization = 0;
	designation = 0;
}

Doctor::Doctor(char* s, char* d)
{
	int len = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	specialization = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		specialization[j] = s[j];
	}
	specialization[len] = '\0';

	for (int i = 0; d[i] != '\0'; i++)
	{
		len++;
	}
	designation = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		designation[j] = d[j];
	}
	designation[len] = '\0';
}

Doctor::Doctor(Doctor& obj)
{
	int len = 0;
	for (int i = 0; obj.specialization[i] != '\0'; i++)
	{
		len++;
	}
	specialization = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		specialization[j] = obj.specialization[j];
	}
	specialization[len] = '\0';

	for (int i = 0; obj.designation[i] != '\0'; i++)
	{
		len++;
	}
	designation = new char[len + 1];
	for (int j = 0; j < len; j++)
	{
		designation[j] = obj.designation[j];
	}
	designation[len] = '\0';
}

ostream& Doctor::operator<<(ostream& out)
{
	out << specialization;
	out << designation;
	return out;
}

istream& Doctor::operator>>(istream& in)
{
	in >> specialization;
	in >> designation;
	return in;
}

Doctor::~Doctor()
{
	delete[]specialization;
	delete[]designation;
}

#include "Person.h"

void Person::setname(char* n)
{
    int len = 0;
    for (int i = 0; n[i] != '\0'; i++)
    {
        len++;
    }
    name = new char[len + 1];
    for (int j = 0; j < len; j++)
    {
        name[j] = n[j];
    }
    name[len] = '\0';
}

void Person::setage(int a)
{
    age = a;
}

void Person::setphone(char* p)
{
    int len = 0;
    for (int i = 0; p[i] != '\0'; i++)
    {
        len++;
    }
    phone = new char[len + 1];
    for (int j = 0; j < len; j++)
    {
        phone[j] = p[j];
    }
    phone[len] = '\0';
}

void Person::setaddress(char* ad)
{
    int len = 0;
    for (int i = 0; ad[i] != '\0'; i++)
    {
        len++;
    }
    address = new char[len + 1];
    for (int j = 0; j < len; j++)
    {
        address[j] = ad[j];
    }
    address[len] = '\0';
}

char* Person::getname()
{
    return name;
}

int Person::getage()
{
    return age;
}

char* Person::getphone()
{
    return phone;
}

char* Person::getaddress()
{
    return address;
}

Person::Person()
{
    cout << "This is the default constructor for Class Person" << endl;
    name = 0;
    phone = 0;
    age = 0;
    address = 0;
}

Person::Person(char* n, int a, char* p, char* ad)
{
    int len = 0;
    for (int i = 0; n[i] != '\0'; i++)
    {
        len++;
    }
    name = new char[len + 1];
    for (int j = 0; j < len; j++)
    {
        name[j] = n[j];
    }
    name[len] = '\0';

    age = a;

    for (int i = 0; p[i] != '\0'; i++)
    {
        len++;
    }
    phone = new char[len + 1];
    for (int j = 0; j < len; j++)
    {
        phone[j] = p[j];
    }
    phone[len] = '\0';

    for (int i = 0; ad[i] != '\0'; i++)
    {
        len++;
    }
    address = new char[len + 1];
    for (int j = 0; j < len; j++)
    {
        address[j] = ad[j];
    }
    address[len] = '\0';
}

Person::Person(Person& obj)
{
    int len = 0;
    for (int i = 0; obj.name[i] != '\0'; i++)
    {
        len++;
    }
    name = new char[len + 1];
    for (int j = 0; j < len; j++)
    {
        name[j] = obj.name[j];
    }
    name[len] = '\0';

    age = obj.age;

    for (int i = 0; obj.phone[i] != '\0'; i++)
    {
        len++;
    }
    phone = new char[len + 1];
    for (int j = 0; j < len; j++)
    {
        phone[j] = obj.phone[j];
    }
    phone[len] = '\0';

    for (int i = 0; obj.address[i] != '\0'; i++)
    {
        len++;
    }
    address = new char[len + 1];
    for (int j = 0; j < len; j++)
    {
        address[j] = obj.address[j];
    }
    address[len] = '\0';
}

ostream& Person::operator<<(ostream& out)
{
    out << name;
    out << age;
    out << phone;
    out << address;
    return out;
}

istream& Person::operator>>(istream& in)
{
    in >> name;
    in >> age;
    in >> phone;
    in >> address;
    return in;
}

Person::~Person()
{
    delete[]name;
    delete[]phone;
    delete[]address;
    age = NULL;
}

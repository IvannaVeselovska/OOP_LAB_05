#include "Person.h"
#include <string.h>


Person::Person()
{
}

Person::Person(char *name, char * surname, char * e_mail)
{
	SetName(name);
	SetSurname(surname);
	SetEmail(e_mail);
}

Person::Person(Person * h)
{
	char  f[15];
	strcpy(f, h->GetName());
	SetName(f);
	char f2[20];
	strcpy(f2, h->GetSurname());
	SetSurname(f2);
	char f3[50];
	strcpy(f3, h->GetEmail());
	SetEmail(f3);
}


Person::~Person()
{
}

void Person::SetName(char * nam)
{
	strcpy(this->name, nam);
}

void Person::SetSurname(char *sur)
{
	strcpy(this->surname, sur);
}


void Person::SetEmail(char *email)
{
	strcpy(this->e_mail, email);
}

const char * Person::GetName() const
{
	return name;
}

const char * Person::GetSurname() const
{
	return surname;
}

const char * Person::GetEmail() const
{
	return e_mail;
}
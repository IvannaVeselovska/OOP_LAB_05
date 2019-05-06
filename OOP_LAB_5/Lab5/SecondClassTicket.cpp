#include "SecondClassTicket.h"
#include <string.h>
#include <string>
#include <conio.h>

using namespace std;


SecondClassTicket::SecondClassTicket()
{
}

SecondClassTicket::SecondClassTicket(Human passenger, int carriage, int place, double prise)
{
	SetPassenger(&passenger);
	SetCarriage(carriage);
	SetPla�e(place);
	SetPrise(prise);
}

SecondClassTicket::SecondClassTicket(SecondClassTicket * sourse)
{
	SetPassenger(&sourse->GetPassenger());
	SetCarriage(sourse->GetCarriage());
	SetPla�e(sourse->GetPla�e());
	SetPrise(sourse->GetPrise());
}


SecondClassTicket::~SecondClassTicket()
{
}

void SecondClassTicket::SetPla�e(int place)
{
	if (prise > 0 && prise < 53)
	{
		this->place = place;
	}
}

void SecondClassTicket::SetPrise(double prise)
{
	this->prise = prise;
}

const int SecondClassTicket::GetPla�e() const
{
	return this->place;
}

const double SecondClassTicket::GetPrise() const
{
	return this->prise;
}

char * SecondClassTicket::GetInformation(char * info) const
{
	if (this->place < 37)
	{
		char a[] = "average ";
		strcpy(info, a);
	}
	else
	{
		char a[] = "lateral ";
		strcpy(info, a);
	}
	if (this->place % 2)
	{
		char a[] = "lower place";
		strcat(info, a);
	}
	else
	{
		char a[] = "upper place";
		strcat(info, a);
	}
	return info;
}

int SecondClassTicket::IsCorrect(int place)
{
	if (place > 0 && place < 53)
	{
		return 1;
	}
	return 0;
}


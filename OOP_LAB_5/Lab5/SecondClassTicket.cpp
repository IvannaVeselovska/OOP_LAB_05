#include "SecondClassTicket.h"
#include <string.h>

using namespace std;

SecondClassTicket::SecondClassTicket()
{
}

SecondClassTicket::SecondClassTicket(Human passenger, char* carriage, int place, double prise) :RailwayTicket(passenger, carriage, place, prise)
{

}

SecondClassTicket::SecondClassTicket(SecondClassTicket * sourse)
{
	SetPassenger(&sourse->GetPassenger());
	SetCarriage((char*)sourse->GetCarriage());
	SetPlañe(sourse->GetPlace());
	SetPrise(sourse->GetPrise());
}


SecondClassTicket::~SecondClassTicket()
{
}



char * SecondClassTicket::GetInformation(char * info) const
{
	if (this->GetPlace() < 37)
	{
		char a[] = "average ";
		strcpy(info, a);
	}
	else
	{
		char a[] = "lateral ";
		strcpy(info, a);
	}
	if (this->GetPlace() % 2)
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
	if (place > 0 && place < 55)
	{
		return 1;
	}
	return 0;
}


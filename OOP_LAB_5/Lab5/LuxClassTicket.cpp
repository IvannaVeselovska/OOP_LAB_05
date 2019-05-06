#include "LuxClassTicket.h"
#include <string.h>


LuxClassTicket::LuxClassTicket()
{
}

LuxClassTicket::LuxClassTicket(Human passenger, char * carriage, int place, double prise) :RailwayTicket(passenger, carriage, place, prise)
{
}

LuxClassTicket::LuxClassTicket(LuxClassTicket * sourse)
{
	SetPassenger(&sourse->GetPassenger());
	SetCarriage((char*)sourse->GetCarriage());
	SetPlañe(sourse->GetPlace());
	SetPrise(sourse->GetPrise());
}


LuxClassTicket::~LuxClassTicket()
{
}

char * LuxClassTicket::GetInformation(char * info) const
{
	char a[] = "This is luxury ticket";
	strcpy(info, a);
	return info;
}


int LuxClassTicket::IsCorrect(int place)
{
	if (place > 0 && place < 19)
	{
		return 1;
	}
	return 0;
}

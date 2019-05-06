#include "LuxClassTicket.h"



LuxClassTicket::LuxClassTicket()
{
}


LuxClassTicket::~LuxClassTicket()
{
}

void LuxClassTicket::SetPlañe(int place)
{
	if (IsCorrect(place)) {
		this->place = place;
	}
}

void LuxClassTicket::SetPrise(double prise)
{
	this->prise = prise;
}

const int LuxClassTicket::GetPlañe() const
{
	return this->place;
}

const double LuxClassTicket::GetPrise() const
{
	return this->prise;
}

int LuxClassTicket::IsCorrect(int place)
{
	if (place > 0 && place < 19)
	{
		return 1;
	}
	return 0;
}

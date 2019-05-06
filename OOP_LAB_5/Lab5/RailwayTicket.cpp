#include "RailwayTicket.h"
#include <string.h>
#include "Person.h"

RailwayTicket::RailwayTicket()
{
}

RailwayTicket::RailwayTicket(Person passenger, char* carriage, int place, double prise)
{
	SetPassenger(&passenger);
	SetCarriage(carriage);
	SetPlañe(place);
	SetPrise(prise);
}

RailwayTicket::~RailwayTicket()
{
}

void RailwayTicket::SetPassenger(Person * passenger)
{
	this->passenger = Person(passenger);
}

void RailwayTicket::SetCarriage(char* carriage)
{
	strcpy(this->carriage, carriage);
}

Person RailwayTicket::GetPassenger() const
{
	return passenger;
}

const char* RailwayTicket::GetCarriage() const
{
	return this->carriage;
}

void RailwayTicket::SetPlañe(int place)
{
	if (!IsCorrect(place))
	{
		throw "Your place number is incorrect";
	}
	this->place = place;
}

void RailwayTicket::SetPrise(double prise)
{
	this->prise = prise;
}

const int RailwayTicket::GetPlace() const
{
	return this->place;
}

const double RailwayTicket::GetPrise() const
{
	return this->prise;
}

#pragma once
#include "RailwayTicket.h"
class SecondClassTicket :
	public RailwayTicket
{
private:
	int place;
	double prise;
public:
	SecondClassTicket();
	SecondClassTicket(Human, int, int, double);
	SecondClassTicket(SecondClassTicket *);
	~SecondClassTicket();
	void SetPla�e(int);
	void SetPrise(double);
	const int GetPla�e() const;
	const double GetPrise() const;
	char* GetInformation(char*) const;
};


#pragma once
#include "Person.h"
#include "RailwayTicket.h"
class LuxClassTicket :
	public RailwayTicket
{
public:
	LuxClassTicket();
	LuxClassTicket(Person, char*, int, double);
	LuxClassTicket(LuxClassTicket *);
	~LuxClassTicket();
	char* GetInformation(char*) const override;
	int IsCorrect(int) override;
};


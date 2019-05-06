#pragma once
#include "RailwayTicket.h"
class LuxClassTicket :
	public RailwayTicket
{
public:
	LuxClassTicket();
	LuxClassTicket(Human, char*, int, double);
	LuxClassTicket(LuxClassTicket *);
	~LuxClassTicket();
	char* GetInformation(char*) const override;
	int IsCorrect(int) override;
};


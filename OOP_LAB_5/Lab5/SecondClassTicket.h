#pragma once
#include "RailwayTicket.h"
class SecondClassTicket :
	public RailwayTicket
{

public:
	SecondClassTicket();
	SecondClassTicket(Person, char*, int, double);
	SecondClassTicket(SecondClassTicket *);
	~SecondClassTicket();
	char* GetInformation(char*) const override;
	int IsCorrect(int) override;
};


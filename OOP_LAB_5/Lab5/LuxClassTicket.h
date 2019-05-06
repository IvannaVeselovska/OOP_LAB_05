#pragma once
#include "RailwayTicket.h"
class LuxClassTicket :
	public RailwayTicket
{
private:
	int place;
	double prise;
public:
	LuxClassTicket();
	LuxClassTicket(Human, int, int, double);
	LuxClassTicket(LuxClassTicket *);
	~LuxClassTicket();
	void SetPlañe(int);
	void SetPrise(double);
	const int GetPlañe() const;
	const double GetPrise() const;
	char* GetInformation(char*) const;
	int IsCorrect(int) override;
};


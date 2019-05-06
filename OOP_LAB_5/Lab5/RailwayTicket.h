#pragma once
#include "Human.h"

class RailwayTicket
{
private:
	Human passenger;
	char carriage[10];
	int place;
	double prise;
public:
	RailwayTicket();
	RailwayTicket(Human, char*, int , double);
	~RailwayTicket();
	void SetPassenger(Human *);
	void SetCarriage(char*);
	Human GetPassenger() const;
	const char* GetCarriage() const;
	void SetPlañe(int);
	void SetPrise(double);
	const int GetPlace() const;
	const double GetPrise() const;
	virtual char* GetInformation(char*) const = 0;
	virtual int IsCorrect(int) = 0;
};

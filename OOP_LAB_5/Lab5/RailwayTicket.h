#pragma once
#include "Person.h"

class RailwayTicket
{
private:
	Person passenger;
	char carriage[10];
	int place;
	double prise;
public:
	RailwayTicket();
	RailwayTicket(Person, char*, int , double);
	~RailwayTicket();
	void SetPassenger(Person *);
	void SetCarriage(char*);
	Person GetPassenger() const;
	const char* GetCarriage() const;
	void SetPlañe(int);
	void SetPrise(double);
	const int GetPlace() const;
	const double GetPrise() const;
	virtual char* GetInformation(char*) const = 0;
	virtual int IsCorrect(int) = 0;
};

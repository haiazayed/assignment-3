#pragma once
#include "person.h"

class customer : public person
{
protected:
	string mechanicalid;
	appointment app;



public:

	customer();
	customer(string, string, int, string,appointment);


	void setapp(int, int);
	appointment getapp();


	void setMid(string e);
	string getMid();

	void printf();

	bool operator == (customer );

	bool operator >(customer );

	bool operator <(customer );
};


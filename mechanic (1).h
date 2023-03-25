#pragma once
#include "person.h"
class mechanic : public person
{
protected:
	int counter;
	appointment* arr;
	int maxim;

public:

	mechanic();
	mechanic(string, string, int, int);


	bool isavailable(appointment );


	void setcounter(int);
	int getcounter();

	void printf();


	appointment getappoint(int);
	void setappoint(appointment );
};


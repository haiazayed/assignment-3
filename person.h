#include <iostream>
using namespace std;

#pragma once

struct appointment {
	int hour;
	int minute;
};



class person
{
protected:

	string name;
	string id;
	int age;
	

public:

	person();
    person(string , string , int );


	void setname(string );
	string getname();



	void setid(string );
	string getid();


	void setage(int );
	int getage();


	virtual void printf() = 0;



};


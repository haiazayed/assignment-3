#pragma once
class workshop
{
	



private:
	mechanic * m;
	customer* c;
	int sizem;
	int sizec;

public:
	void assign(int);


	workshop(int , int );
    

	void setcustomer(int,customer);
	customer getcustomer(int);



	void setmecahnic(int, mechanic);
	mechanic getmechanic(int);


};


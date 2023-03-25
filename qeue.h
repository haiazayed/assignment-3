#pragma once
using namespace std;


template<class t>
class qeue
{
public:
	qeue();
	qeue(int);


	bool IsEmpty();
	bool IsFull();

	bool push(t x);
	bool pop(t& x);

	void DisplayQueue();



private:
	int front;		
	int rear;		
	int counter;	
	int maxSize;	
	t* values;
};


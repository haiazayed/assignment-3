#include "qeue.h"


template<class t>
qeue<class t>::qeue() {
	values = new t[10];
}



template<class t>
qeue<class t>::qeue(int n) {
	values = new t[n];
}



template<class t>
bool qeue<class t>::IsEmpty() {
	if (counter)	return false;
	else			return true;
}



template<class t>
bool qeue<class t>::IsFull() {
	if (counter < maxSize)	return false;
	else				return true;
}



template<class t>
bool qeue<class t>::push(t x) {
	if (IsFull()) {
		cout << "Error: the queue is full." << endl;
		return false;
	}
	else {
		
		rear = (rear + 1) % maxSize;
		
		values[rear] = x;
	
		counter++;
		return true;
	}
}





template<class t>
bool qeue<class t>::pop(t& x) {
	if (IsEmpty()) {
		cout << "Error: the queue is empty." << endl;
		return false;
	}
	else {
		
		x = values[front];
		
		front = (front + 1) % maxSize;
	
		counter--;
		return true;
	}
}



template<class t>
void qeue<class t>::DisplayQueue() {
	cout << "front -->";
	for (int i = 0; i < counter; i++) {
		if (i == 0) cout << "\t";
		else		cout << "\t\t";
		cout << values[(front + i) % maxSize];
		if (i != counter - 1)
			cout << endl;
		else
			cout << "\t<-- rear" << endl;
	}
}


#include "mechanic.h"
using namespace std;

mechanic::mechanic()
	:person()
{
	counter = 0;
	arr = new appointment[24];
	maxim = 24;
}



mechanic::mechanic(string h, string j, int l, int k) :person(h,j,l)
{
	counter = k;
	arr = new appointment[24];
	maxim = 24;
}




bool mechanic::isavailable(appointment r) {
	bool res = true;
	for (int i = 0; i < counter; i++) {
		if ((arr[i].hour == r.hour) && (arr[i].minute == r.minute)) {
			res = false;
		}
	}
	return res;
}




void mechanic::setcounter(int x) {
	counter = x;
}

int mechanic::getcounter() {
	return counter;
}



appointment mechanic::getappoint(int c) {
	return arr[c];
}



void mechanic::setappoint(appointment q) {
	if (isavailable(q) && counter < maxim) {
		counter++;
		arr[counter] = q;
	}
}


void mechanic::printf() {
	cout << "name: " << name << endl;
	cout << "id: " << id << endl;
	cout << "age: " << age << endl;
}

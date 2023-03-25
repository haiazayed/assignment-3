#include "workshop.h"
#include "mechanic.h"
#include "customer.h"
#include <iostream>

using namespace std;

void workshop::assign(int n) {
	bool flag = false;
	appointment time = c[n].getapp();
	for (int i = 0; i < sizem; i++) {


		if (m[i].isavailable(time)) {
			flag = true;
			c[n].setMid(m[i].getid());
			m[i].setappoint(time);

			cout << "your appointment is with: " << m[i].getname() << " on " << time << endl;
		}

	}

	if (flag == false) {
	cout << "there is no mechanic available at this time, your appointment is cancelled" << endl;
}

}



workshop::workshop(int x,int y) {
	sizem = x;
	sizec = y;

	m = new mechanic[x];
	c = new customer[y];
}



void workshop::setcustomer(int n,customer x){
	c[n] = x;
}



customer workshop::getcustomer(int n) {
	return c[n];
}



void workshop::setmecahnic(int n, mechanic x) {
	m[n] = x;
}



mechanic workshop::getmechanic(int n) {
	return m[n];
}



#include "customer.h"
#include<iostream>


using namespace std;




void customer::setapp(int h, int m) {
	app.hour = h;
	app.minute = m;
}

appointment customer::getapp() {

	return app;
}




void customer::setMid(string h) {
	mechanicalid = h;
}

string customer::getMid() {
	return mechanicalid;
}


void customer::printf() {
	cout << "name: " << name << endl;
	cout << "id: " << id << endl;
	cout << "age: " << age << endl;
	cout << "mechanical id: " << mechanicalid << endl;
	cout << "time of appointment: " << app.hour << ":" << app.minute << endl;
}

bool customer::operator == (customer u){
	if ((this->getapp().hour == u.getapp().hour)&&(this->getapp().minute == u.getapp().minute)){
		return true;
	}
	else return false;
}



bool customer::operator > (customer u) {
	bool res = false;
	if (this->getapp().hour > u.getapp().hour) {
		res = true;
	}
	else if ((this->getapp().hour == u.getapp().hour) && (this->getapp().minute > u.getapp().minute)) {
		res = true;
	}

	return res;
}



bool customer::operator < (customer u) {
	bool res = false;
	if (this->getapp().hour < u.getapp().hour) {
		res = true;
	}
	else if ((this->getapp().hour == u.getapp().hour) && (this->getapp().minute < u.getapp().minute)) {
		res = true;
	}

	return res;
}




customer::customer()
	:person() {
	mechanicalid = "";
}

customer::customer(string n, string i, int a, string m, appointment ap)
	:person(n, i, a) {
	mechanicalid = m;
	app = ap;
}









#include "Routeexc.h"

using namespace std;

Routeexc::Routeexc(string rcode, string date, int p1, int p2, int ar1, int ar2, int ar3, int ar4, string max) {
	this->rcode= rcode;
	this->date= date;
	this->p1= p1;
	this->p2= p2;
	this->ar1= ar1;
	this->ar2= ar2;
	this->ar3= ar3;
	this->ar4= ar4;
	this->max= max;
}


string Routeexc::getRcode() {
	return rcode;
}

string Routeexc::getDate() {
	return date;
}

int Routeexc::getP1() {
	return p1;
}

int Routeexc::getP2() {
	return p2;
}

int Routeexc::getAr1() {
	return ar1;
}

int Routeexc::getAr2() {
	return ar2;
}

int Routeexc::getAr3() {
	return ar3;
}

int Routeexc::getAr4() {
	return ar4;
}

string Routeexc::getMax() {
	return max;
}


void Routeexc::Getdata() {
	cout << "Enter the Code of the Route Excecution : " << endl;
	cin >> rcode;
	cout << "Enter the Date of the Route Excecution : " << endl;
	cin >> date;
	cout << "Enter the Pilot 1 of the Route Excecution : " << endl;
	cin >> p1;
	cout << "Enter the Pilot 2 of the Route Excecution : " << endl;
	cin >> p2;
	cout << "Enter the Airhost 1 of the Route Excecution : " << endl;
	cin >> ar1;
	cout << "Enter the Airhost 2 of the Route Excecution : " << endl;
	cin >> ar2;
	cout << "Enter the Airhost 3 of the Route Excecution : " << endl;
	cin >> ar3;
	cout << "Enter the Airhost 4 of the Route Excecution : " << endl;
	cin >> ar4;
	cout << "Enter max number of Tickets for the Route Excecution : " << endl;
	cin >> max;
}

void Routeexc::Display() {
	cout << rcode << "\t" << date << "\t" << p1 << "\t" << p2 << "\t" << ar1 << "\t" << ar2 << "\t" << ar3 << ar4 << "\t" << max << endl;
}
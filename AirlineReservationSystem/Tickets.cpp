#include "Tickets.h"

using namespace std;

Tickets::Tickets(int code, int customerid, int excrouteid) {
	this->code = code;
	this->customerid = customerid;
	this->excrouteid = excrouteid;
}


int Tickets::getCode() {
	return code;
}

int Tickets::getCustomerid() {
	return customerid;
}

int Tickets::getExcrouteid() {
	return excrouteid;
}


void Tickets::Getdata() {
	cout << "Enter the Code of the Ticket : " << endl;
	cin >> code;
	cout << "Enter the Customer ID for the Ticket : " << endl;
	cin >> customerid;
	cout << "Enter the Execute Route ID for the Ticket : " << endl;
	cin >> excrouteid;
}

void Tickets::Display() {
	cout << code << "\t" << customerid << "\t" << excrouteid << endl;
}
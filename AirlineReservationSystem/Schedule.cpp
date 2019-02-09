#include "Schedule.h"

using namespace std;

Schedule::Schedule(string rcode, string spoint, string epoint, string rday, string shour, string ehour, int ticketpric) {
	this->rcode = rcode;
	this->spoint = spoint;
	this->epoint = epoint;
	this->rday = rday;
	this->shour = shour;
	this->ehour = ehour;
	this->ticketpric = ticketpric;
}


string Schedule::getRcode() {
	return rcode;
}

string Schedule::getSpoint() {
	return spoint;
}

string Schedule::getEpoint() {
	return epoint;
}

string Schedule::getRday() {
	return rday;
}

string Schedule::getShour() {
	return shour;
}

string Schedule::getEhour() {
	return ehour;
}

int Schedule::getTicketpric() {
	return ticketpric;
}


void Schedule::Getdata() {
	cout << "Enter the Code of the Schedule : " << endl;
	cin >> rcode;
	cout << "Enter the Start Point of the Schedule : " << endl;
	cin >> spoint;
	cout << "Enter the End Point of the Schedule : " << endl;
	cin >> epoint;
	cout << "Enter the Day of the Schedule : " << endl;
	cin >> rday;
	cout << "Enter the Start Hour of the Schedule : " << endl;
	cin >> shour;
	cout << "Enter the End Hour of the Schedule : " << endl;
	cin >> ehour;
	cout << "Enter the Ticket Price of the Schedule : " << endl;
	cin >> ticketpric;
}

void Schedule::Display() {
	cout << rcode << "\t" << spoint << "\t" << epoint << "\t" << rday << "\t" << shour << "\t" << ehour << "\t" << ticketpric << endl;
}
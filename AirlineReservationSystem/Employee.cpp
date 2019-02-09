#include "Employee.h"

using namespace std;

// class constructor
Employee::Employee(string fname, string lname, string idnum, string phonenum, string address, string bday) {
	this->fname = fname;
	this->lname = lname;
	this->idnum = idnum;
	this->phonenum = phonenum;
	this->address = address;
	this->bday = bday;
}


string Employee::getFname() {
	return fname;
}

string Employee::getLname() {
	return lname;
}

string Employee::getIdnum() {
	return idnum;
}

string Employee::getPhonenum() {
	return phonenum;
}

string Employee::getAddress() {
	return address;
}

string Employee::getBday() {
	return bday;
}

void Employee::Getdata() {
	cout << "Enter the First Name of the Employee : " << endl;
	cin >> fname;
	cout << "Enter the Last Name of the Employee : " << endl;
	cin >> lname;
	cout << "Enter the ID Number of the Employee : " << endl;
	cin >> idnum;
	cout << "Enter the Phone Number of the Employee : " << endl;
	cin >> phonenum;
	cout << "Enter the Address of the Employee : " << endl;
	cin >> address;
	cout << "Enter the Birthday of the Employee : " << endl;
	cin >> bday;
}

void Employee::Display() {
	cout << fname << "\t" << lname << "\t" << idnum << "\t" << phonenum << "\t" << address << "\t" << bday << endl;
}

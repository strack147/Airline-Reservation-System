#include "Customer.h"

using namespace std;

// class constructor
Customer::Customer(string cfname, string clname, string cnumber, string caddress) {
	this->cfname = cfname;
	this->clname = clname;
	this->cnumber = cnumber;
	this->caddress = caddress;
}

string Customer::getCfname() {
	return cfname;
}

string Customer::getClname() {
	return clname;
}

string Customer::getCnumber() {
	return cnumber;
}

string Customer::getCaddress() {
	return caddress;
}

void Customer::Getdata() {
	cout << "Enter the First Name of the Customer : " << endl;
	cin >> cfname;
	cout << "Enter the Last Name of the Customer : " << endl;
	cin >> clname;
	cout << "Enter the Phone Number of the Customer : " << endl;
	cin >> cnumber;
	cout << "Enter the Address of the Customer : " << endl;
	cin >> caddress;
}

void Customer::Display() {
	cout << cfname << "\t" << clname << "\t" << cnumber << "\t" << caddress << endl;
}

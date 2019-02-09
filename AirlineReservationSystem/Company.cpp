#include "Company.h"

using namespace std;

// class constructor
Company::Company(string compfname, string complname, string compnumber, string compaddress) {
	this->compfname = compfname;
	this->complname = complname;
	this->compnumber = compnumber;
	this->compaddress = compaddress;
}

string Company::getCompfname() {
	return compfname;
}

string Company::getComplname() {
	return complname;
}

string Company::getCompnumber() {
	return compnumber;
}

string Company::getCompaddress() {
	return compaddress;
}

void Company::Getdata() {
	cout << "Enter the First Name of the Company : " << endl;
	cin >> compfname;
	cout << "Enter the Last Name of the Company : " << endl;
	cin >> complname;
	cout << "Enter the Phone Number of the Company : " << endl;
	cin >> compnumber;
	cout << "Enter the Address of the Company : " << endl;
	cin >> compaddress;
}

void Company::Display() {
	cout << compfname << "\t" << complname << "\t" << compnumber << "\t" << compaddress << endl;
}

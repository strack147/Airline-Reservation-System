#include "Airhost.h"
#include "Employee.h"

using namespace std;

// class constructor
Airhost::Airhost(string fname, string lname, string idnum, string phonenum, string address, string bday, int ywork) : Employee(fname, lname, idnum, phonenum, address, bday) {
	this->ywork = ywork;
}

int Airhost::getYwork() {
	return ywork;
}

void Airhost::Getdata() {
	cout << "Enter the First Name of the Airhost : " << endl;
	cin >> fname;
	cout << "Enter the Last Name of the Airhost : " << endl;
	cin >> lname;
	cout << "Enter the ID Number of the Airhost : " << endl;
	cin >> idnum;
	cout << "Enter the Phone Number of the Airhost : " << endl;
	cin >> phonenum;
	cout << "Enter the Address of the Airhost : " << endl;
	cin >> address;
	cout << "Enter the Birthday of the Airhost : " << endl;
	cin >> bday;
	cout << "Enter the Work Years of the Airhost : " << endl;
	cin >> ywork;

}

void Airhost::Display() {
	cout << fname << "\t" << lname << "\t" << idnum << "\t" << phonenum << "\t" << address << "\t" << bday << "\t" << ywork << endl;
}

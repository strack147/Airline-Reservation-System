#include "Pilot.h"
#include "Employee.h"

using namespace std;

// class constructor
Pilot::Pilot(string fname, string lname, string idnum, string phonenum, string address, string bday, int flyhour) : Employee(fname, lname, idnum, phonenum, address, bday) {
	this->flyhour = flyhour;
}


int Pilot::getFlyhour() {
	return flyhour;
}

void Pilot::Getdata() {
	cout << "Enter the First Name of the Pilot : " << endl;
	cin >> fname;
	cout << "Enter the Last Name of the Pilot : " << endl;
	cin >> lname;
	cout << "Enter the ID Number of the Pilot : " << endl;
	cin >> idnum;
	cout << "Enter the Phone Number of the Pilot : " << endl;
	cin >> phonenum;
	cout << "Enter the Address of the Pilot : " << endl;
	cin >> address;
	cout << "Enter the Birthday of the Pilot : " << endl;
	cin >> bday;
	cout << "Enter the Fly Hours of the Pilot : " << endl;
	cin >> flyhour;
}

void Pilot::Display() {
	cout << fname << "\t" << lname << "\t" << idnum << "\t" << phonenum << "\t" << address << "\t" << bday << "\t" << flyhour << endl;
}

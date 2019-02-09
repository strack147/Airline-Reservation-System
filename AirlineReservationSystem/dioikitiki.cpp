#include "dioikitiki.h"
#include "Employee.h"

using namespace std;

// class constructor
dioikitiki::dioikitiki(string fname, string lname, string idnum, string phonenum, string address, string bday, string know, int ywork) : Employee(fname, lname, idnum, phonenum, address, bday) {
	this->know = know;
	this->ywork = ywork;
}


string dioikitiki::getKnow() {
	return know;
}

int dioikitiki::getYwork() {
	return ywork;
}

void dioikitiki::Getdata() {
	cout << "Enter the First Name of the Administrator : " << endl;
	cin >> fname;
	cout << "Enter the Last Name of the Administrator : " << endl;
	cin >> lname;
	cout << "Enter the ID Number of the Administrator : " << endl;
	cin >> idnum;
	cout << "Enter the Phone Number of the Administrator : " << endl;
	cin >> phonenum;
	cout << "Enter the Address of the Administrator : " << endl;
	cin >> address;
	cout << "Enter the Birthday of the Administrator : " << endl;
	cin >> bday;
	cout << "Enter the Knowledge of the Administrator : " << endl;
	cin >> know;
	cout << "Enter the Work Years of the Administrator : " << endl;
	cin >> ywork;

}

void dioikitiki::Display() {
	cout << fname << "\t" << lname << "\t" << idnum << "\t" << phonenum << "\t" << address << "\t" << bday << "\t" << know << "\t" << ywork << endl;
}

#ifndef PILOT_H
#define PILOT_H

#include <iostream>
#include <string>

#include "Employee.h"

class Pilot : public Employee {
protected:
	int flyhour;
public:
	Pilot() {};
	Pilot(std::string fname, std::string lname, std::string idnum, std::string phonenum, std::string address, std::string bday, int flyhour);

	int getFlyhour();

	void setFlyhour(int);

	void Getdata();
	void Display();

};

#endif
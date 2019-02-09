#ifndef AIRHOST_H
#define AIRHOST_H

#include <iostream>
#include <string>

#include "Employee.h"

class Airhost : public Employee {
protected:
	std::string know;
	int ywork;
public:
	Airhost() {};
	Airhost(std::string fname, std::string lname, std::string idnum, std::string phonenum, std::string address, std::string bday, int ywork);


	int getYwork();


	void setKnow(std::string);
	void setYwork(int);

	void Getdata();
	void Display();

};

#endif
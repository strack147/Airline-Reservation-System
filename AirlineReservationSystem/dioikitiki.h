#ifndef DIOIKITIKI_H
#define DIOIKITIKI_H

#include <iostream>
#include <string>

#include "Employee.h"

class dioikitiki : public Employee {
protected:
	std::string know;
	int ywork;
public:
	dioikitiki() {};
	dioikitiki(std::string fname, std::string lname, std::string idnum, std::string phonenum, std::string address, std::string bday, std::string know, int ywork);

	std::string getKnow();
	int getYwork();


	void setKnow(std::string);
	void setYwork(int);

	void Getdata();
	void Display();

};

#endif
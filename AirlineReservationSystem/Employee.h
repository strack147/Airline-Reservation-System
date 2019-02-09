#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>


class Employee {
protected:
	std::string fname;
	std::string lname;
	std::string idnum;
	std::string phonenum;
	std::string address;
	std::string bday;
public:
	Employee() {};
	Employee(std::string fname, std::string lname, std::string idnum, std::string phonenum, std::string address, std::string bday);

	std::string getFname();
	std::string getLname();
	std::string getIdnum();
	std::string getPhonenum();
	std::string getAddress();
	std::string getBday();

	void setFname(std::string);
	void setLname(std::string);
	void setIdnum(std::string);
	void setPhonenum(std::string);
	void setAddress(std::string);
	void setBday(std::string);

	void Getdata();
	void Display();

};

#endif
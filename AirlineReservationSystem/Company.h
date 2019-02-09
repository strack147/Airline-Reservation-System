#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <string>

class Company {
protected:
	std::string compfname;
	std::string complname;
	std::string compnumber;
	std::string compaddress;
public:
	Company() {};
	Company(std::string compfname, std::string complname, std::string compnumber, std::string compaddress);

	std::string getCompfname();
	std::string getComplname();
	std::string getCompnumber();
	std::string getCompaddress();


	void setCompfname(std::string);
	void setComplname(std::string);
	void setCompnumber(std::string);
	void setCompaddress(std::string);

	void Getdata();
	void Display();

};

#endif
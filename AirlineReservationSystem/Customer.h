#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

class Customer {
protected:
	std::string cfname;
	std::string clname;
	std::string cnumber;
	std::string caddress;
public:
	Customer() {};
	Customer(std::string cfname, std::string clname, std::string cnumber, std::string caddress);

	std::string getCfname();
	std::string getClname();
	std::string getCnumber();
	std::string getCaddress();


	void setCfname(std::string);
	void setClname(std::string);
	void setCnumber(std::string);
	void setCaddress(std::string);

	void Getdata();
	void Display();

};

#endif
#ifndef TICKETS_H
#define TICKETS_H

#include <iostream>
#include <string>

class Tickets
{
protected:
	int code;
	int customerid;
	int excrouteid;
public:
	Tickets() {};
	Tickets(int code, int customerid, int excrouteid);

	int getCode();
	int getCustomerid();
	int getExcrouteid();

	void setCode(int);
	void setCustomerid(int);
	void setExcrouteid(int);

	void Getdata();
	void Display();

};

#endif
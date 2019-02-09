#ifndef ROUTEEXC_H
#define ROUTEEXC_H

#include <iostream>
#include <string>

class Routeexc
{
protected:
	std::string rcode;
	std::string date;
	int p1;
	int p2;
	int ar1;
	int ar2;
	int ar3;
	int ar4;
	std::string max;
public:
	Routeexc() {};
	Routeexc(std::string rcode, std::string date, int p1, int p2, int ar1, int ar2, int ar3, int ar4, std::string max);

	std::string getRcode();
	std::string getDate();
	int getP1();
	int getP2();
	int getAr1();
	int getAr2();
	int getAr3();
	int getAr4();
	std::string getMax();

	void setRcode(std::string);
	void setDate(std::string);
	void setP1(int);
	void setP2(int);
	void setAr1(int);
	void setAr2(int);
	void setAr3(int);
	void setAr4(int);
	void setMax(std::string);

	void Getdata();
	void Display();

};

#endif
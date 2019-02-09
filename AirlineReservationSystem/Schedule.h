#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <iostream>
#include <string>

class Schedule
{
protected:
	int sid;
	std::string rcode;
	std::string spoint;
	std::string epoint;
	std::string rday;
	std::string shour;
	std::string ehour;
	int ticketpric;
public:
	Schedule() {};
	Schedule(std::string rcode, std::string spoint, std::string epoint, std::string rday, std::string shour, std::string ehour, int ticketpric);

	std::string getRcode();
	std::string getSpoint();
	std::string getEpoint();
	std::string getRday();
	std::string getShour();
	std::string getEhour();
	int getTicketpric();

	void setRcode(std::string);
	void setSpoint(std::string);
	void setEpoint(std::string);
	void setRday(std::string);
	void setShour(std::string);
	void setEhour(std::string);
	void setTicketpric(int);

	void Getdata();
	void Display();

};

#endif
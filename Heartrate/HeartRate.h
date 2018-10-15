#pragma once
#include <iostream>
#include <string>
using namespace std;

class Heartrate
{
private:
	string firstname;
	string lastname;
	int month;
	int day;
	int year;
public:
	Heartrate(string, string, int, int, int);
	void setFirstName(string);
	string getFirstName();
	void setLastName(string);
	string getLastName();
	void setBirthDate(int, int, int);
	int getBirthDate();
	int getAge();
	int MaximumHeartRate();
	int TargetHeartRate50();
	int TargetHeartRate85();

};
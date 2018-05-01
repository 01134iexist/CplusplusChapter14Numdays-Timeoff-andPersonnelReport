#pragma once
#ifndef TIME_OFF
#define TIME_OFF
#include "NumDays.h"
#include <string>
using namespace std;

class TimeOff
{
private:
	NumDays maxSickDays;
	NumDays sickTaken;
	NumDays maxVacation;
	NumDays vacTaken;
	NumDays maxUnpaid;
	NumDays unpaidTaken;
	string employeeName;
	int employeeIDnumber;
	int monthsWorked;

public:
	//default constructor
	TimeOff() {
		maxSickDays = 0;
		sickTaken = 0;
		maxVacation = 0;
		vacTaken = 0;
		maxUnpaid = 0;
		employeeName = "";
		employeeIDnumber = 0;
		monthsWorked = 0;
	}
	//constructor
	TimeOff(string name, int id) {
		employeeName = name;
		employeeIDnumber = id;
	}
	//accessors
	NumDays getMaxSickDays() const {
		return maxSickDays;
	}
	NumDays getSickTaken() const {
		return sickTaken;
	}
	NumDays getMaxVacation() const {
		return maxVacation;
	}
	NumDays getVacTaken() const {
		return vacTaken;
	}
	NumDays getMaxUnpaid() const {
		return maxUnpaid;
	}
	string getEmployeeName() const {
		return employeeName;
	}
	int getEmployeeIDnumber() const {
		return employeeIDnumber;
	}
	int getMonthsWorked() const {
		return monthsWorked;
	}
	//mutators
	void setMaxSickDays(int m) {
		maxSickDays = m;
	}
	void setSickTaken(double s) {
		sickTaken =  s;
	}
	void setMaxVacation(int months) {
		int accumulatedHours = months * 12;
		if (accumulatedHours > 240)
			maxVacation = 240;
		else
			maxVacation = accumulatedHours;
	}
	void setVacTaken(double t) {
		vacTaken = t;
	}
	void setMaxUnpaid(double u) {
		maxUnpaid = u;
	}
	void setUnpaidTaken(double p) {
		unpaidTaken = p;
	}
	void setEmployeeName(string n) {
		employeeName = n;
	}
	void setEmployeeIDnumber(int id) {
		employeeIDnumber = id;
	}
	void setMonthsWorked(int m) {
		monthsWorked = m;
	}
};
#endif

#pragma once
#ifndef NUMDAYS
#define NUMDAYS
#include <string>
using namespace std;

class NumDays
{
private:
	double hours;
	double days;
public:
	//default constructor
	NumDays() {
		hours = 0;
		days = 0;
	}
	//constructor
	NumDays(double h) {
		hours = h;
	}
	//accessors
	double getHours()const {
		return hours;
	}
	double getDays() const {
		return days;
	}
	//mutators
	void setHours(double h) {
		hours = h;
	}
	void setDays() {
		days = hours / 8;
	}
	//overloaded operators
	NumDays operator + (const NumDays &);
	NumDays operator - (const NumDays &);
	NumDays operator ++ ();
	NumDays operator -- ();
	NumDays operator ++ (int);
	NumDays operator -- (int);

	//conversion function
	operator double();
};
#endif

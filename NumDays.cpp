#include "NumDays.h"
#include "cstdlib"

NumDays NumDays::operator + (const NumDays &right) {
	NumDays temp;
	temp.hours = hours + right.hours;
	return temp;
}

NumDays NumDays::operator - (const NumDays &right) {
	NumDays temp;
	temp.hours = hours - right.hours;
	return temp;
}

NumDays NumDays::operator ++ () {
	++hours;
	return *this;
}

NumDays NumDays::operator -- () {
	--hours;
	return *this;
}

NumDays NumDays::operator ++ (int) {
	NumDays temp(hours);
	hours++;
	return temp;
}

NumDays NumDays::operator -- (int) {
	NumDays temp(hours);
	hours--;
	return temp;
}

NumDays::operator double() {
	return hours;
}

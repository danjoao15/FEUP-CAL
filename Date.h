/*
 * Date.h
 *
 *  Created on: 06/04/2017
 *      Author: Daniela
 */

#ifndef DATE_H_
#define DATE_H_
#include <string>
#include <sstream>
using namespace std;

class Date {
	int day;
	int month;
	int year;

public:
	Date(int day, int month, int year);
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	string toDate();
};

#endif /* DATE_H_ */

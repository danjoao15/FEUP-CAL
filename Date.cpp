/*
 * Date.cpp
 *
 *  Created on: 06/04/2017
 *      Author: Daniela
 */

#include "Date.h"

Date::Date(int day, int month, int year) {
	this->day=day;
	this->month=month;
	this->year=year;

}

int Date::getDay(){
	return day;
}
int Date::getMonth(){
	return month;
}
int Date::getYear(){
	return year;
}

void Date::setDay(int day){
	this->day=day;
}
void Date::setMonth(int month){
	this->day=day;
}
void Date::setDay(int day){
	this->day=day;
}

Date::~Date() {
	// TODO Auto-generated destructor stub
}


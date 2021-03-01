/*
 * Flight.cpp
 *
 *  Created on: 28/03/2017
 *      Author: Daniela
 */

#include "Flight.h"

Flight::Flight(Local o, Local d, double flightPrice, int id, double duration, Data data){
	this->orig=o;
	this->dest=d;
	this->flightPrice=flightPrice;
	this->id=id;
	this->duration=duration;
	this->data=data;
}


Local Flight::getOrig(){
	return orig;
}

Local Flight::getDest(){
	return dest;
}

double Flight::getFlightPrice(){
	return flightPrice;
}

int Flight::getID(){
	return id;
}

double Flight::getDuration(){
	return duration;
}

Data Flight::getData(){
	return data;
}


void Flight::setOrig(Local orig){
	this->orig=orig;
}

void Flight::setDest(Local dest){
	this->dest=dest;
}

void Flight::setFlightPrice(double flightPrice){
	this->flightPrice=flightPrice;
}

void  Flight::setData(Data data) {
	this->data = data;
}

void  Flight::setDuration(double duration) {
	this->duration = duration;
}

void  Flight::setId(int id) {
	this->id = id;
}


Flight::~Flight() {
	// TODO Auto-generated destructor stub
}


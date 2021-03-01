/*
 * Flight.cpp
 *
 *  Created on: 28/03/2017
 *      Author: Daniela
 */

#include "Flight.h"

Flight::Flight(double distance, double flightPrice) {
	this->distance=distance;
	this->flightPrice=flightPrice;

}

double Flight::getDistance(){
	return distance;
}
double Flight::getFlightPrice(){
	return flightPrice;
}

void Flight::setDistance(double distance){
	this->distance=distance;
}

void Flight::setFlightPrice(double flightPrice){
	this->flightPrice=flightPrice;
}
Flight::~Flight() {
	// TODO Auto-generated destructor stub
}


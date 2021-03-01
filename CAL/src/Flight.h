/*
 * Flight.h
 *
 *  Created on: 28/03/2017
 *      Author: Daniela
 */

#ifndef FLIGHT_H_
#define FLIGHT_H_

class Flight {
	double distance;
	double flightPrice;

public:
	Flight(double distance, double flightPrice);
	double getDistance();
	double getFlightPrice();
	void setDistance(double distance);
	void setFlightPrice(double flightPrice);
	virtual ~Flight();
};

#endif /* FLIGHT_H_ */

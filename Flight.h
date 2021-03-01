/*
 * Flight.h
 *
 *  Created on: 28/03/2017
 *      Author: Daniela
 */

#ifndef FLIGHT_H_
#define FLIGHT_H_

#include "Data.h"
#include "Local.h"

class Flight {
	double flightPrice;
	int id;
	double duration;
	Data data;
	Local orig;
	Local dest;

public:
	Flight(Local orig, Local dest, double flightPrice, int id, double duration, Data data);
	Local getOrig();
	Local getDest();
	double getFlightPrice();
	int getID();
	double getDuration();
	Data getData();

	void setOrig(Local orig);
	void setDest(Local dest);
	void setFlightPrice(double flightPrice);
	void setId(int id);
	void setDuration(double duration);
	void setData(Data data);

	virtual ~Flight();


};

#endif /* FLIGHT_H_ */

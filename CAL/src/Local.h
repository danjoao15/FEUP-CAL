/*
 * Local.h
 *
 *  Created on: 28/03/2017
 *      Author: Daniela
 */

#ifndef LOCAL_H_
#define LOCAL_H_

#include <string>
#include <iostream>
using namespace std;

class Local {

	string name;
	double price;

public:
	Local(string name, double price);
	virtual ~Local();
	string getName();
	double getPrice();
	void setName(string name);
	void setPrice(double price);
};

#endif /* LOCAL_H_ */

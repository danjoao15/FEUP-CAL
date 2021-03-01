/*
 * Local.cpp
 *
 *  Created on: 28/03/2017
 *      Author: Daniela
 */

#include "Local.h"

Local::Local(string name, double price) {
	this->name=name;
	this->price=price;

}


string Local::getName(){
	return name;
}

double Local::getPrice(){
	return price;
}

void Local::setName(string name){
	this->name=name;
}

void Local::setPrice(double price){
	this->price=price;
}
Local::~Local() {
	// TODO Auto-generated destructor stub
}



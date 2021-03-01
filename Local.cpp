/*
 * Local.cpp
 *
 *  Created on: 28/03/2017
 *      Author: Daniela
 */

#include "Local.h"

Local::Local(int id,string name, double price) {
	this->id=id;
	this->name=name;
	this->price=price;

}
int Local::getId(){
	return id;
}

string Local::getName(){
	return name;
}

double Local::getPrice(){
	return price;
}
void Local::setId(int id){
	this->id=id;
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



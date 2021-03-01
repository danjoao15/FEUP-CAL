/*
 * Client.cpp
 *
 *  Created on: 06/04/2017
 *      Author: Daniela
 */

#include "Client.h"

Client::Client(int id, string name, unsigned int phone ) {
	this->id=id;
	this->name=name;
	this->phone=phone;

}

int Client::getId(){
	return id;
}

string Client::getName(){
	return name;
}

unsigned long Client::getPhone(){
	return phone;
}

void Client::setId(int id){
	this->id=id;
}
void Client::setName(string name){
	this->name=name;
}
void Client::setPhone(unsigned long phone){
	this->phone=phone;
}
Client::~Client() {
	// TODO Auto-generated destructor stub
}


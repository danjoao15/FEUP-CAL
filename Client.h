/*
 * Client.h
 *
 *  Created on: 06/04/2017
 *      Author: Daniela
 */
#include <string>

using namespace std;
class Client {
	int id;
	string name;
	unsigned long phone;

public:
	Client(int id, string name, unsigned int phone);
	int getId();
	string getName();
	unsigned long getPhone();
	void setId(int id);
	void setName(string name);
	void setPhone(unsigned long phone);
};



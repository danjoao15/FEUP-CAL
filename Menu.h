/*
 * Menu.h
 *
 *  Created on: 06/04/2017
 *      Author: Daniela
 */

#ifndef SRC_MENU_H_
#define SRC_MENU_H_


#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

#include "Client.h"
using namespace std;

class Menu {
	vector<Client*> clients;
public:
 void initialMenu();
};

#endif /* MENU_H_ */

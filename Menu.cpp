/*
 * Menu.cpp

 *
 *  Created on: 06/04/2017
 *      Author: Daniela
 */

#include "Menu.h"
#include <cstdlib>        // std::abort

void Menu:: initialMenu(){

	int option;
		cout << "*********************************" << endl;
		cout << "* WELCOME TO OUR TRAVEL AGENCY  *" << endl;
		cout << "*********************************" << endl;

		cout << setw(5) << " " << "1. New Client" << endl;
		cout << setw(5) << " " << "2. Search Client" << endl;
		cout << setw(5) << " " << "3. Clients List" << endl;
		cout << setw(5) << " " << "4. Destinies List" << endl;
		cout << setw(5) << " " << "5. New Travel" << endl;
		cout << setw(5) << " " << "6. Exit" << endl;

		cout << "Choose your option: ";
		cin >> option;

		if (option > 6 || option < 1) {
				cout << "Invalid option!" << endl;
				initialMenu();
				if (option == 1) {
					//menuNovoCliente();
				} else if (option == 2) {
					//menuProcuraClientes();
				} else if (option == 3) {
					//menuListaClientes();
				} else if (option == 4) {
					//menuListaDestinos();
				} else if (option == 5) {
					//menuNovaViagem();
				} else if (option == 6) {

					exit(0);
				}
}
}

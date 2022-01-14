#include "menu.h"
#include <conio.h>

void menu::makeOrder() {
	// TODO - implement menu::makeOrder
	throw "Not yet implemented";
}

bool menu::login() {
	return true;

	// TODO - implement menu::login
	throw "Not yet implemented";
}

menu::menu() {

	int inm = 1;

		while (true) {
			std::cout << "System obslugi magazynu" << std::endl;
			std::cout << "Logowanie" << (inm == 1 ? " <<\n" : "\n");
			std::cout << "Rejestracja nowego u¿ytkownika" << (inm == 2 ? " <<\n" : "\n");
			std::cout << "Wyjscie z programu" << (inm == 3 ? " <<\n" : "\n");

			char c = _getch();

			if (c == 's' || c == 'S') {
				inm++;
				if (inm == 4)inm = 1;
			}
			else if (c == 'w' || c == 'W') {
				inm--;
				if (inm == 0)inm = 3;
			}
			else if (c == 13) {
				switch (inm) {
				case 1:
					system("cls");
					return;
					break;
				case 2:
					break;
				case 3:
					exit(0);
					break;
				}
			}

			system("cls");
		}


}

void menu::mloop(int inmopt) {
	
	std::cout << "Uzytkownik zalogowany poprawnie\n";
	std::cout << "Prosze wybrac opcje\n";

	std::cout << "Zloz zamowienie" << (inmopt == 1 ? " <<\n" : "\n");
	std::cout << "Wykonaj zamowienie" << (inmopt == 2 ? " <<\n" : "\n");
	std::cout << "Wykonaj dostawe" << (inmopt == 3 ? " <<\n" : "\n");
	std::cout << "Zmiana danych uzytkownika" << (inmopt == 4 ? " <<\n" : "\n");
	std::cout << "Zarzadzanie magazynem" << (inmopt == 5 ? " <<\n" : "\n");
	std::cout << "zakoncz dzialanie programu" << (inmopt == 6 ? " <<\n" : "\n");

	char c = _getch();
	std::cout << int(c);

	if (c == 's' || c == 'S') {
		inmopt++;
		if (inmopt == 7)inmopt = 1;
	}
	else if(c == 'w' || c == 'W'){
		inmopt--; 
		if (inmopt == 0)inmopt = 6;
	}
	else if (c == 13) {
		switch (inmopt) {
		case 1:
			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			break;

		case 5:
			break;

		case 6:
			exit(0);
			break;
		}

		inmopt = 1;
	}

	system("cls");

		return mloop(inmopt);
}

void menu::takeOrder() {
	// TODO - implement menu::takeOrder
	throw "Not yet implemented";
}

void menu::registerUser() {



	// TODO - implement menu::registerUser
	throw "Not yet implemented";
}

void menu::makeDelivery() {
	// TODO - implement menu::makeDelivery
	throw "Not yet implemented";
}

void menu::changeUserData() {
	// TODO - implement menu::changeUserData
	throw "Not yet implemented";
}

void menu::warhouseMenage() {
	// TODO - implement menu::warhouseMenage
	throw "Not yet implemented";
}

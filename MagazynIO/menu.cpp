#include "menu.h"

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

	//this->userloggedin = nullptr;
	
}

void menu::begmloop(int inmopt) {

	std::cout << "System obslugi magazynu" << std::endl;
	std::cout << "Logowanie" << (inmopt == 1 ? " <<\n" : "\n");
	std::cout << "Rejestracja nowego usytkownika" << (inmopt == 2 ? " <<\n" : "\n");
	std::cout << "Wyjscie z programu" << (inmopt == 3 ? " <<\n" : "\n");

	char c = _getch();

	if (c == 's' || c == 'S' || c == 80) {
		inmopt++;
		if (inmopt == 4)inmopt = 1;
	}
	else if (c == 'w' || c == 'W' || c == 72) {
		inmopt--;
		if (inmopt == 0)inmopt = 3;
	}
	else if (c == 13) {
		switch (inmopt) {
		case 1:
			system("cls");
			return;
			break;
		case 2:
			system("cls");
			return registerUser();
			break;
		case 3:
			exit(0);
			break;
		}
	}

	system("cls");

	return begmloop(inmopt);
}

void menu::mloop(int inmopt) {
	
	std::cout << "Uzytkownik zalogowany poprawnie\n";
	std::cout << "Prosze wybrac opcje\n";

	std::cout << "Zloz zamowienie" << (inmopt == 1 ? " <<\n" : "\n");
	std::cout << "Wykonaj zamowienie" << (inmopt == 2 ? " <<\n" : "\n");
	std::cout << "Wykonaj dostawe" << (inmopt == 3 ? " <<\n" : "\n");
	std::cout << "Zmiana danych uzytkownika" << (inmopt == 4 ? " <<\n" : "\n");
	std::cout << "Zarzadzanie magazynem" << (inmopt == 5 ? " <<\n" : "\n");
	std::cout << "Zakoncz dzialanie programu" << (inmopt == 6 ? " <<\n" : "\n");

	char c = _getch();
	//std::cout << int(c);

	//Sleep(1000);

	if (c == 's' || c == 'S'|| c == 80) {
		inmopt++;
		if (inmopt == 7)inmopt = 1;
	}
	else if(c == 'w' || c == 'W' || c == 72){
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

	std::cout << "Rejestracja uzytkownika" << std::endl;
	
	std::cout << "Wpisz Imie: ";
		std::string im;
		std::cin >> im;

	std::cout << "Wpisz Nazwisko: ";
		std::string na;
		std::cin >> na;

	std::cout << "Podaj adres: ";
		std::string ad;
		std::cin >> ad;

	std::cout << "Podaj numer telefonu: ";
		int tel;
		std::cin >> tel;

	std::cout << "Podaj pesel: ";
		int pes;
		std::cin >> pes;

		bool endloop = true;
		while (true) {
			endloop = true;
			std::cout << "Wpisz nazwe uzytkownika: ";
			std::string un;
			std::cin >> un;

			for(int i=0;i<userstab.size();i++)
				if (userstab[i].getUsername() == un) {
					std::cout << "Nazwa uzytkownika jest juz zajeta\n";
					endloop = false;
				}
			if (endloop) {
				std::cout << "Wpisz haslo: ";
				std::string pas = "";
				char c; 
				while ((c = _getch()) != 13)
					pas += c;

				userstab.push_back(user(im,na,ad,tel,pes,"user", un, pas));
				system("cls");
				std::cout << "Konto utworzenoe pomyslnie\n";
				return;
			}
		}

	
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

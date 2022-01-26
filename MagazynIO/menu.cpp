#include "headers/menu.h"

void menu::makeOrder() {
	// TODO - implement menu::makeOrder
	throw "Not yet implemented";
}

bool menu::login() {

	std::string l, p = "";
	char c;

		std::cout << "Logowanie uzytkownika\n";
		std::cout << "Podaj login: ";

		std::cin >> l;

		std::cout << "Podaj haslo: ";

		while ((c = _getch()) != 13)
			p += c;

		for(int i = 0;i<userstab.size();i++)
			if(userstab[i].findLogin(l))
				if (userstab[i].checkPassword(p)) {
					userloggedin = userstab[i].u_self();
					system("cls");
					return true;
				}

		system("cls");
		std::cout << "Nieprawidlowy login/haslo";

	return false;

}

menu::menu() {

	file.open(fname, std::ios::in);

	std::string s[8];

	while (file >> s[0]) {
		for (int i = 1; i < 8; i++)file >> s[i];

		userstab.push_back(user(s[0], s[1], s[2], std::stoi(s[3]), std::stoi(s[4]), s[5], s[6], s[7]));
	}
	
	file.close();
}

menu::~menu() {
	

	file.open(fname, std::ios::out);

	for (int i = 0; i < userstab.size(); i++) {
		file << userstab[i].getName()<<std::endl;
		file << userstab[i].getLastName() <<std::endl;
		file << userstab[i].getAddres() <<std::endl;
		file << userstab[i].getPhone() <<std::endl;
		file << userstab[i].getSSN() <<std::endl;
		file << userstab[i].checkPermissions() <<std::endl;
		file << userstab[i].getUsername() << std::endl;
		file << userstab[i].getPassword() <<std::endl;
	}

	file.close();

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
			changeUserData();
			break;

		case 5:
			break;

		case 6:
			this->~menu();
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

void menu::registerUser(std::string perm) {

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

				userstab.push_back(user(im,na,ad,tel,pes,perm, un, pas));
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
	if (userloggedin->checkPermissions() == "employee") {
		system("cls");
		std::cout << "Odmowa dostepu\n";
		_getch();
	}
	else if (userloggedin->checkPermissions() == "user") {
		system("cls");
		std::cout << "Wpisz nowe haslo: ";
		std::string s = "";
		char c;
		while ((c = _getch()) != 13)
			s += c;
		userloggedin->changeData(s, userloggedin->getPhone(), userloggedin->getAddres(), userloggedin->getLastName(), userloggedin->getName());
	}
	else if (userloggedin->checkPermissions() == "admin") {
		system("cls");
		char c;
		std::cout << "Wcisnij n aby stworzyc nowego uzytkownika z aby zarzadzac obecnymi";
		while (((c = _getch()) != 'n') && (c != 'z'));
		if (c == 'n') {
			system("cls");
			std::cout << "podaj uprawniwnienia uzytkownika: ";
			std::string s = "";
			char c2;
			while ((c2 = _getch()) != 13)
			s += c2;
			registerUser(s);
		}
		else {
			char c2=0;
			int wh=0;
			do {
				system("cls");
				if (c2 == 'w')wh--;
				if (c2 == 's')wh++;
				if (wh < 0)wh = userstab.size() - 1;
				if (wh > userstab.size() - 1)wh = 0;
				for (int i = 0; i < userstab.size(); i++)
				{
					std::cout << userstab[i].getName() << " " << userstab[i].getLastName() << " "
						<< userstab[i].getAddres() << " " << userstab[i].getPhone() << " "
						<< userstab[i].getSSN() << " " << userstab[i].checkPermissions() << " "
						<< userstab[i].getPassword() << " " << userstab[i].getUsername() << " "
						<< (wh == i ? " <<\n" : "\n");
				}
			} while ((c2=_getch())!=13);

			std::cout << "Zmiana danych uzytkownika uzytkownika" << std::endl;

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
			
					std::cout << "Wpisz haslo: ";
					std::string pas = "";
					char c;
					while ((c = _getch()) != 13)
						pas += c;

					userstab[wh].changeData(pas,tel,ad,na,im);
					system("cls");
					std::cout << "pomyslna zmiana danych\n";
					return;


		}
	}
}

void menu::warhouseMenage() {
	// TODO - implement menu::warhouseMenage
	throw "Not yet implemented";
}

#ifndef MENU_H
#define MENU_H

#include "user.h"
#include <conio.h>
#include <Windows.h>
#include <vector>

class menu {

private:
	user* userloggedin = nullptr;

	std::vector<user> userstab;

public:
	void makeOrder();

	bool login();

	menu();

	void begmloop(int inmopt = 1);

	void mloop(int inmopt = 1);

	void takeOrder();

	void registerUser();

	void makeDelivery();

	void changeUserData();

	void warhouseMenage();
};

#endif

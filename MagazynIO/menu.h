#ifndef MENU_H
#define MENU_H

#include "user.h"

class menu {

private:
	user* userloggedin = nullptr;

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

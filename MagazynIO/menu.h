#ifndef MENU_H
#define MENU_H

#include "user.h"

class menu {

private:
	user* userloggedin;

public:
	void makeOrder();

	bool login();

	menu();

	void mloop(int inmopt = 1);

	void takeOrder();

	void registerUser();

	void makeDelivery();

	void changeUserData();

	void warhouseMenage();
};

#endif
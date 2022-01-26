#ifndef MENU_H
#define MENU_H

#include "user.h"
#include <conio.h>
#include <Windows.h>
#include <vector>
#include <fstream>
#include <string>

class menu {

private:
	user* userloggedin = nullptr;

	std::vector<user> userstab;

	std::fstream file;
	std::string fname = "u_data";

public:
	void makeOrder();

	bool login();

	menu();

	~menu();

	void begmloop(int inmopt = 1);

	void mloop(int inmopt = 1);

	void takeOrder();

	void registerUser(std::string perm = "user");

	void makeDelivery();

	void changeUserData();

	void warhouseMenage();
};

#endif

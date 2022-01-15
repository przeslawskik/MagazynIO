#ifndef USER_H
#define USER_H

#include <iostream>

class user {

private:
	std::string name;
	std::string last_name;
	std::string address;
	int phone_number;
	int social_security_number;
	std::string permissions;
	//std::string login;
	std::string password;
	int userID;
	std::string username;

public:
	std::string getName();

	int getPhone();

	std::string checkPermissions();

	user(std::string n, std::string ln, std::string adr, int phn, int ssn, std::string per, std::string log, std::string pass);

	bool findLogin(std::string login);

	bool checkPassword(std::string pass);

	void changeData(std::string password, int phonenr, std::string addres, std::string lastname, std::string name);

	int getID();

	std::string getUsername();

	user* u_self();
};

#endif

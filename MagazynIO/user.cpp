#include "user.h"
#include <iostream>

std::string user::getName() {
	return this->name;
}

int user::getPhone() {
	// TODO - implement user::getPhone
	throw "Not yet implemented";
}

std::string user::checkPermissions() {
	// TODO - implement user::checkPermissions
	throw "Not yet implemented";
}

user::user(std::string n, std::string ln, std::string adr, int phn, int ssn, std::string per, std::string log, std::string pass)
	:name(n),last_name(ln),address(adr),phone_number(phn),
	social_security_number(ssn),permissions(per),
	password(pass),username(log)
{}

bool user::findLogin(std::string login) {
	if (login == this->username)return true;
	return false;
}

bool user::checkPassword(std::string pass) {
	if (pass == this->password)return true;
	return false;
}

void user::changeData(std::string password, int phonenr, std::string addres, std::string lastname, std::string name) {
	// TODO - implement user::changeData
	throw "Not yet implemented";
}

int user::getID() {
	// TODO - implement user::getID
	throw "Not yet implemented";
}

std::string user::getUsername() {
	return this->username;
}


user* user::u_self() {
	return this;
};

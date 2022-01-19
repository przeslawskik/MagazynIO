#include "user.h"
#include <iostream>

std::string user::getName() {
	return this->name;
}

int user::getPhone() {
	return this->phone_number;
}

int user::getSSN() {
	return this->social_security_number;
}

std::string user::getAddres() {
	return this->address;
}

std::string user::getPassword() {
	return this->password;
}

std::string user::getLastName() {
	return this->last_name;
}

std::string user::checkPermissions() {
	return this->permissions;
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
	 this->password = password;
	 this->phone_number = phonenr;
	 this->address = addres;
	 this->last_name = lastname;
	 this->name = name;
}

int user::getID() {
	return this->userID;
}

std::string user::getUsername() {
	return this->username;
}


user* user::u_self() {
	return this;
};

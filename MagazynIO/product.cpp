#include "product.h"
#include <iostream>

product::product(std::string nam, int coun, std::string spec, std::string desc, float size) 
	:productName(nam), count(coun), specification(spec), description(desc), productSize(size)
{}


void product::changeCount(int val) {
	this->count = val;
}

float product::getAreaOfProduct() {
	return ((this->count) * (this->productSize));
}

std::string product::getProductInfo(std::string nam, int coun, std::string spec, std::string desc, float size, int ID) {
	std::cout << "Nazwa: " << this->productName << std::endl;
	std::cout << "Ilosc: " << this->count << std::endl;
	std::cout << "Specyfikacja: " << this->specification << std::endl;
	std::cout << "Opis: " << this->description << std::endl;
	std::cout << "Wielkosc: " << this->productSize << std::endl;
	std::cout << "Przestrzen w magazynie: " << getAreaOfProduct << std::endl;
	std::cout << "ID produktu: " << this->productID << std::endl;
}

int product::getID(int ID) {
	return this->productID;
}

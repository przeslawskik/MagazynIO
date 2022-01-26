#include "product.h"
#include <iostream>

product::product(std::string nam, int coun, std::string spec, std::string desc, float size) 
	:productName(nam), count(coun), specification(spec), description(desc), productSize(size)
{}

void product::changeCount(int val) {
	this->count = val;
}

float product::getAreaOfProduct() {

	return this->productSize * this->count;
}

std::string product::getProductInfo() {
	std::string s = "";
	s += this->productName+" ";
	s += this->count+" ";
	s += this->specification+" ";
	s += this->description;
	return s;
}

int product::getCount() {
	return this->count;
}

int product::getID(int ID) {
	return this->productID;
}

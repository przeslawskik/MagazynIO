#include "product.h"
#include <iostream>

product::product(std::string nam, int coun, std::string spec, std::string desc, float size, int ID) 
	:productName(nam), count(coun), specification(spec), description(desc), productSize(size), productID(ID)
{}

void product::changeCount(int val) {
	this->count += val;
}

float product::getAreaOfProduct() {

	return (this->productSize * this->count);
}

std::string product::getProductInfo() {
	std::string s = "";
	s += this->productName+" ";
	s += this->count+" ";
	s += this->specification+" ";
	s += this->description;
	return s;
}

std::string product::getName() {
	return this->productName;
}

int product::getCount() {
	return this->count;
}

std::string product::getSpec() {
	return this->specification;
}

std::string product::getDesc() {
	return this->description;
}

float product::getSize() {
	return this->productSize;
}

int product::getID() {
	return this->productID;
}

product* product::product_self() {
	return this;
}

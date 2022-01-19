#include "product.h"
#include <iostream>

product::product(std::string nam, int coun, std::string spec, std::string desc,float siz) 
	:productName(nam), count(coun), specification(spec),description(desc),productSize(siz)
{}

void product::changeCount(int val) {
	// TODO - implement product::changeCount
	throw "Not yet implemented";
}

float product::getAreaOfProduct() {
	// TODO - implement product::getAreaOfProduct
	throw "Not yet implemented";
}

std::string product::getProductInfo() {
	// TODO - implement product::getProductInfo
	throw "Not yet implemented";
}


int product::getCount() {
	return this->count;
};

int product::getID() {
	// TODO - implement product::getID
	throw "Not yet implemented";
}

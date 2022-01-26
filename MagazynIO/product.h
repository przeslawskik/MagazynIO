#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class product {

private:
	std::string productName;
	int count;
	std::string specification;
	std::string description;
	float productSize;
	int productID;

public:
	product(std::string nam, int coun, std::string spec, std::string desc, float size);

	void changeCount(int val);

	int getCount();
  
	float getAreaOfProduct();

	std::string getProductInfo();

	int getID();

};

#endif

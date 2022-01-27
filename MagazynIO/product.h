#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

class product {

private:
	std::string productName;
	int count;
	std::string specification;
	std::string description;
	float productSize;
	int productID;

public:
	product(std::string nam, int coun, std::string spec, std::string desc, float size, int ID);

	void changeCount(int val);

	std::string getName();

	int getCount();

	std::string getSpec();

	std::string getDesc();

	float getSize();
  
	float getAreaOfProduct();

	std::string getProductInfo();

	int getID();

	product* product_self();
};

#endif

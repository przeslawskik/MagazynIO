#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class product {

private:
	std::string product_name;
	int count;
	std::string specification;
	std::string description;
	float product_size;
	int product_id;
	int in_order[];

public:
	void Product(std::string nam, int coun, std::string spec, std::string desc);

	//void ~Product();

	void changeCount(int val);

	/**
	 * returning product_size*count
	 */
	float getAreaOfProduct();

	std::string getProductInfo();

	int getID();
};

#endif

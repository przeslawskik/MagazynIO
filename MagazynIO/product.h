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
	int inOrder[];

public:
	product(std::string nam, int coun, std::string spec, std::string desc, float siz){};

	//void ~Product();

	void changeCount(int val);

	int getCount() {};

	/**
	 * returning productSize*count
	 */
	float getAreaOfProduct();

	std::string getProductInfo();

	int getID();
};

#endif

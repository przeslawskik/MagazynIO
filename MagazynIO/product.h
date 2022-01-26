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
	product(std::string nam, int coun, std::string spec, std::string desc, float size);

	~product();

	void changeCount(int val);

	float getAreaOfProduct();

	std::string getProductInfo(std::string nam, int coun, std::string spec, std::string desc, float size, int ID);

	int getID(int ID);
};

#endif
#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "product.h"
#include "Order.h"
#include <vector>
#include <fstream>

class warehouse {

	friend class menu;

private:
	float warehouse_space;
	std::vector<product> products;
	std::vector<Order> orders;

	std::fstream file;
	std::string fwarname = "war_data";


public:
	warehouse();

	~warehouse();

	void changeSpace(float sp);

	bool ifFull();

	void showAllProducts();

	void stocktaking();

	void deliveryService(int pID, int count);

};

#endif

#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "product.h"
#include "Order.h"
#include <vector>

class warehouse {

private:
	float warehouse_space;
	std::vector<product> products;
	std::vector<Order> orders;


public:
	void changeSpace(float sp);

	bool ifFull();

	void showAllProducts();

	void stocktaking();

	void deliveryService(int pID, int count);

};

#endif

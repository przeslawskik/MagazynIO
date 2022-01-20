#ifndef ORDER_H
#define ORDER_H

#include "user.h"
#include "product.h"
#include <vector>

class Order {

private:
	int orderID;

	std::vector<user> whoordered;
	std::vector<std::vector<product>> items;

	//redundant variable - int count - deleted: "class product" has member "int count"

public:
	Order(std::vector<user> customers, std::vector<std::vector<product>> ordered_items);

	int getOrderID();

	void setOrderID(int id);
};

#endif

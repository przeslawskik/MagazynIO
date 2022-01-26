#ifndef ORDER_H
#define ORDER_H

#include "user.h"
#include "product.h"
#include <vector>

class Order {

private:
	int orderID;
	user* whoordered;
	std::vector<product*> items;
	std::vector<int> count;

public:
	Order(user* whoordered, std::vector<product*> it, std::vector<int> counts);

	int getID(int orderID);
};

#endif

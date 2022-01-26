#ifndef ORDER_H
#define ORDER_H

#include "user.h"
#include "product.h"

class Order {

private:
	int orderID;
	user* whoordered;
	product** items;
	int* cout;

public:
	Order(user* whoordered, product** items, int* cout);

	int getID(int orderID);
};

#endif

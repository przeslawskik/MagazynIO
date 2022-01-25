#include "Order.h"

Order::Order(user* whoordered, product** items, int* cout)
	:whoordered(whoordered), items(items), cout(cout)
{}

int Order::getID(int orderID) {
	return this->orderID;
}

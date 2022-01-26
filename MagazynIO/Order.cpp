#include "Order.h"

Order::Order(user* whoordered, std::vector<product*> it, std::vector<int> counts)
	:whoordered(whoordered),items(it),count(counts)
{}

int Order::getID(int orderID) {
	return this->orderID;
}

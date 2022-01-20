#include "headers/Order.h"

Order::Order(std::vector<user> customers, std::vector<std::vector<product>> ordered_items) {
	whoordered = customers;
	items = ordered_items;
}

int Order::getID() {
	return orderID;
}

void Order::setOrderID(int id){
	orderID = id;
}
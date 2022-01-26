#include "warehouse.h"

void warehouse::changeSpace(float sp) {
	this->warehouse_space += sp;
}

bool warehouse::ifFull() {
	float zajeta_przestrzen=0;
	for (int i = 0; i < products.size(); i++)	//tutaj chyba tworzenie pliku z produktami by siê przyda³o mieæ
	{
		zajeta_przestrzen += products[i].getAreaOfProduct();
	}
	if (zajeta_przestrzen < warehouse_space) return false;
	return true;
}

void warehouse::showAllProducts() {
	for (int i = 0; i < products.size(); i++) //tutaj chyba tworzenie pliku z produktami by siê przyda³o mieæ
	{
		std::cout << products[i].getProductInfo();
	}
}

void warehouse::stocktaking() {
	// TODO - implement warehouse::stocktaking
	throw "Not yet implemented";
}

void warehouse::deliveryService() {
	// TODO - implement warehouse::deliveryService
	throw "Not yet implemented";
}

bool warehouse::OrderSeq(int productsID[], int productsCnt[], int userID) {
	// TODO - implement warehouse::OrderSeq
	throw "Not yet implemented";
}

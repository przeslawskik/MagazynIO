#include "/headers/warehouse.h"

void warehouse::changeSpace(float sp) {
	warehouse_space  = sp;
}

bool warehouse::ifFull() {
	float product_surface =0.0f;

	for(product i : products){
		product_surface += i.getAreaOfProduct();
	}

	if(product_surface >= warehouse_space){
		return true;
	}
	else return false;
}

std::vector<product> warehouse::showAllProducts() {
	return products;
}

void warehouse::stockTaking() {
	// TODO - implement warehouse::stockTaking
	throw "Not yet implemented";
}

void warehouse::deliveryService() {
	
	std::cout<< "Zamówienie przejęte przez kuriera.\n";	
}

bool warehouse::OrderSeq(int productsID[], int productsCnt[], int user_id) {
	// TODO - implement warehouse::OrderSeq
	throw "Not yet implemented";
}

#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <product.h>
#include <vector>

class warehouse {

private:
	float warehouse_space;

	std::vector<product> products_tab;
	std::fstream file;
	std::string fname = "products_data";

public:
	void changeSpace(float sp);

	bool ifFull();

	void showAllProducts();

	void stocktaking();

	void deliveryService();

	bool OrderSeq(int productsID[], int productsCnt[], int userID);
};

#endif

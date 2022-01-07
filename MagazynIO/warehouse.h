#ifndef WAREHOUSE_H
#define WAREHOUSE_H

class warehouse {

private:
	float warehouse_space;

public:
	void changeSpace(float sp);

	bool ifFull();

	void showAllProducts();

	void stocktaking();

	void deliveryService();

	bool OrderSeq(int productsID[], int productsCnt[], int userID);
};

#endif

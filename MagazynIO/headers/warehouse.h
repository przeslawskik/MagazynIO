#ifndef WAREHOUSE_H
#define WAREHOUSE_H

class warehouse {

private:
	float warehouse_space;

public:

	//Not yet implemented
	void changeSpace(float sp);

	bool ifFull();

	void showAllProducts();

	void stockTaking();

	void deliveryService();

	bool OrderSeq(int prdctsID[], int prdctsCnt[], int usrID);
};

#endif

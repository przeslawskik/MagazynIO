#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include "product.h"
#include <vector>

class warehouse {

private:
	float warehouse_space;

	std::vector<product> products;

public:

	//Not yet implemented
	void changeSpace(float sp);

	bool ifFull();

	//uzywamy std::vector zeby latwiej je bylo zliczac, sortowac itd.
	std::vector<product> showAllProducts();
 
	void stockTaking();
	//tej funckji nie ma w zadnym diagramie

	void deliveryService();

	bool OrderSeq(int prdctsID[], int prdctsCnt[], int usrID);
};

#endif

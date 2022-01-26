#include "warehouse.h"
#include "product.h"
#include <iostream>
#include <conio.h>

void warehouse::changeSpace(float sp) {
	this->warehouse_space += sp;
}

bool warehouse::ifFull() {
	float zajeta_przestrzen=0;
	for (int i = 0; i < products_tab.size(); i++)
	{
		zajeta_przestrzen += products_tab[i].getAreaOfProduct();
	}
	if (zajeta_przestrzen < warehouse_space) return false;
	return true;
}

void warehouse::showAllProducts() {
	for (int i = 0; i < products_tab.size(); i++)
		products_tab[i].getProductInfo();
	
}

void warehouse::stocktaking() {
	for (size_t i = 0; i < products_tab.size(); i++)
	{
		products_tab[i].getProductInfo();
		std::cout << "Czy chcesz zmienic ilosc danego produktu?" << std::endl << "y - tak, n - nie" << std::endl;
		char odp = getch();

		if (odp == 'y' || odp == 'Y' || odp == 89 || odp == 121 ) {
			int l = 0;
			std::cout << "Wprowadz nowa ilosc produktu: ";
			std::cin >> l;
			products_tab[i].changeCount(l);
			system("cls");
		}
		else if (odp == 'n' || odp == 'N' || odp == 78 || odp == 110 ) {
			system("cls");
		}
		else
		{
			system("cls");
			break;
		}
	}
}

void warehouse::deliveryService() {
	// TODO - implement warehouse::deliveryService
	throw "Not yet implemented";
}

bool warehouse::OrderSeq(int productsID[], int productsCnt[], int userID) {
	// TODO - implement warehouse::OrderSeq
	throw "Not yet implemented";
}

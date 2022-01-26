#include "warehouse.h"
#include <conio.h>

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
	for (size_t i = 0; i < products.size(); i++)
	{
		products[i].getProductInfo();
		std::cout << "Czy chcesz zmienic ilosc danego produktu?" << std::endl << "y - tak, n - nie" << std::endl;
		char odp = _getch();

		if (odp == 'y' || odp == 'Y' || odp == 89 || odp == 121) {
			int l = 0;
			std:: cout << "Wprowadz nowa ilosc produktu: ";
			std::cin >> l;
			products[i].changeCount(l);
			system("cls");
		}
		else if (odp == 'n' || odp == 'N' || odp == 78 || odp == 110) {
			system("cls");
		}
		else
		{
			system("cls");
			break;
		}
	}
}

void warehouse::deliveryService(int pID, int count) {
	for (int i = 0; i < products.size(); i++)
		if (products[i].getID() == pID)
				products[i].changeCount(count);
}


#include "warehouse.h"
#include "product.h"
#include <conio.h>

warehouse::warehouse() {

	file.open(fwarname, std::ios::in);

	std::string s[6];

	while (file >> s[0]) {
		for (int i = 1; i < 6; i++)file >> s[i];

		products.push_back(product(s[0], s[1], s[2], s[3], s[4], s[5] ));
	}

	file.close();
}

warehouse::~warehouse() {


	file.open(fwarname, std::ios::out);

	for (int i = 0; i < products.size(); i++) {
		file << products[i].getName() << std::endl;
		file << products[i].getCount() << std::endl;
		file << products[i].getSpec() << std::endl;
		file << products[i].getDesc() << std::endl;
		file << products[i].getSize() << std::endl;
		file << products[i].getID() << std::endl;
	}

	file.close();

}

void warehouse::changeSpace(float sp) {
	this->warehouse_space += sp;
}

bool warehouse::ifFull() {
	float zajeta_przestrzen=0;
	for (int i = 0; i < products.size(); i++)	
	{
		zajeta_przestrzen += products[i].getAreaOfProduct();
	}
	if (zajeta_przestrzen < warehouse_space) return false;
	return true;
}

void warehouse::showAllProducts() {
	for (int i = 0; i < products.size(); i++) 
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
			std:: cout << "Wprowadz zmiane ilosci produktu: ";
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


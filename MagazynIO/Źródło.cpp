#include <iostream>

#include "menu.h"

int main() {

	menu* m = new menu();

	while (!m->login());

		m->mloop();

		return 0;
}
#include <iostream>

#include "/headers/menu.h"

int main() {

	menu* m = new menu();

	while (!m->login());

		m->mloop();

		return 0;
}
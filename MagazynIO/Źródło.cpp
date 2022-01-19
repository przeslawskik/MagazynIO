#include <iostream>

#include "menu.h"

int main() {

	menu* m = new menu();

	m->begmloop();

	while (!m->login());

	m->mloop();

	return 0;
}
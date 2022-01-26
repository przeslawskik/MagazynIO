#include <iostream>

#include "headers/menu.h"

int main() {

	menu* m = new menu();

	m->begmloop();

	while (!m->login());

	m->mloop();

	return 0;
}
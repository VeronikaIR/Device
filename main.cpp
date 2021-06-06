#include "Inventory.h"
#include "Laptop.h"
#include <iostream>

int main()
{
	Laptop l1("HP", 3000);
	Laptop l2("Lenovo", 4000);
	Car c1("Toyota", 1000, 6000);
	Car c2("BMW", 2000, 7000);

	Inventory inventory;
	inventory.add(&c1);
	inventory.add(&c2);
	inventory.add(&l1);
	inventory.add(&l2);

	inventory.print();
	std::cout << std::boolalpha << inventory.isAscendingOrder() << std::endl;

	return 0;
}



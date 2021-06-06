#include "Inventory.h"

#include <iostream>

void Inventory::add(Device* device) {
	if (inventory_.size() < 100) {
		inventory_.push_back(device->clone());
	}
	else {
		std::cout << "There is no space!" << std::endl;
	}
}

void Inventory::print() const
{
	for (size_t i = 0; i < inventory_.size(); ++i)
	{
		inventory_[i]->print();
	}
	std::cout << std::endl;
}

bool Inventory::isAscendingOrder() {

	for (int i = 0; i < inventory_.size() - 1; ++i) {
		if (inventory_[i]->get_perf() > inventory_[i + 1]->get_perf()) {
			return false;
		}
	}
	return true;
}

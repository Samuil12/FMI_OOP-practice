#pragma once
#include "Chocolate.h"
class Milk: virtual public Chocolate<int>{
public:
	Milk();
	bool validId(int id) override;
};


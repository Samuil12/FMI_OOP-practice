#pragma once
#include "Milk.h"
#include "Raisins.h"
#include <iostream>
#include <string>

class MilkWithRaisins: public Milk, public Raisins<long>{
public:
	MilkWithRaisins();
	//bool validId(long id) override; //later
};


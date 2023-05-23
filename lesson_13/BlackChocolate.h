#pragma once
#include <iostream>
#include <string>
#include "Chocolate.h"
class BlackChocolate:virtual public Chocolate<std::string>{
public:
	BlackChocolate();
	bool validId(std::string id) override;
};


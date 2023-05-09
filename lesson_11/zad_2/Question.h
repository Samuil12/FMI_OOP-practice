#pragma once
#include <iostream>
#include <string>
class Question{
public:
	virtual void ask() = 0;
	virtual double grade() = 0;
};


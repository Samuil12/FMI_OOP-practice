#pragma once
#include "Person.h"
class Worker: public Person
{
	static size_t ID;
	size_t workerID;
	double salary;

public:
	void buyTicket(Screening* screening) override;
};


#pragma once
#include <string>
#include "Cinema.h"
class Person{
	Cinema* cinema;
	std::string namesOfThePerson;
	std::string dateOfBirthOfThePerson;
public:
	void printReservations();
	virtual void buyTicket(Screening* screening) = 0;
	virtual ~Person()=default;
};


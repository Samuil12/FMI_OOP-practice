#pragma once
#include <vector>
#include "Person.h"
#include "Film.h"
#include "Room.h"

class Screening{
	std::vector <Person*> people;
	Film* film;
	Room* room;
public:
	double getPrice() const;
	void print() const;
	void makeReservation(const Person* person);
};


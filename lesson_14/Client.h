#pragma once
#include "Person.h"
#include "Reservation.h"
class Client: public Person{
	std::vector<Reservation> reservations;
	double moneyAvailable;
public:
	void buyTicket(Screening* screening) override;
	void addMoney(double money);
};


#pragma once
#include <vector>
#include "Client.h"
#include "Worker.h"
#include "Film.h"
#include "Timetable.h"
#include "Screening.h"
#include "Timetable.h"
#include "Room.h"

class Cinema{
	std::vector<Room> rooms;
	double balancdOfTheCinema;
	std::vector<Client> clients;
	std::vector<Worker> workers;
	std::vector<Film> films;
	Timetable timetable;

public:
	void addFilm(size_t workerID, Film film);
	void addScreening(size_t workerID, Screening screening);
	void addClient(Client client);
	void addWorker(Worker worker);
	void changeBalance(double money);
};


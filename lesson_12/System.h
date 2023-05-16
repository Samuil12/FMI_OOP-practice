#pragma once
#include "UserData.h"
#include "premiumUsers.h"
class System{
	std::vector<UserData> users;
	std::vector<premiumUsers> premiumUsers;
public:
	void doesExist(std::string name, std::string);
	void addUser(std::string name, std::string password);
	void addPremiumUser(std::string name, std::string password, std::string premiumPlan);
};


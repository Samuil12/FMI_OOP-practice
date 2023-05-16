#pragma 
#include "UserData.h"
#include <vector>

class premiumUsers: public UserData{
	std::string premiumPlan;
	std::vector<std::string> paymentDates;
public:
	premiumUsers(std::string name, std::string password);
};


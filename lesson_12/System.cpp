#include "System.h"

void System::doesExist(std::string name, std::string password)
{
	for (int i = 0; i < premiumUsers.size(); ++i) {
		if (premiumUsers[i].getName() == name && premiumUsers[i].getEncodedPassword() == Hash(password)) {
			std::cout << "User exists" << std::endl;
			return;
		}
	}
	for (int i = 0; i < users.size(); i++) {
		if (users[i].getName() == name && users[i].getEncodedPassword()==Hash(password)) {
		   std::cout<<"User exists"<<std::endl;
		   return;
	   }
   }

	std::cout<<"User does not exist"<<std::endl;
}

void System::addUser(std::string name, std::string password){
	UserData user(name, password);
	users.push_back(user);
}

//void System::addPremiumUser(std::string name, std::string password, std::string premiumPlan){
//	premiumUsers user(name, password);
//	premiumUsers.push_back(user);
//}





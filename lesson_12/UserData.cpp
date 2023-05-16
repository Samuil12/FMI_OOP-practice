#include "UserData.h"

int UserData::idCounter = 0;

void UserData::setEncodedPassword(){
	std::string notEncoded;
	std::cout << "Enter password: ";
	std::cin >> notEncoded;
	std::string encoded;
	for (int i = 0; i < notEncoded.length(); i++) {
		encoded += notEncoded[i] + 1;
	}
	password = encoded;

}
std::string Hash(std::string usedPassword) {
	std::string encoded;
	for (int i = 0; i < usedPassword.length(); i++) {
		encoded += usedPassword[i] + 1;
	}
	return encoded;
}
void UserData::setPassword(std::string usedPassword) {
	password = Hash(usedPassword);
}

UserData::UserData(std::string name, std::string usedPassword){
	idCounter++;
	this->id = idCounter;
	this->name=name;
	setPassword(usedPassword);

}

int UserData::getId() {
	return id;
}

std::string UserData::getName() {
	return name;
}

std::string UserData::getEncodedPassword() {
	return password;
}

bool UserData::comparePasswords(std::string password1, std::string password2)
{
	if (password1 == password2) {
		return true;
	}
	return false;
}




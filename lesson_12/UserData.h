#pragma once
#include <iostream>
#include <string>

class UserData{
	static int idCounter;
	int id;
	std::string name;
	std::string password;

public:
	void setEncodedPassword();
	void setPassword(std::string usedPassword);
	UserData(std::string name, std::string password);
	int getId();
	std::string getName();
	std::string getEncodedPassword();
	static bool comparePasswords(std::string password1, std::string password2);
};

std::string Hash(std::string usedPassword);
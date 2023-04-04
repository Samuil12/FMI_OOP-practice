#include <iostream>
#include <fstream>
#include <cstring>
#include "user.h"
#pragma warning (disable:4996)


void User::setUserName(char* name){
	if (this->name != nullptr) {
		delete[]this->name;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	else {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
}

void User::setUserPassword(char* password){
	if (name != nullptr) {
		delete[]this->name;
		this->name = new char[strlen(password) + 1];
		strcpy(this->name, name);
	}
	else {
		this->name = new char[strlen(password) + 1];
		strcpy(this->name, password);
	}
}

char* User::getUserName()
{
	return nullptr;
}

char* User::getUserPassword()
{
	return nullptr;
}

User::User(){
	this->name = nullptr;
	this->password = nullptr;
}

User::~User(){
	delete[] this->name;
	delete[] this->password;
}

User::User(User& const other){
	int size = strlen(other.name)+1;
	this->name = new char[size];
	strcpy(this->name, other.name);

	size = strlen(other.password) + 1;
	this->password = new char[size];
	strcpy(this->password, other.password);
}
User& User::operator=(User& const other) {
	this->name = new char[strlen(other.name) + 1];
	strcpy(this->name, other.name);
	this->password = new char[strlen(other.password) + 1];
	strcpy(this->password, other.password);
	return *this;

}

User& User::operator=(User&& other) {
	if (this != &other) {
		this->name = other.name;
		this->password = other.password;
		other.name = nullptr;
		other.password = nullptr;
	}
	return *this;
}

User::User(User&& other){
	this->name = other.name;
	this->password = other.password;
	other.name = nullptr;
	other.password = nullptr;
}

void User::writeToFile(){
	std::ofstream file("users.txt",std::ios::binary, std::ios::app);
	if (!file.is_open()) {
		if (this->name != nullptr || this->password != nullptr) {
			file << this->name << " " << this->password << std::endl;
		}
	}
	file.close();
}

void User::readFromFile(char* nameNewUser)
{
	bool flag = false;
	User oldUser;
	std::ifstream file("users.txt", std::ios::binary);
	while (!file.eof()) {
		file.read((char*)&oldUser, sizeof(User));
		if (strcmp(oldUser.name, nameNewUser)==0) {
			std::cout << "This user already exists!" << std::endl;
			flag = true;
			break;
		}
	}
	if (!flag) {
		writeToFile();
	}
}

int main() {
	User user1;
	user1.writeToFile();
}

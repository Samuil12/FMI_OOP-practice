#include <chrono>
#include <format>
#include <iostream>
#include "Header.hpp"


int ID = 0;

Inventory::Inventory() {
	salty = 0;
	sweet = 0;
	drinks = 0;
}



int main()
{
	std::cout << "Hello World!\n";
}

void Inventory::changeSalty(int quantity){
	this->salty = quantity;
}

void Inventory::changeSweets(int quantity){
	this->sweet = quantity;
}

void Inventory::changeDrinks(int quantity){
	this->drinks = quantity;
}

void Inventory::print(){
	std::cout << "salty= " << salty << "; sweet= " << sweet << "; drinks= " << drinks;
}
int MAX_SIZE = 64;
int MAX_SIZE_WARNINGS = 32;
VendingMachine::VendingMachine(){
	id = ID++;
	address = new char[MAX_SIZE];
	inventory = Inventory();
	warningMessages = new char* [MAX_SIZE_WARNINGS];
	numWarningMsgs = 0;
	capacity = 0;
	
}

VendingMachine::VendingMachine(char* address, Inventory inventory){
	id = ID++;
	this->address = address;
	this->inventory = inventory;
	warningMessages = new char* [MAX_SIZE_WARNINGS];
	numWarningMsgs = 0;
	capacity = 0;
}

VendingMachine::VendingMachine(VendingMachine const& other){
	this->id = ID++;
	this->address = new char[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; ++i) {
		this->address[i] = other.address[i];
	}
	this->inventory = other.inventory;
	this->warningMessages = new char* [MAX_SIZE_WARNINGS];
	for (int i = 0; i < MAX_SIZE_WARNINGS; ++i) {
		char* Message = new char[MAX_SIZE];
		warningMessages[i] = Message;
		for (int j = 0; j < MAX_SIZE; ++j) {
			warningMessages[i][j] = other.warningMessages[i][j];
		}
	}

}

VendingMachine::VendingMachine(VendingMachine&& other) {
	this->address = other.address;
	//more to do
	
}

VendingMachine& VendingMachine::operator=(VendingMachine const& other){
	this->id = ID++;
	this->address = other.address;
	//more ot do
}


VendingMachine::~VendingMachine() {
	delete[] address;
	delete[] warningMessages;
}

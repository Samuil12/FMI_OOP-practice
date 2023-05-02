#include "Managers.h"
#include <iostream>
#include <string>
#include "Employe.h"

void Managers::copyFrom(const Managers& other){
	this->name = other.name;
	this->internship = other.internship;
	this->salary = other.salary;
	this->numnerOfOwndSlaves = other.numnerOfOwndSlaves;
	this->sizeOfArraySlaves = other.sizeOfArraySlaves;
	this->slaves = new Employe* [other.sizeOfArraySlaves];
	for (int i = 0; i < this->numnerOfOwndSlaves; i++) {
		this->slaves[i] = other.slaves[i];
	}
}

void Managers::free() {
	delete[] this->slaves;
}

void Managers::move(Managers&& other) {
	this->name = other.name;
	this->internship = other.internship;
	this->salary = other.salary;
	this->numnerOfOwndSlaves = other.numnerOfOwndSlaves;
	this->sizeOfArraySlaves = other.sizeOfArraySlaves;
	this->slaves = other.slaves;
	other.slaves = nullptr;
}

Managers::Managers() {
	this->name = "";
	this->internship = 0;
	this->salary = 0;
	this->numnerOfOwndSlaves = 0;
	this->sizeOfArraySlaves = 0;
	this->slaves = nullptr;
}

Managers::Managers(std::string name, int internship, int salary, int numnerOfOwndSlaves) {
	this->name = name;
	this->internship = internship;
	this->salary = salary;
	this->numnerOfOwndSlaves = numnerOfOwndSlaves;
	this->sizeOfArraySlaves = numnerOfOwndSlaves;
	this->slaves = new Employe* [numnerOfOwndSlaves];
}

Managers::~Managers() {
	free();
}

Managers::Managers(const Managers& other) {
	copyFrom(other);
}

Managers& Managers::operator=(const Managers& other) {
	if (this != &other) {
		free();
		copyFrom(other);
	}
	return *this;
}

Managers::Managers(Managers&& other) {
	move(std::move(other));
}

Managers& Managers::operator=(Managers&& other) {
	if (this != &other) {
		free();
		move(std::move(other));
	}
	return *this;
}

void Managers::resizeSlaves() {
	Employe** temp = new Employe*[this->sizeOfArraySlaves * 2];
	for (int i = 0; i < this->numnerOfOwndSlaves; i++) {
		temp[i] = this->slaves[i];
	}
	delete[] this->slaves;
	this->slaves = temp;
	this->sizeOfArraySlaves *= 2;
}

void Managers::addSlave(Employe* slave) {
	if (this->numnerOfOwndSlaves == this->sizeOfArraySlaves) {
		resizeSlaves();
	}
	this->slaves[this->numnerOfOwndSlaves] = slave;
	this->numnerOfOwndSlaves++;
}

//void Managers::removeSlave(Employe* slave) {
//	int index = -1;
//	for (int i = 0; i < this->numnerOfOwndSlaves; i++) {
//		if (this->slaves[i].getName() == slave->getName()) {
//			index = i;
//			break;
//		}
//	}
//	if (index == -1) {
//		std::cout << "No such slave!" << std::endl;
//		return;
//	}
//	for (int i = index; i < this->numnerOfOwndSlaves - 1; i++) {
//		this->slaves[i] = this->slaves[i + 1];
//	}
//	this->numnerOfOwndSlaves--;
//}

void Managers::removeSlave(Employe* slave) {
	for (int i = 0; i < this->numnerOfOwndSlaves; i++) {
		if (&this->slaves[i] == &slave) {
			for (int j = i; j < this->numnerOfOwndSlaves - 1; j++) {
				this->slaves[j] = this->slaves[j + 1];
			}
			this->numnerOfOwndSlaves--;
			return;
			
		}
	}
}

void Managers::setSalary(int salary){
	this->salary = salary;
}

void Managers::setName(std::string name) {
	this->name = name;
}

void Managers::setNumnerOfOwndSlaves(int numnerOfOwndSlaves) {
	this->numnerOfOwndSlaves = numnerOfOwndSlaves;
}

Employe* Managers::getSlaves() const{
	return *this->slaves;
}

int Managers::getSizeOfArraySlaves() const
{
	return numnerOfOwndSlaves;
}

void Managers::annual_raise(){
	if (numnerOfOwndSlaves <= 10) {
		salary *= 1.06;
	}
	else if (numnerOfOwndSlaves <= 15) {
		salary *= 1.12;
	}
	else {
		salary *= 1.15;
	}
}

void Managers::setInternship(int internship) {
	this->internship = internship;
}

int Managers::getSalary() const {
	return this->salary;
}

std::string Managers::getName() const {
	return this->name;
}

int Managers::getNumnerOfOwndSlaves() const {
	return this->numnerOfOwndSlaves;
}

int Managers::getInternship() const {
	return this->internship;
}

void Managers::printSlave()  const {
	for (int i = 0; i < this->numnerOfOwndSlaves; i++) {
		std::cout<< this->slaves[i]->name << std::endl;
		(*this->slaves[i]).printSlaves();

	}
}







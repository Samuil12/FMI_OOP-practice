#pragma once

#include <iostream>
#include <string>
#include "Employe.h"

class Managers:public Employe{
	std::string name;
	int internship;
	int salary;
	int numnerOfOwndSlaves;
	Employe* slaves;
	int sizeOfArraySlaves;
public:
	void copyFrom(const Managers& other);
	void free();
	void move(Managers&& other);

	Managers();
	Managers(std::string name, int internship, int salary, int numnerOfOwndSlaves);
	~Managers();

	Managers(const Managers& other);
	Managers& operator=(const Managers& other);

	Managers(Managers&& other);
	Managers& operator=(Managers&& other);

	void resizeSlaves();

	void addSlave(Employe* slave);
	void removeSlave(Employe* slave);
	void setSalary(int salary);
	void setInternship(int internship);
	void setName(std::string name);
	int getSalary() const;
	int getInternship() const;
	std::string getName() const;
	int getNumnerOfOwndSlaves() const;
	void setNumnerOfOwndSlaves(int numnerOfOwndSlaves);
	void printSlave() const;
	Employe* getSlaves() const;
	int getSizeOfArraySlaves() const;

	void annual_raise();
};



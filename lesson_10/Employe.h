#pragma once
#include <iostream>
#include <string>
#include "project.h"

class Employe {
public:
	std::string name;
	int internship;
	int salary;

	int sizeOfArrayProjects;
	int numberOfProjects;
	Project** projects;

	void copyFrom(const Employe& other);
	void free();
	void move(Employe&& other);

	Employe();
	Employe(std::string name, int internship, int salary);
	~Employe();
	Employe(const Employe& other);
	Employe& operator=(const Employe& other);
	Employe(Employe&& other);
	Employe& operator=(Employe&& other);

	void resize();
	void addProject(Project* project);
	//void removeProject(Project* project);


	virtual void annual_raise() = 0;
	virtual void printSlaves()=0;
};
#include "Employe.h"
#include "Project.h"
#include <iostream>

void Employe::copyFrom(const Employe& other){
	this->name = other.name;
	this->internship = other.internship;
	this->salary = other.salary;
	this->sizeOfArrayProjects = other.sizeOfArrayProjects;
	this->numberOfProjects = other.numberOfProjects;
	this->projects = new Project*[other.sizeOfArrayProjects];
	for (int i = 0; i < this->numberOfProjects; i++) {
		this->projects[i] = other.projects[i];
	}
}

void Employe::free() {
	delete[] this->projects;
}

void Employe::move(Employe&& other) {
	this->name = other.name;
	this->internship = other.internship;
	this->salary = other.salary;
	this->sizeOfArrayProjects = other.sizeOfArrayProjects;
	this->numberOfProjects = other.numberOfProjects;
	this->projects = other.projects;
	other.projects = nullptr;
}

Employe::Employe(){
	this->name = "";
	this->internship = 0;
	this->salary = 0;
	this->sizeOfArrayProjects = 1;
	this->numberOfProjects = 0;
	this->projects = new Project*[this->sizeOfArrayProjects];
}

Employe::Employe(std::string name, int internship, int salary) {
	this->name = name;
	this->internship = internship;
	this->salary = salary;
	this->sizeOfArrayProjects = 1;
	this->numberOfProjects = 0;
	this->projects = new Project*[this->sizeOfArrayProjects];
}

Employe::~Employe() {
	free();
}

Employe::Employe(const Employe& other) {
	copyFrom(other);
}

Employe& Employe::operator=(const Employe& other) {
	if (this != &other) {
		free();
		copyFrom(other);
	}
	return *this;
}

Employe::Employe(Employe&& other) {
	move(std::move(other));
}

Employe& Employe::operator=(Employe&& other) {
	if (this != &other) {
		free();
		move(std::move(other));
	}
	return *this;
}

void Employe::addProject(Project* project) {
	if (this->numberOfProjects == this->sizeOfArrayProjects) {
		resize();
	}
	this->projects[this->numberOfProjects] = project;
	this->numberOfProjects++;
}

void Employe::resize() {
	this->sizeOfArrayProjects *= 2;
	Project** temp = new Project*[this->sizeOfArrayProjects];
	for (int i = 0; i < this->numberOfProjects; i++) {
		temp[i] = this->projects[i];
	}
	delete[] this->projects;
	this->projects = temp;
}


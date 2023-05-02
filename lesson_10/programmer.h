#pragma once
#include "Employe.h"
#include "project.h"
class programmer: public Employe{
	Project** projects;
	int sizeOfArrayProjects;
	int  numberOfProjects;
};


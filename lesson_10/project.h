#pragma once
#include <iostream>
#include <string>
//#include "Employe.h"
class Project{
public:
	std::string projectName;
	unsigned short complexity;
	Project(std::string projectName="", unsigned short int complexity=1);
};


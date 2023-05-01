#include "project.h"

Project::Project(std::string projectName="", unsigned short int complexity=1) {
	this->projectName = projectName;
	this->complexity = complexity;
}
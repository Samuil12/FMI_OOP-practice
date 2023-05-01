#include "QA.h"


void QA::annual_raise(){
	if (this->numberOfProjects == 1) {
		this->salary=this->salary*1.05;
	}
	else if (this->numberOfProjects == 2||this->numberOfProjects==3) {
		this->salary=this->salary*1.1;
	}
	else (this->numberOfProjects > 3) {
		this->salary=this->salary*1.15;
	}

	int allComplexity = 0;
	for (int i = 0; i < this->numberOfProjects; i++) {
		allComplexity += this->projects[i]->complexity;
	}
	int averageComplexity = allComplexity / this->numberOfProjects;

	if (averageComplexity <= 4) {
		salary= salary * 1.06;
	}
	else if (averageComplexity <= 7) {
		this->salary=this->salary*1.12;
	}
	else {
		this->salary=this->salary*1.15;
	}
}

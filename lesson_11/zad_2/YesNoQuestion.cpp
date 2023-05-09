#include "YesNoQuestion.h"

void YesNoQuestion::ask(){
	std::cout << question;
	char p[1];
	std::cin.getline(p,1);
	if (p[0] == 'y') {
		answer = true;
	}
	else {
		answer = false;
	}
}

double YesNoQuestion::grade()
{
	if (answer == correctAnswer) {
		return points;
	}
	return 0;
}

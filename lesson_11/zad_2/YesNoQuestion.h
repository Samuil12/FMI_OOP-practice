#pragma once
#include "Question.h"
class YesNoQuestion: public Question{
private:
	std::string question;
	bool answer;
	bool correctAnswer;
	double points;
public:
	void ask() override;
	double grade() override;
};


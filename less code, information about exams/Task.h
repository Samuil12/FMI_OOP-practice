#pragma once
#include <string>
class Task{
	std::string description;
	double duration;
	unsigned int size;
	double progress;
	bool isFinished;
public:
	virtual int work(int time);
	void Print(std::ofstream&=std::cout);

};


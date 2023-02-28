#include <iostream>
#include "Header.h"


Time::Time() {
	this->hour = 0;
	this->minutes = 0;
	this->seconds = 0;



}
const int MAX_LENGTH = 100;
struct Event {
	char title[MAX_LENGTH];
	char organizer[MAX_LENGTH];
	Time start_time;
	Time end_time;

	bool is_valid() const {
		return start_time.hour > end_time.hour;
	}

};

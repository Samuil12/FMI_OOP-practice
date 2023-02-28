#ifndef HEADER_H
#define HEADER_H

class Time {
public://hahaha class, now you are public
	int hour;
	int minutes;
	int seconds;
	Time();
	Time get_diff(const Time other) const;
	void set_hour();
	void set_minute();
	void set_second();
	
	void get_hour();
	void get_minute();
	void get_second();

};



#endif



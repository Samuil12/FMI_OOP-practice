#pragma once
#include <iostream>

class String {
	char* str;
	void sizeFit(char* str);
public:	
	String(const char* s = "");
	String(const String& s);
	String& operator=(const char* ch);
	String& operator=(const String& other);
	~String();
	String(String&& other);
	char operator[](int index);
	String operator+(const char*);
	String operator+(String& other);
	//no iidea how to do that String + const char * 
	String& operator+=(String& other);
	String& operator+=(const char* str);
	bool operator==(const String& s1)const;
};

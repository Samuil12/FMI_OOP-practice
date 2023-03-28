#include <iostream>
#include "Header.h"
#include <cstring>
#pragma disable warning(4996)
#define _CRT_SECURE_NO_WARNINGS


//constructor	
String::String(const char* s) {
	this->str = new char[strlen(s) + 1];
	strcpy(this->str, s);
}

//copy constructor
String::String(const String& s) {
	str = new char[strlen(s.str) + 1];
	strcpy(str, s.str);
}
//operator= with char*
String& String::operator=(const char* ch) {
	delete[] this->str;
	this->str = new char[strlen(ch) + 1];
	strcpy(this->str, ch);
	return *this;
}


//operator=
String& String::operator=(const String& other) {
	if (this != &other) {
		delete[] str;
		str = new char[strlen(other.str) + 1];
		strcpy(str, other.str);
	}
	return *this;
}
//destructor
String::~String() {
	delete[] str;
}
//move constructor
String::String(String&& other) {
	str = other.str;
	other.str = nullptr;
}
char String::operator[](int index) {
	return this->str[index];
}

String String::operator+(const char* ch)
{
	int size = strlen(this->str);
	char* temp = new char[size + 1];
	strcpy(temp, this->str);
	strcat(temp, ch);
	String result(temp);
	delete[] temp;
	return result;
}

String String::operator+(String& other)
{
	int size = strlen(this->str) + strlen(other.str);
	char* temp = new char[size + 1];
	strcpy(temp, this->str);
	strcat(temp, other.str);
	String result(temp);
	delete[] temp;
	return result;
}

String& String::operator+=(String& other) {
	char* temp = new char[strlen(this->str) + strlen(other.str) + 1];
	strcpy(temp, this->str);
	strcat(temp, other.str);
	delete[] this->str;
	this->str = temp;
	return *this;
}

String& String::operator+=(const char* string) {
	char* temp = new char[strlen(this->str) + strlen(string) + 1];
	strcpy(temp, this->str);
	strcat(temp, string);
	delete[] this->str;
	this->str = temp;
	return *this;
}
//operator==
bool String::operator==(const String& s1) const{
	return strcmp(this->str, s1.str) == 0;
}





int main()
{
    std::cout << "Hello World!\n";
}
#include <iostream>
#include <cstring>
#include "Header.h"


Set::Set(int* elements, int numElements, int capacity){
	this->elements = elements;
	this->numElements = numElements;
	this->capacity = sizeof(elements)*2;
}
void Set::resize() {
	this->capacity = capacity * 2;
	int* newCapaciy = new int[capacity];
	for (int i = 0; i < this->numElements; ++i) {
		newCapaciy[i] = elements[i];
	}
	delete[] elements;
	elements= newCapaciy;
}
int Set::searchInSet(int const& element) {
	for (int i = 0; i < numElements; i++) {
		if (element == elements[i])
			return i;
	}
	return -1;
}
bool Set::addElement(const int element) {
	if (searchInSet(element)>=0)
		return false;
	if (numElements == capacity) {
		resize();
		elements[capacity / 2 + 1] = element;//we made capacity twice the number of elements
		//so by deviding by 2 and adding 1 we go to the next "empty" space
		++numElements;
		return true;
	}
	else {
		elements[numElements++] = element;
	}
}

/*bool deleteElement(const int element) - ��� ��������� ��������� � �����������, 
�� ������� � ����� ������, � �������� ������ �� ����� ���� � ����� ����
*/
bool Set::deleteElement(int const element) {
	if (searchInSet(element) < 0) {
		return false;
	}
	else {
		for (int i = searchInSet(element); i < numElements; ++i) {
			elements[i] = elements[i + 1];
		}
		numElements--;
	}
}

/*�������� ������ �������� �� �����������*/
void Set::print() {
	for (int i = 0; i < numElements; ++i) {
		std::cout << elements[i]<<" ";
	}

}

/*�������� ���������� �������� ��������� � other ���� ������� ���������� � �������� ���������*/
void Set::setUnion(const Set& other) {
	for (int i = 0; i < other.numElements; ++i) {
		addElement(other.elements[i]);
	}
}

int main()
{
    std::cout << "Hello World!\n";

}


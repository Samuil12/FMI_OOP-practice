#include "Sorted.h"
#include <iostream>

template <typename T>
void Sorted<T>::freeDynamicMemory() {
	delete[] this->array;
}

template<typename T>
void Sorted<T>::copy(Sorted<T>& other){
	array = new T[size];
	for (int i = 0; i < size; i++) {
		array[i] = other.array[i];
	}
}

template <typename T>
void Sorted<T>::move(Sorted&& other) {
	array = other.array;
	size = other.size;
	other.array = nullptr;
	other.size = 0;
}

template <typename T>
Sorted<T>::Sorted(T* array, int size) {
	this->array = array;
	this->size = size;
}

template <typename T>
Sorted<T>::~Sorted() {
	freeDynamicMemory();
}

template <typename T>
Sorted<T>::Sorted(const Sorted& other) {
	copy(other);
}

template <typename T>
Sorted<T>& Sorted<T>::operator=(const Sorted<T>& other) {
	if (this != &other) {
		freeDynamicMemory();
		copy(other);
	}
	return *this;
}

template<typename T> 
Sorted<T>::Sorted(Sorted<T>&& other) {
	move(std::move(other));
}

template<typename T>
Sorted<T>& Sorted<T>::operator=(Sorted<T>&& other){
	if (!this == &other) {
		freeDynamicMemory();
		move(std::move(other));
	}
}

template<typename T>
void Sorted<T>::add(T value){
	T* temp = new T[size + 1];
	for (int i = 0; i < size; i++) {
		temp[i] = array[i];
	}
	temp[size] = value;
	delete[] array;
	array = temp;
	size++;
	sort();
}

template<typename T>
int Sorted<T>::search(Sorted& other){
	for (int i = 0; i < this->size; ++i) {
		if (this == &other) {
			return i;
		}
	}
	return -1;
}

template<typename T>
void Sorted<T>::remove(T& value){
	if (size == 0) {
		return;
	}
	int index = search(value);
	if (index == -1) {
		return;
	}
	T* temp = new T[size - 1];
	for (int i = 0; i < index; i++) {
		temp[i] = array[i];
	}
	for (int i = index; i < size - 1; i++) {
		temp[i] = array[i + 1];
	}
	delete[] array;
	array = temp;
	size--;
}

template<typename T>
void Sorted<T>::print(){
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void Sorted<T>::sort() {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (array[i] > array[j]) {
				T temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}



int main() {
	int size = 5;
	int* array = new int[size] {5,3,2,1,4};
	Sorted<int> sorted1(array, size);
	sorted1.sort();
	sorted1.print();
}

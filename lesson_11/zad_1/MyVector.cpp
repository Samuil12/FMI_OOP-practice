#include "MyVector.h"
#include <iostream>
//
//template <typename T>
//MyVector<T>::MyVector()
//{
//	data = new T[capacity];
//}
//
//template<typename T>
//MyVector<T>::MyVector(int capacity){
//    this->capacity = capacity;
//	data = new T[capacity];
//}
//
//template<typename T>
//MyVector<T>::MyVector(const MyVector& other) {
//	this->capacity = other.capacity;
//	this->size = other.size;
//	this->data = new T[capacity];
//	for (int i = 0; i < size; i++) {
//		data[i] = other.data[i];
//	}
//}
//
//template<typename T>
//MyVector<T>::MyVector(MyVector&& other) {
//	this->capacity = other.capacity;
//	this->size = other.size;
//	this->data = other.data;
//	other.data = nullptr;
//}
//
//template<typename T>
//MyVector<T>::~MyVector() {
//	delete[] data;
//}
//
//template<typename T>
//MyVector<T>& MyVector<T>::operator=(const MyVector& other) {
//	if (this != &other) {
//		delete[] data;
//		this->capacity = other.capacity;
//		this->size = other.size;
//		this->data = new T[capacity];
//		for (int i = 0; i < size; i++) {
//			data[i] = other.data[i];
//		}
//	}
//	return *this;
//}
//
//template<typename T>
//MyVector<T>& MyVector<T>::operator=(MyVector&& other) {
//	if (this != &other) {
//		delete[] data;
//		this->capacity = other.capacity;
//		this->size = other.size;
//		this->data = other.data;
//		other.data = nullptr;
//	}
//	return *this;
//}
//
//template<typename T>
//int MyVector<T>::get_size() const {
//	return size;
//}
//
//template<typename T>
//int MyVector<T>::get_capacity() const {
//	return capacity;
//}
//
//template<typename T>
//T& MyVector<T>::operator[](int index) {
//	return data[index];
//}
//
//template<typename T>
//const T& MyVector<T>::operator[](int index) const {
//	return data[index];
//}
//
//template<typename T>
//void MyVector<T>::print() const {
//	for (int i = 0; i < size; i++) {
//		std::cout << data[i] << " ";
//	}
//	std::cout << std::endl;
//}
//
//template<typename T>
//void MyVector<T>::resize(){
//	capacity=capacity*2;
//	T* otherData= new T[capacity];
//	for (int i = 0; i < size; i++) {
//		otherData[i] = data[i];
//	}
//	this->data = otherData;
//}
//
//template<typename T>
//void MyVector<T>::addElement(T element){
//	if (size == capacity) {
//		resize();
//	}
//	
//	data[size] = element;
//	size++;
//}
//
//
//


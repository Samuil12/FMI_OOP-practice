#pragma once
template <typename T>
class Sorted{
	public:
	T * array;
	int size;
	void freeDynamicMemory();
	void copy(Sorted<T>& other);
	void move(Sorted<T>&& other);
	Sorted(T *array, int size);
	~Sorted();

	Sorted(const Sorted<T> &other);
	Sorted& operator=(const Sorted<T> &other);

	Sorted (Sorted<T> &&other);
	Sorted<T>& operator=(Sorted<T> &&other);

	void add(T value);
	int search(Sorted& other);
	void remove(T& value);
	void print();
	void sort();
};


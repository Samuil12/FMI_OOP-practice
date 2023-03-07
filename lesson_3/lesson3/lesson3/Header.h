#pragma once
class Set {
    int* elements;

    int numElements;
    int capacity;

    void resize();

public:
    Set(int* elements, int numElements, int capacity);
    Set(Set const& other);
    Set& operator= (Set const& other);
    ~Set();

    bool addElement(int const element);
    bool deleteElement(int const element);
    void setUnion(Set const& other);
    void setIntersection(Set const& other);
    void print();
	int searchInSet(int const& element); // I added this function to search for an element in the set
};
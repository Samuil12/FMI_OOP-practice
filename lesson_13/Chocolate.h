#pragma once
template <typename T>
class Chocolate{
protected:
	T id;
	int numberOfProcutInStock;
public:
	Chocolate()=default;
	Chocolate(T id);
	virtual bool validId(T id) = 0;
};

template<typename T>
inline Chocolate<T>::Chocolate(T id){
	this->id = id;
}

#pragma once
#include "Chocolate.h"
template <typename T>
class Raisins:virtual public Chocolate<T>{
public:
	Raisins(int percentage=20);
	double percentageOfRaisins;
};

template<typename T>
inline Raisins<T>::Raisins(int percentage) {
};

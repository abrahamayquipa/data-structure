#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__
#include <cstdlib>//stdlib.h
#include <ctime>//time.h
#include <iostream>
template <class X>

class Array {
	X* arr;
	X* tmp;
	size_t idx;//indicador del ultimo elemento insertado
	size_t n;

public:
	Array(int n = 10, size_t id = -1) {
		this->n = n;
		arr = new X[n];
		idx = id; // es vacio
		tmp = nullptr;
	}

	//define
	bool push_back(X e);
	X getElement();
};

//implementa
template <class X>
bool Array<X>::push_back(X e) {
	if (idx + 1 < n) {
		arr[++idx] = e;
		return true;
	}
	else return false;
}

template <class X>
X Array<X>::getElement() {
	return arr[rand() % idx];
}

#endif
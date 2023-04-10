#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__
#include <array>
using namespace std;

template<class T>
class Vector {
	T* arr;
	size_t idx;
	size_t n;

public:
	Vector(int n = 10, size_t id = -1) {
		this->n = n;
		arr = new int[n];
		idx = id;
	}

	void push_back(T e);
	void imprimir();
	void saludo1(string nombre);
};

template<class T>
void Vector<T>::push_back(T e) {
	if(idx + 1 < n) arr[++idx] = e;
}

template<class T>
void Vector<T>::imprimir() {
	for (int i = 0; i < n; ++i) cout << arr[i] << " ";
	cout << endl;
}

#endif
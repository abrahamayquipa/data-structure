#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__
#include <array>
using namespace std;

template<class X>
class Vector {
	X* arr;
	size_t idx;//indicador del ultimo elemento insertado
	size_t n;

public:
	Vector(int n = 10, size_t id = -1) {
		this->n = n;
		arr = new int[n];
		idx = id;
	}

	bool push_back(X e);

	X lookForElement(X element, X n) {
		if (arr[n] == element) return n;
		return lookForElement(element, n - 1);
	}

	X fibonacci(X n, X start) {
		if (n == 1 || n == 2) return 1;
		if (start >= n) return 0;
		return fibonacci(n, n + 1) + n;
	}
};

template <class X>
bool Vector<X>::push_back(X e) {
	if (idx + 1 < n) {
		arr[++idx] = e;
		cout << e << endl;
		return true;
	}
	else return false;
}

#endif
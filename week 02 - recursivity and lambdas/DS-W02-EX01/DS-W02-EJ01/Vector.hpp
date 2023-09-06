#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__
#include <array>
using namespace std;

template<class X>
class Vector {
	X* arr;
	size_t idx;
	size_t n;
public:
	Vector(int n = 10, size_t id = -1) {
		this->n = n;
		arr = new int[n];
		idx = id;
	}

	int getSize();		// array::size()
	int getMaxSize();	// array::max_size()
	bool isEmpty();		// array::empty()
	X lastElement();	// array::back()
	X firstElement();	// array::front()

	/* - - */
	bool push_back(X e);
};

template <class X>
bool Vector<X>::isEmpty() {
	if (idx != -1)
		return false;
	else
		return true;
}

template <class X>
int Vector<X>::getSize() {
	if (idx != -1) return idx + 1;
	else return 0;
}

template <class X>
int Vector<X>::getMaxSize() {
	return n;
}

template <class X>
X Vector<X>::firstElement() {
	return arr[0];
}

template <class X>
X Vector<X>::lastElement() {
	return arr[idx];
}

/* + + */
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
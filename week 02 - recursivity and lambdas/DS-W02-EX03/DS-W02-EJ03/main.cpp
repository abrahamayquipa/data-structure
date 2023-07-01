#include <iostream>
#include "Vector.hpp"
using namespace std;

int main() {
	Vector<int> array;

	cout << "Informacion anadida: " << endl;
	for (size_t i = 10; i < 17; ++i) {
		array.push_back(i);
	}

	cout << "------------" << endl;
	cout << array.lookForElement(11, 7 - 1) << endl;
	cout << "------------" << endl;
	cout << array.fibonacci(8, 3) << endl;
	return 0;
}
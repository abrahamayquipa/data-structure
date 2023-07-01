#include <iostream>
#include "Vector.hpp"

int main() {
	srand(time(NULL));

	Vector<int> array_enteros;

	if (array_enteros.isEmpty()) {
		cout << "El arreglo esta vacio :(" << endl;
	}

	cout << "Informacion anadida: " << endl;
	for (size_t i = 0; i < 7; i++) {
		array_enteros.push_back(i);
	}

	if (!array_enteros.isEmpty()) {
		cout << "El arreglo ya no esta vacio :)" << endl;
	}

	cout << "------" << endl;
	cout << "* Espacio maximo en el arreglo: " << array_enteros.getMaxSize() << endl;
	cout << "* N. de elementos: " << array_enteros.getSize() << endl;
	cout << "* Primer elemento: " << array_enteros.firstElement() << endl;
	cout << "* ultimo elemento: " << array_enteros.lastElement() << endl;
	return 0;
}
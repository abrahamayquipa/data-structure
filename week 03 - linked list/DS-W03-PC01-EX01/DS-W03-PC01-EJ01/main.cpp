#include <iostream>
#include "Matrix.hpp"

int main() {
	Matrix<short>matrix;
	for (size_t i = 1; i < 17; ++i) {
		matrix.push_back(i);
	}
	cout << endl;
	cout << "N. de elementos: " << matrix.getSize() << endl;

	matrix.buscarPorPosicion(2, 2);
	matrix.ordenamientoInsercion();

	matrix.mostrar();

	return 0;
}
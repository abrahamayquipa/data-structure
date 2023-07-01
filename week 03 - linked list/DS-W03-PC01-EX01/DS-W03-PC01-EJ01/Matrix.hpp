#ifndef __MATRIX_HPP__
#define __MATRIX_HPP__
#include <array>
using namespace std;

template<class T>
class Matrix {
	T* arr;
	size_t idx;
	size_t n;
public:
	Matrix(int n = 16, size_t id = -1) {
		this->n = n;
		arr = new short[n];
		idx = id;
	}
	~Matrix() {}

	bool push_back(T e);
	short getSize();
	void ordenamientoInsercion();
	void buscarPorPosicion(short x, short y);
	void mostrar();
};

template<class T>
bool Matrix<T>::push_back(T e) {
	if (idx + 1 < n) {
		arr[++idx] = e;
		cout << e << " ";
		return true;
	}
	else return false;
}

template<class T>
short Matrix<T>::getSize() {
	if (idx != -1) return idx + 1;
	else return 0;
}

template<class T>
void Matrix<T>::ordenamientoInsercion() {
	for (int i = 1; i < n; ++i) {
		int j = i;
		while (j > 0 && arr[j - 1] < arr[j]) {
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}

template<class T>
void Matrix<T>::buscarPorPosicion(short x, short y) {
	short paraIguales[4] = { 0, 1, 2, 3 };
	for (int i = 0; i < 4; ++i) {
		if (x == paraIguales[i] && y == paraIguales[i]) cout << "Encontrado: " << arr[x + y * 4] << endl;
	}
}

template<class T>
void Matrix<T>::mostrar() {
	for (int i = 0; i < n; ++i) cout << arr[i] << " ";
}

#endif
#include <iostream>
#include "Vector.hpp"
#include "List.hpp"

#include <functional>
void saludo1(string nombre) {
	cout << "Hola " + nombre + " , que tal?" << endl;
}

void saludo2(string nombre) {
	cout << "Buenas tardes, " + nombre << endl;
}

int main() {
	Vector<int> example;
	for(int i = 10; i < 30; ++i) {
		example.push_back(i);
	}

	example.imprimir();

	//-------------------------------------------

	function<void(string)>saludar;
	saludar = saludo1;
	saludar("Michael");

	saludar = saludo2;
	saludar("Pedro");

	//-------------------------------------------

	function<int(int a, int b)>suma;
	suma = [](int a, int b) -> int {
		return a + b;
	};
	cout << suma(5, 9);

	//-------------------------------------------

	List<int> numeros;
	for (int i = 0; i < 100; ++i) numeros.push_front(i);
	numeros.imprimir();
	return 0;
}
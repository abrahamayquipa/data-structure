#include <iostream>
#include <vector>
#include "ArbolBinario.hpp"
using namespace std;

void imprimir(int elemento) {
	cout << elemento << " ";
}

int main() {
	ArbolBinario<int>* objetoArbolBinario = new ArbolBinario<int>(imprimir);
	objetoArbolBinario->insertar(10);
	objetoArbolBinario->insertar(4);
	objetoArbolBinario->insertar(15);
	objetoArbolBinario->insertar(2);
	objetoArbolBinario->insertar(5);

	cout << "Buscar 15: " << objetoArbolBinario->buscar(15) << " coincidencias" << endl;

	cout << "Arbol ordenado en-orden: ";
	objetoArbolBinario->ordenamientoEnOrden(); cout << endl;
	cout << "Arbol ordenado pre-orden: ";
	objetoArbolBinario->ordenamientoPreOrden(); cout << endl;
	cout << "Arbol ordenado post-orden: ";
	objetoArbolBinario->ordenamientoPostOrden(); cout << endl;

	cout << "El arbol esta vacio?: " << objetoArbolBinario->vacio(); cout << endl;
	cout << "Cantidad de elementos en el arbol: " << objetoArbolBinario->cantidad(); cout << endl;
	cout << "Altura del arbol: " << objetoArbolBinario->altura(); cout << endl;

	vector<int> vectorLista;
	for (int i = 0; i < objetoArbolBinario->cantidad(); i++) {
		vectorLista.push_back(5);
	}

	int respuesta = objetoArbolBinario->busquedaBinaria(vectorLista, 5);
	cout << "Se encuentra en el indice: " << respuesta << endl;

	cin.get();
	return 0;
}
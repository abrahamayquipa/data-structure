#include <iostream>
#include "Grafo.hpp"

using namespace std;

int main() {
	//Crear el grafo
	Grafo<int>* objetoGrafo = new Grafo<int>();

	//Agregar Vértices
	objetoGrafo->adicionarVertice(2); //indice=0
	objetoGrafo->adicionarVertice(15); //indice=1
	objetoGrafo->adicionarVertice(30); //indice=2
	objetoGrafo->adicionarVertice(7); //indice=3

	//Agregar los arcos
	objetoGrafo->adicionarArco(0, 1); //indice=0
	objetoGrafo->modificarArco(0, 0, 10);
	objetoGrafo->adicionarArco(0, 3);//indice=1
	objetoGrafo->modificarArco(0, 1, 20);
	objetoGrafo->adicionarArco(1, 2);//indice=0
	objetoGrafo->modificarArco(1, 0, 30);
	objetoGrafo->adicionarArco(2, 0);//indice=0
	objetoGrafo->modificarArco(2, 0, 40);

	//Imprimir los vértices con sus arcos
	for (int i = 0; i < objetoGrafo->cantidadVertices(); ++i) {
		cout << "Vertice : " << objetoGrafo->obtenerVertice(i) << endl;
		for (int j = 0; j < objetoGrafo->cantidadArcos(i); j++) {
			cout << "Arco -> " << objetoGrafo->obtenerArco(i, j) << " ";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}
#include <iostream>
#include <ctime>
#include <cstdlib> 
//#include <fstream> 
#include "lista.hpp"
using namespace std;

class Operaciones {
	Lista<Persona*, nullptr>* listaEnlazada;
	int numeroGanador;
public:
	Operaciones(Lista<Persona*, nullptr>* listaEnlazada) {
		this->listaEnlazada = listaEnlazada;
		numeroGanador = 0;
	};
	~Operaciones() {};

	int generarNumeroGanador() {
		return rand() % 1000000 + 100000;
	}

	void mostrarContenidoLista() {
		cout << "LISTA:" << endl << endl;
		if (listaEnlazada->esVacia()) cout << "La lista esta vacia";
		else {
			for (int i = 0; i < listaEnlazada->longitud(); i++) {
				cout << "DATOS PERSONA " << i + 1 << ":" << endl;
				cout << "Nombre: " << listaEnlazada->obtenerPos(i)->getNombre() << endl;
				cout << "Direccion: " << listaEnlazada->obtenerPos(i)->getDireccion() << endl;
				cout << "Telefono: " << listaEnlazada->obtenerPos(i)->getTelefono() << endl;
				cout << "Edad: " << listaEnlazada->obtenerPos(i)->getEdad() << endl;
				cout << "Numero comprado: " << listaEnlazada->obtenerPos(i)->getNumeroComprado() << endl << endl;
			}
		}
	}

	void numeroExacto(int numeroGanador) {
		cout << "GANADORES POR NUMERO EXACTO:" << endl << endl;
		cout << "Numero ganador: " << numeroGanador << endl << endl;
		cout << "Coincidencias: " << endl;

		for (int i = 0; i < listaEnlazada->longitud(); i++) {
			if (listaEnlazada->obtenerPos(i)->getNumeroComprado() == numeroGanador) {
				cout << "- " << listaEnlazada->obtenerPos(i)->getNombre() << ": " << listaEnlazada->obtenerPos(i)->getNumeroComprado() << endl;
			}
			else cout << "No hubo coincidencias con la persona " << i + 1 << endl;
		}
	}

	void validacionesTotales() {
		numeroGanador = generarNumeroGanador();
		numeroExacto(numeroGanador);
	}

	//void guardarEnArchivo() {
	//	ofstream file("archivo.txt");
	//	for (int i = 0; i < listaEnlazada->longitud(); i++) {
	//		file << listaEnlazada->obtenerPos(i)->toString() << "\n";
	//	}
	//	file.close();
	//	cout << "Lista guardada exitosamente" << endl;
	//}
};
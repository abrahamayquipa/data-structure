#include <iostream>
#include <ctime>
#include <cstdlib> 
#include "lista.hpp"
using namespace std;

class Operaciones {
	Lista<Persona*, nullptr>* lst;
	int numeroGanador;
public:
	Operaciones() {
		lst = new Lista<Persona*, nullptr>();
		numeroGanador = 0;
	};
	~Operaciones() {};

	int generarNumeroGanador() {
		return rand() % 1000000 + 100000;
	}

	void mostrarContenidoLista() {
		cout << "*****LISTA*****" << endl;
		if (lst->esVacia()) cout << "La lista esta vacia" << endl;
		else {
			for (int i = 0; i < lst->longitud(); i++) {
				cout << "*****DATOS PERSONA " << i + 1 << ":*****" << endl;
				cout << "Nombre: " << lst->obtenerPos(i)->getNombre() << endl;
				cout << "Direccion: " << lst->obtenerPos(i)->getDireccion() << endl;
				cout << "Telefono: " << lst->obtenerPos(i)->getTelefono() << endl;
				cout << "Edad: " << lst->obtenerPos(i)->getEdad() << endl;
				cout << "Numero comprado: " << lst->obtenerPos(i)->getNumeroComprado() << endl << endl;
			}
		}
	}

	void numeroExacto(int numeroGanador) {
		cout << "*****GANADORES POR NUMERO EXACTO*****";
		cout << "Numero ganador: " << numeroGanador << endl;
		cout << "Coincidencias: " << endl;

		for (int i = 0; i < lst->longitud(); i++) {
			if (lst->obtenerPos(i)->getNumeroComprado() == numeroGanador) {
				cout << "- " << lst->obtenerPos(i)->getNombre() << ": " << lst->obtenerPos(i)->getNumeroComprado() << endl;
			}
		}
	}

	void validacionesTotales() {
		numeroGanador = generarNumeroGanador();
		numeroExacto(numeroGanador);
	}
};
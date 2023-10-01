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
				cout << "DATOS ALUMNO " << i + 1 << ":" << endl;
				cout << "Nombre: " << listaEnlazada->obtenerPos(i)->getNombre() << endl;
				cout << "Edad: " << listaEnlazada->obtenerPos(i)->getEdad() << endl;
				cout << "Direccion: " << listaEnlazada->obtenerPos(i)->getCarrera() << endl;
				cout << "Nota parcial: " << listaEnlazada->obtenerPos(i)->getNotaExamenParcial() << endl;
				cout << "Nota final: " << listaEnlazada->obtenerPos(i)->getNotaExamenFinal() << endl << endl;
			}
		}
	}

	void ordenarPorPromedio() {
		for (int i = 0; i < listaEnlazada->longitud(); i++) {
			for (int j = 0; j < listaEnlazada->longitud() - i - 1; j++) {
				if (listaEnlazada->obtenerPos(j)->getPromedio() < listaEnlazada->obtenerPos(j + 1)->getPromedio()) {
					// Intercambio de elementos
					Persona* temp = listaEnlazada->obtenerPos(j);
					listaEnlazada->modificarPos(listaEnlazada->obtenerPos(j + 1), j);
					listaEnlazada->modificarPos(temp, j + 1);
				}
			}
		}
	}

	void topTresAlumnosMejorPromedio() {
		ordenarPorPromedio();
		cout << "Top 3 alumnos con mejor promedio:" << endl;
		for (int i = 0; i < 3 && i < listaEnlazada->longitud(); i++) {
			cout << "Nombre: " << listaEnlazada->obtenerPos(i)->getNombre() << endl;
			cout << "Promedio: " << listaEnlazada->obtenerPos(i)->getPromedio() << endl;
			cout << "--------" << endl;
		}
	}

};
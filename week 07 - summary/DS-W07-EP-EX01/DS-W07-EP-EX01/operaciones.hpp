#include <iostream>
#include "persona.hpp"
#include "listaEnlazadaSimple.hpp"
using namespace std;

class Operaciones {
	ListaEnlazadaSimple<Persona*>* objetoListaEnlazada;
public:
	Operaciones(ListaEnlazadaSimple<Persona*>* listaEnlazada) {
		this->objetoListaEnlazada = listaEnlazada;
	};
	~Operaciones() {};

	void mostrarContenidoLista() {
		cout << "LISTA:" << endl << endl;
		if (objetoListaEnlazada->esVacia()) cout << "La lista esta vacia";
		else {
			for (int i = 0; i < objetoListaEnlazada->getLongitud(); i++) {
				cout << "DATOS ALUMNO " << i + 1 << ":" << endl;
				cout << "Nombre: " << objetoListaEnlazada->obtenerPos(i)->valor->getNombre() << endl;
				cout << "Edad: " << objetoListaEnlazada->obtenerPos(i)->valor->getEdad() << endl;
			}
		}
	}
};
#ifndef __LISTA_DOBLEMENTE_ENLAZADA_HPP__
#define __LISTA_DOBLEMENTE_ENLAZADA_HPP__

#include "nodo.hpp"
#include "operaciones.hpp"
#include <cstdint>
#include <functional>

template<class T>
class ListaDoblementeEnlazada {
private:
    Nodo<T>* cabeza;
    Nodo<T>* cola;
    size_t longitud;
public:
    ListaDoblementeEnlazada() : cabeza(nullptr), cola(nullptr), longitud(0) {}

    ~ListaDoblementeEnlazada() {
        if (cabeza != nullptr) {
            Nodo<T>* temporal = cabeza;
            Nodo<T>* siguiente;
            do {
                siguiente = temporal->siguiente;
                delete temporal;
                temporal = siguiente;
            } while (temporal != cabeza);
        }
    }

    void insertarFinal(T valor) {
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);

        if (cabeza == nullptr) {
            cabeza = cola = nuevoNodo;
            cabeza->siguiente = cabeza;
            cabeza->anterior = cabeza;
        }
        else {
            nuevoNodo->anterior = cola;
            nuevoNodo->siguiente = cabeza;

            cola->siguiente = nuevoNodo;
            cabeza->anterior = nuevoNodo;
            cola = nuevoNodo;
        }
        longitud++;
    }

    bool estaVacia() { return longitud == 0; }
    size_t getLongitud() { return longitud; }


    Nodo<T>* getNodoEnPosicion(int posicion) {
        if (posicion >= 0 && posicion < longitud) {
            Nodo<T>* auxiliar = cabeza;
            for (int i = 0; i < posicion; i++) auxiliar = auxiliar->siguiente;
            return auxiliar;
        }
        else throw "Posici�n fuera de rango";
    }

    void ordenamientoBurbuja(int posicion) {
        if (posicion < 0 || posicion >= longitud - 1) throw "Posici�n fuera de rango";

        Nodo<T>* nodo1 = cabeza;
        for (int i = 0; i < posicion; i++) nodo1 = nodo1->siguiente;
        Nodo<T>* nodo2 = nodo1->siguiente;

        swap(nodo1->valor, nodo2->valor);
    }
};

#endif
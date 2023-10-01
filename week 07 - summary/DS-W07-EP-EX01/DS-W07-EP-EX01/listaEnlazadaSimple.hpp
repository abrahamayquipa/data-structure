#ifndef __LISTA_ENLAZADA_SIMPLE_HPP__
#define __LISTA_ENLAZADA_SIMPLE_HPP__

#include "nodo.hpp"
#include <functional>
using namespace std;
typedef unsigned int uint;

template <typename T, T NADA = nullptr>
class ListaEnlazadaSimple {
    typedef function<int(T, T)> Comp;
    Nodo<T>* inicio;
    int longitud;
    Comp comparar;
public:
    ListaEnlazadaSimple() : inicio(nullptr), longitud(0), comparar([](T a, T b) {return a - b; }) {}
    ListaEnlazadaSimple(Comp comparar) : inicio(nullptr), longitud(0), comparar(comparar) {}

    ~ListaEnlazadaSimple() {
        Nodo<T>* aux = inicio;
        while (inicio != nullptr) {
            aux = inicio;
            inicio = inicio->sig;
            delete aux;
        }
    }

    int getLongitud() {
        return longitud;
    }

    bool esVacia() {
        return longitud == 0;
    }

    void agregaInicial(T elem) {
        Nodo<T>* nuevo = new Nodo<T>(elem, nullptr, inicio);
        if (nuevo != nullptr) {
            if (inicio != nullptr) {
                inicio->anterior = nuevo;
            }
            inicio = nuevo;
            longitud++;
        }
    }

    void agregaPos(T elem, uint pos) {
        if (pos > longitud) return;
        if (pos == 0) {
            agregaInicial(elem);
        }
        else {
            Nodo<T>* aux = inicio;
            for (int i = 1; i < pos; i++) {
                aux = aux->sig;
            }
            Nodo<T>* nuevo = new Nodo<T>(elem, aux->sig);
            if (nuevo != nullptr) {
                aux->sig = nuevo;
                longitud++;
            }
        }
    }

    void agregaFinal(T elem) {
        Nodo<T>* nuevo = new Nodo<T>(elem);
        if (!nuevo) return;
        if (!inicio) inicio = nuevo;
        else {
            Nodo<T>* aux = inicio;
            while (aux->siguiente) {
                aux = aux->siguiente;
            }
            aux->siguiente = nuevo;
        }
        longitud++;
    }

    void modificarInicial(T elem) {
        if (longitud > 0) {
            inicio->elem = elem;
        }
    }

    void modificarPos(T elem, uint pos) {
        if (pos >= 0 && pos < longitud) {
            Nodo<T>* aux = inicio;
            for (int i = 0; i < pos; i++) {
                aux = aux->sig;
            }
            aux->elem = elem;
        }
    }

    void modificarFinal(T elem) {
        modificarPos(elem, longitud - 1);
    }

    void eliminaInicial() {
        if (longitud > 0) {
            Nodo<T>* aux = inicio;
            inicio = inicio->sig;
            delete aux;
            longitud--;
        }
    }

    void eliminaPos(uint pos) {
        if (pos >= longitud) return;
        if (pos == 0) eliminaInicial();
        else {
            Nodo<T>* aux = inicio;
            for (uint i = 1; i < pos; i++) {
                aux = aux->sig;
            }
            Nodo<T>* nodoAEliminar = aux->sig;
            aux->sig = nodoAEliminar->sig;
            delete nodoAEliminar;
            longitud--;
        }
    }

    void eliminaFinal() {
        eliminaPos(longitud - 1);
    }

    T obtenerInicial() {
        return obtenerPos(0);
    }

    Nodo<T>* obtenerPos(int pos) {
        if (pos >= 0 && pos < longitud) {
            Nodo<T>* aux = inicio;
            for (int i = 0; i < pos; i++) {
                aux = aux->siguiente;  // Cambia 'sig' a 'siguiente'
            }
            return aux;
        }
        else {
            return nullptr;
        }
    }



    T obtenerFinal() {
        return obtenerPos(longitud - 1);
    }

    T buscar(T elem) {
        Nodo<T>* aux = inicio;
        while (aux != nullptr) {
            if (comparar(aux->elem, elem) == 0) {
                return aux->elem;
            }
            aux = aux->sig;
        }
        return NADA;
    }
};

#endif
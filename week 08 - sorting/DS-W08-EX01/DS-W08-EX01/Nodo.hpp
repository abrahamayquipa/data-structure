#ifndef __NODO_HPP__
#define __NODO_HPP__

#include "Futbolista.hpp"

class Nodo {
public:
    Futbolista* objetoFutbolista;
    Nodo* siguiente;
    Nodo* anterior;

    Nodo(Futbolista* f) : objetoFutbolista(f), siguiente(nullptr), anterior(nullptr) {}
};

#endif 
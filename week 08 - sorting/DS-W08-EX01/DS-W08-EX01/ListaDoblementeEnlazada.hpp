#ifndef __LISTA_DOBLEMENTE_ENLAZADA_HPP__
#define __LISTA_DOBLEMENTE_ENLAZADA_HPP__

#include "Nodo.hpp"

class ListaDoblementeEnlazada {
public:
    Nodo* cabeza;
    Nodo* cola;
    ListaDoblementeEnlazada() : cabeza(nullptr), cola(nullptr) {}

    void push_back(Futbolista* f) {
        Nodo* nuevo = new Nodo(f);
        if (!cabeza) {
            cabeza = cola = nuevo;
        }
        else {
            cola->siguiente = nuevo;
            nuevo->anterior = cola;
            cola = nuevo;
        }
    }

    void print() {
        Nodo* temp = cabeza;
        while (temp) {
            cout << temp->objetoFutbolista->nombre << " " << temp->objetoFutbolista->apellido << " - " << temp->objetoFutbolista->edad << endl;
            temp = temp->siguiente;
        }
    }

    Nodo* getMedio(Nodo* start) {
        if (!start) return nullptr;
        Nodo* slow = start;
        Nodo* fast = start->siguiente;
        while (fast && fast->siguiente) {
            slow = slow->siguiente;
            fast = fast->siguiente->siguiente;
        }
        return slow;
    }

    Nodo* merge(Nodo* left, Nodo* right) {
        if (!left) return right;
        if (!right) return left;

        if (left->objetoFutbolista->edad < right->objetoFutbolista->edad) {
            left->siguiente = merge(left->siguiente, right);
            left->siguiente->anterior = left;
            left->anterior = nullptr;
            return left;
        }
        else {
            right->siguiente = merge(left, right->siguiente);
            right->siguiente->anterior = right;
            right->anterior = nullptr;
            return right;
        }
    }

    Nodo* _mergeSort(Nodo* node) {
        if (!node || !node->siguiente) return node;
        Nodo* mid = getMedio(node);
        Nodo* half = mid->siguiente;
        mid->siguiente = nullptr;
        return merge(_mergeSort(node), _mergeSort(half));
    }

    void mergeSort() {
        cabeza = _mergeSort(cabeza);
        Nodo* temp = cabeza;
        while (temp && temp->siguiente) temp = temp->siguiente;
        cola = temp;
    }
};

#endif
#include <iostream>
template <typename T>

struct Nodo {//vagon
    Nodo<T>* next;
    T elemento;
    Nodo(T e) {
        elemento = e;
        next = nullptr;
    }
};

template <class T>
class Lista {
    Nodo<T>* head;
    size_t size;
public:
    Lista() { head = nullptr; size = 0; }

    void push_frontV1(T e) {
        //caso 0
        if (head == nullptr) {
            Nodo<T>* _new = new Nodo<T>(e);
            head = _new;
            ++size;
        }

        //caso 1
        else if (head->next == nullptr) {
            Nodo<T>* _new = new Nodo<T>(e);
            _new->next = head;
            head = _new;
        }

        //caso n
        else {
            Nodo<T>* _new = new Nodo<T>(e);
            _new->next = head;
            head = _new;
        }
    }

    void push_front(T e) {
        Nodo<T>* _new = new Nodo<T>(e);
        if (head != nullptr)
            _new->next = head;
        head = _new;
        ++size;
    }

    void print() {
        Nodo<T>* tmp = head;
        while (tmp != nullptr) {
            cout << tmp->elemento << " ";
            tmp = tmp->next;
        }
    }
};
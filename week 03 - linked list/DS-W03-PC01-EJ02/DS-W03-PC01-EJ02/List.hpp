#include <iostream>

template<typename T>
struct Nodo {//vagon
	Nodo<T>* next;
	T elemento;
	Nodo(T e) {
		elemento = e;
		next = nullptr;
	}
};

template<class T>
class List {
	Nodo<T>* head;
	size_t size;
public:
	List() {
		head = nullptr;
		size = 0;
	}
	~List() {}

	void push_front(T e) {
		Nodo<T>* _new = new Nodo<T>(e);
		if (head != nullptr) _new->next = head;
		head = _new;
		++size;
	}

	void imprimir() {
		Nodo<T>* tmp = head;
		while (tmp != nullptr) {
			cout << tmp->elemento << " ";
			tmp = tmp->next;
		}
	}
};
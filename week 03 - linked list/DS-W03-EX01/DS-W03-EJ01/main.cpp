#include <iostream>
using std::cout;
#include "Lista.hpp"

int main() {
	/*
	//creando nodos de manera manual
	Nodo<int>* n1=new Nodo<int>(10);
	Nodo<int>* n2=new Nodo<int>(20);
	Nodo<int>* n3=new Nodo<int>(30);
	Nodo<int>* n4=new Nodo<int>(40);
	Nodo<int>* n5=new Nodo<int>(50);

	//enlazar los nodos mediantes sus punteros(next)
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;

	//recorrido por iteración
	Nodo<int>* tmp=n1;

	while(tmp!=nullptr){
	 cout<<tmp->elemento<<" ";
	 tmp=tmp->next;
	}
	*/

	Lista<int> numeros;
	for (size_t i = 0; i < 100; ++i)
		numeros.push_front(i);
	numeros.print();
}
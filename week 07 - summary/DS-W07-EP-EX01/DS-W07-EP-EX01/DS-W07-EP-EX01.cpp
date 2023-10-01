#include <cstdlib> 
#include <ctime> 

#include <iostream>
#include "persona.hpp"
#include "listaEnlazadaSimple.hpp"
#include "operaciones.hpp"
using namespace std;

int main() {
    srand(time(NULL));

    ListaEnlazadaSimple<Persona*>* objetoListaEnlazada = new ListaEnlazadaSimple<Persona*>();
    Operaciones* objetoOperaciones = new Operaciones(objetoListaEnlazada);

    string nombre = "Juan";
    int edad = 1 + rand() % 10;
    Persona* objetoPersona = new Persona(nombre, edad);
    objetoListaEnlazada->agregaFinal(objetoPersona);
    objetoOperaciones->mostrarContenidoLista();
};
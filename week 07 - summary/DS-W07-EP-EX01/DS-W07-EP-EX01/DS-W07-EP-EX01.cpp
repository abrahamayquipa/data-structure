#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include "futbolista.hpp"
#include "listaEnlazadaSimple.hpp"
#include "pila.hpp"
using namespace std;

int generarAleatorio() {
    return 51 + rand() % 249;
}

void generarRegistros(ListaEnlazadaSimple<Futbolista*>* objetoListaEnlazada, Pila<Futbolista*>* objetoPila) {
    string  nombres[] = { "pepitp", "Juanito", "Carlos", "Fer", "Lucho", "Lucas", "Michael", "Bruno", "Darwin", "Sus" };
    string apellidos[] = { "Guerrero", "Halsr", "Gallese", "Flores", "Modric", "Dc", "Suarez", "Fuentes", "Rosario", "Pezetak" };

    int n = generarAleatorio();

    for (int i = 0; i < n; i++) {
        string nombre = nombres[rand() % 10];
        string apellido = apellidos[rand() % 10];
        int edad = 18 + rand() % 23;
        string nacionalidad = (rand() % 2) ? "E" : "N";
        bool bonoNacionalidad = rand() % 2;
        int dni = 10000000 + rand() % 90000000;
        int sueldo = 1000 + rand() % 9000;

        Futbolista* objetoPersona = new Futbolista(nombre, apellido, nacionalidad, bonoNacionalidad, dni, edad, sueldo);

        objetoListaEnlazada->agregaFinal(objetoPersona);
        objetoPila->insertar(objetoPersona);

        for (int i = 0; i < 10; i++) objetoPila->insertar(objetoPersona);
    }
}


void mostrarAplicacion(int i, ListaEnlazadaSimple<Futbolista*>* objetoListaEnlazada) {
    if (i >= objetoListaEnlazada->getLongitud()) return;
    cout << "DATOS ALUMNO " << i + 1 << ":" << endl;
    cout << "Nombre: " << objetoListaEnlazada->obtenerPos(i)->valor->getNombre() << endl;
    cout << "Apellido: " << objetoListaEnlazada->obtenerPos(i)->valor->getApellido() << endl;
    cout << "Nacionalidad: " << objetoListaEnlazada->obtenerPos(i)->valor->getNacionalidad() << endl;
    cout << "BonoNacionalidad: " << objetoListaEnlazada->obtenerPos(i)->valor->getBonoNacionalidad() << endl;
    cout << "DNI: " << objetoListaEnlazada->obtenerPos(i)->valor->getDni() << endl;
    cout << "Edad: " << objetoListaEnlazada->obtenerPos(i)->valor->getEdad() << endl;
    cout << "Sueldo: " << objetoListaEnlazada->obtenerPos(i)->valor->getSueldo() << endl;
    cout << endl;
    mostrarAplicacion(i + 1, objetoListaEnlazada);
}

void mostrarAplicaciones(ListaEnlazadaSimple<Futbolista*>* objetoListaEnlazada) {
    if (objetoListaEnlazada->esVacia()) {
        cout << "\t\t\tLa lista de aplicaciones esta vacia";
        return;
    }
    mostrarAplicacion(0, objetoListaEnlazada);
}

int main() {
    srand(time(NULL));

    ListaEnlazadaSimple<Futbolista*>* objetoListaEnlazada = new ListaEnlazadaSimple<Futbolista*>();
    Pila<Futbolista*>* objetoPila = new Pila<Futbolista*>();

    generarRegistros(objetoListaEnlazada, objetoPila);
    mostrarAplicaciones(objetoListaEnlazada);

    cout << "--------------------------------------------------------------------------------" << endl;

    cout << "ORDENAMIENTO POR INSERCION POR EDAD DE JUGADOR" << endl << endl;
    objetoListaEnlazada->ordenarPorInsercionEdad();
    mostrarAplicaciones(objetoListaEnlazada);

    return 0;
};
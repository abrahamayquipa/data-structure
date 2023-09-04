#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class Persona {
    string nombre, direccion;
    int telefono, edad, numeroComprado;
public:
    Persona() {
        this->nombre = "";
        this->direccion = "";
        this->telefono = 0;
        this->edad = 0;
        this->numeroComprado = 0;
    }
    Persona(string nombre, string direccion, int telefono, int edad, int numeroComprado) {
        this->nombre = nombre;
        this->direccion = direccion;
        this->telefono = telefono;
        this->edad = edad;
        this->numeroComprado = numeroComprado;
    }
    ~Persona() {};

    string getNombre() { return nombre; };
    string getDireccion() { return direccion; };
    int getTelefono() { return telefono; };
    int getEdad() { return edad; };
    int getNumeroComprado() { return numeroComprado; };

    void setNommbre(string nombre) { this->nombre = nombre; };
    void setDireccion(string direccion) { this->direccion = direccion; };
    void setTelefono(int telefono) { this->telefono = telefono; };
    void setEdad(int edad) { this->edad = edad; };
    void setNumeroComprado(int numeroComprado) { this->numeroComprado = numeroComprado; };

    void toString() {
        cout << this->nombre << " | " << this->direccion << " | " << this->telefono << " | " << this->edad << " | " << this->numeroComprado;
    }
};

#endif
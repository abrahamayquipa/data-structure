#ifndef __PERSONA_HPP__
#define __PERSONA_HPP__
#include <iostream>
using namespace std;

class Persona {
    string nombre;
    int edad;
public:
    Persona() {
        this->nombre = "";
        this->edad = 0;
    }
    Persona(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }
    ~Persona() {};

    string getNombre() { return nombre; };
    int getEdad() { return edad; };
};

#endif
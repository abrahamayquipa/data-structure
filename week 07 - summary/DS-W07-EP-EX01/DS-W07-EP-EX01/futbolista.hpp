#ifndef __PERSONA_HPP__
#define __PERSONA_HPP__
#include <iostream>
using namespace std;

class Futbolista {
    string nombre, apellido, nacionalidad;
    bool bonoNacionalidad;
    int dni, edad, sueldo;
public:
    Futbolista() {
        this->nombre = "";
        this->apellido = "";
        this->nacionalidad = "";
        this->bonoNacionalidad = 0;
        this->dni = 12345678;
        this->edad = 0;
        this->sueldo = 0;
    }
    Futbolista(string nombre, string apellido, string nacionalidad, bool bonoNacionalidad, int dni, int edad, int sueldo) {
        this->nombre = nombre;
        this->apellido = apellido;
        this->nacionalidad = nacionalidad;
        this->bonoNacionalidad = bonoNacionalidad;
        this->dni = dni;
        this->edad = edad;
        this->sueldo = sueldo;
    }
    ~Futbolista() {};

    string getNombre() { return nombre; };
    string getApellido() { return apellido; };
    string getNacionalidad() { return nacionalidad; };
    bool getBonoNacionalidad() { return bonoNacionalidad; };
    int getDni() { return dni; };
    int getEdad() { return edad; };
    int getSueldo() { return sueldo; };
};

#endif
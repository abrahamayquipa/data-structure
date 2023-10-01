#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;

class Persona {
    string nombre;
    int edad;
    string carrera;
    int notaExamenParcial;
    int notaExamenFinal;
    int promedio;
public:
    Persona() {
        this->nombre = "";
        this->edad = 0;
        this->carrera = "";
        this->notaExamenParcial = 0;
        this->notaExamenFinal = 0;
        this->promedio = 0;
    }
    Persona(string nombre, int edad, string carrera, int notaExamenParcial, int notaExamenFinal) {
        this->nombre = nombre;
        this->edad = edad;
        this->carrera = carrera;
        this->notaExamenParcial = notaExamenParcial;
        this->notaExamenFinal = notaExamenFinal;
        this->promedio = notaExamenParcial + notaExamenFinal;
    }
    ~Persona() {};

    string getNombre() { return nombre; };
    int getEdad() { return edad; };
    string getCarrera() { return carrera; };
    int getNotaExamenParcial() { return notaExamenParcial; };
    int getNotaExamenFinal() { return notaExamenFinal; };
    int getPromedio() { return promedio; };
};

#endif
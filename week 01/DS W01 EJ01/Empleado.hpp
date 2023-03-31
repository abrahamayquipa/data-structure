#include "Array.hpp"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Empleado
{
    string nombre;
    unsigned short edad;

public:
    Empleado() {}

    Empleado(string nombre, unsigned short edad)
    {
        this->nombre = nombre;
        this->edad = edad;
        guardar(); // por el momento
    }

    void guardar()
    {
        ofstream archivo("empleados.txt", ios::app);
        archivo << nombre << " " << edad << endl;
        archivo.close();
    }
};
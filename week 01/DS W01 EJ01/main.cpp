#include "Empleado.hpp"
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL)); // inicializacion
    // srand(2023);

    // Array<int> enteros;
    // Array<float> flotantes;

    Array<Empleado> empleados;
    empleados.push_back(Empleado("Pedro", 23));
    empleados.push_back(Empleado("Pedro", 23));
    empleados.push_back(Empleado("Pedro", 23));
    return 0;
}
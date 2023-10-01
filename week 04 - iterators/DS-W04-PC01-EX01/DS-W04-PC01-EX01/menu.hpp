#include <iostream>
using namespace std;
#pragma once

int menuPrincipal() {
    int opcionPrincipal = 0;
    cout << "MENU PRINCIPAL:" << endl;
    cout << "Numero de alumnos a registrar: ";
    cin >> opcionPrincipal;
    return opcionPrincipal;
}

int menuSecundario() {
    int opcionSecundaria = 0;
    cout << "MENU SECUNDARIO:" << endl;
    cout << "1. Ingresar los alumnos en una lista," << endl;
    cout << "2. Mostrar todos los alumnos ingresados" << endl;
    cout << "3. Top tres de alumnos con mejor promedio" << endl;
    cout << "Elige la opcion: ";
    cin >> opcionSecundaria;
    return opcionSecundaria;
}
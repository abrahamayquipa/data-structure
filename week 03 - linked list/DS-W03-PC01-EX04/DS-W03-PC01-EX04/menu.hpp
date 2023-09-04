#include <iostream>
using namespace std;
#pragma once

int menuPrincipal() {
    int opcionPrincipal = 0;
    cout << "MENU PRINCIPAL:" << endl;
    cout << "Numero de personas a registrar: ";
    cin >> opcionPrincipal;
    return opcionPrincipal;
}

int menuSecundario() {
    int opcionSecundaria = 0;
    cout << "MENU SECUNDARIO:" << endl;
    cout << "1. Registrar los datos de un persona" << endl;
    cout << "2. Mostrar lista de personas" << endl;
    cout << "3. Mostrar lista de resultados y ganadores" << endl << endl;
    cout << "Elige la opcion: ";
    cin >> opcionSecundaria;
    return opcionSecundaria;
}
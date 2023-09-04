#include <iostream>
#include <string>
#include "persona.hpp"
#include "lista.hpp"
#include "operaciones.hpp"
#include "menu.hpp"
using namespace std;

int main() {
    srand(time(NULL));
    short opcionMenuPrincipal, opcionMenuSecundario;

    Lista<Persona*, nullptr>* lst = new Lista<Persona*, nullptr>();
    //* objetoOperaciones = new Operaciones();

    do {
        system("cls");
        opcionMenuPrincipal = menuPrincipal();
    } while (opcionMenuPrincipal < 0);

    do {
        system("cls");
        opcionMenuSecundario = menuSecundario();

        string nombre, direccion;
        int telefono, edad, numeroComprado;

        system("cls");

        switch(opcionMenuSecundario) {
        case 1:
            for (int i = 0; i < opcionMenuPrincipal; i++) {;
                cout << "*****DATOS PERSONA " << i + 1 << ": *****" << endl;
                cout << "Ingresar nombre: "; cin >> nombre;
                cout << "Ingresar direccion: "; cin >> direccion;
                cout << "Ingresar telefono: "; cin >> telefono;
                cout << "Ingresar edad: "; cin >> edad;
                cout << "Ingresar numero comprado: "; cin >> numeroComprado;
                cout << endl;

                Persona* objetoPersona = new Persona(nombre, direccion, telefono, edad, numeroComprado);
                lst->agregaInicial(objetoPersona);
            };
            //objetoOperaciones->registarPersona(lst, opcionMenuPrincipal);
            break;
        default:
            cout << "";
            break;
        };
        system("pause>0");

    } while (opcionMenuSecundario < 0 || opcionMenuSecundario > 3);

    delete lst;
    return 0;
};
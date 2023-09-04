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

    Lista<Persona*, nullptr>* listaEnlazada = new Lista<Persona*, nullptr>();
    Operaciones* objetoOperaciones = new Operaciones(listaEnlazada);

    do {
        system("cls");
        opcionMenuPrincipal = menuPrincipal();
    } while (opcionMenuPrincipal <= 0);

    while (true) {
        system("cls");
        opcionMenuSecundario = menuSecundario();
        system("cls");

        string nombre, direccion;
        int telefono, edad, numeroComprado;

        switch (opcionMenuSecundario) {
        case 1:
            for (int i = 0; i < opcionMenuPrincipal; i++) {
                cout << "DATOS PERSONA " << i + 1 << ":" << endl;
                cout << "Ingresar nombre: "; cin >> nombre;
                cout << "Ingresar direccion: "; cin >> direccion;
                cout << "Ingresar telefono: "; cin >> telefono;
                cout << "Ingresar edad: "; cin >> edad;
                cout << "Ingresar numero comprado: "; cin >> numeroComprado;
                cout << endl << endl;

                Persona* objetoPersona = new Persona(nombre, direccion, telefono, edad, numeroComprado);
                listaEnlazada->agregaInicial(objetoPersona);
            };
            break;
        case 2:
            objetoOperaciones->mostrarContenidoLista();
            break;
        case 3:
            objetoOperaciones->validacionesTotales();
            break;
        };
        system("pause>0");
    }
    delete listaEnlazada;
    delete objetoOperaciones;
    return 0;
};
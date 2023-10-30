#include "ListaDoblementeEnlazada.hpp"
#include <cstdlib>

int main() {
    ListaDoblementeEnlazada lista;

    for (int i = 0; i < 5; i++) {
        Futbolista* objetoFutbolista = new Futbolista("Nombre: " + to_string(i), "Apellido: " + to_string(i), rand() % 40 + 10);
        lista.push_back(objetoFutbolista);
    }

    cout << "Orden original:" << endl;
    lista.print();

    lista.mergeSort();

    cout << "\nOrdenado por edad:" << endl;
    lista.print();

    return 0;
}

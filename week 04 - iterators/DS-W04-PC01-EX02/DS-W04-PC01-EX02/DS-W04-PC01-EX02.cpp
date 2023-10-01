#include <iostream>
using namespace std; 

// Creditos: ejercicio 10 de recursividad por puntos extras para la pc 
int invertirArreglo(int arr[], int inicio, int fin) {
    if (inicio >= fin) return inicio;
    int temp = arr[inicio];
    arr[inicio] = arr[fin];
    arr[fin] = temp;
    return invertirArreglo(arr, inicio + 1, fin - 1);
}
int main() {
    int arreglo[] = { 2, 5, 4, 6, 3, 1 };
    int n = 6;

    invertirArreglo(arreglo, 0, n-1);

    for (int i = 0; i < n; i++) cout << arreglo[i] << " ";
    return 0;
}
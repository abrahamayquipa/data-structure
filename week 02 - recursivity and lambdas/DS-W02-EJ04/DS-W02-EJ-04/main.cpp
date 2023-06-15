#include <iostream>
using namespace std;

void imprimir(int n) {
    if (n > 0) {
        cout << n << " ";
        imprimir(n - 1);
        cout << n << " ";
    }
}

int factorial(int n) {
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int suma(int arreglo[4], int n) {
    if (n == 0)
        return 0;
    return suma(arreglo, n - 1) + arreglo[n - 1];
}

#include <functional>
string funcion1(string X) { return "Hi, " + X + "\n"; }

string funcion2(string X) { return "Welcome, " + X + "\n"; }

string funcion3(string X) { return "Thanks," + X + "\n"; }

int main() {
    string msj = "UPCINO";

    function<string(string)> variable;
    variable = funcion1;
    cout << variable("Ana");

    variable = funcion2;
    cout << variable("Ana");

    variable = funcion3;
    cout << variable("Ana");

    variable = [msj](string s) -> string {
        return msj + " " + s + ", have a nice day";
    };
    cout << variable("Juan");
}

// void imprimir(function<void(string)> fn){
// fn(arr[i]);
//}
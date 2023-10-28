#include<iostream>
#include<cstdio>
#include<list>
#include<vector>
#include<unordered_map>
#include<climits>
#include<unordered_set>
#include<map>
#include<set>
#include<stack>
#include "ColaPrioridad.hpp"

int main() {
    int arreglo[10] = { 10,9,8,7,6,50,4,3,2,1 };
    colaPrioridad objetoColaPrioridad(arreglo, 10);
    cout << objetoColaPrioridad.maximum() << endl;

    objetoColaPrioridad.insert(20);
    objetoColaPrioridad.insert(10);
    cout << objetoColaPrioridad.maximum() << endl;

    objetoColaPrioridad.extract_max();
    cout << objetoColaPrioridad.maximum() << endl;

    objetoColaPrioridad.increase_key(0, 5);
    cout << objetoColaPrioridad.maximum() << endl;

    objetoColaPrioridad.extract_max();
    cout << objetoColaPrioridad.maximum() << endl;

    objetoColaPrioridad.increase_key(1, 30);
    cout << objetoColaPrioridad.maximum() << endl;

    return 0;
}
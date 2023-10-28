#include <iostream>
using namespace std;
#include "Heap.hpp"

int main() {
	int arreglo[10] = { 16,14,10,8,7,19,3,2,4,1 };

	buildMaxHeap(arreglo, 10);
	print(arreglo, 10); cout << endl;
	heapsort(arreglo, 10);
	print(arreglo, 10);

	cin.ignore();
	cin.get();
	return 0;
}
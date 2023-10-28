#ifndef __COLA_PRIORIDAD_HPP__
#define __COLA_PRIORIDAD_HPP__
#include <iostream>
using namespace std;

class colaPrioridad {
public:
    colaPrioridad(int* A, int n){
        for(int i = 0;i < n;i++) {
            arreglo[i] = A[i];
        }
        tamano = n;
        buildMaxHeap(arreglo, tamano);
    }

    void insert(int valor) {
        tamano++;
        arreglo[tamano - 1] = valor;
        int i = tamano - 1;
        while (i > 0 && arreglo[parent(i)] < arreglo[i]) {
            swap(arreglo[i], arreglo[parent(i)]);
            i = parent(i);
        }
    }

    int maximum(void) {
        if (tamano <= 0) {
            cerr << "heap overflow" << endl;
            return -1;
        }
        return arreglo[0];
    }

    int extract_max(void) {
        if (tamano <= 0) {
            cerr << "heap overflow" << endl;
            return -1;
        }
        int max = arreglo[0];
        arreglo[0] = arreglo[tamano - 1];
        tamano--;
        maxHeapify(arreglo, tamano, 0);
        return max;
    }

    void increase_key(int i, int x) {
        arreglo[i] = max(arreglo[i], x);

        while (i > 0 && arreglo[parent(i)] < arreglo[i]) {
            swap(arreglo[parent(i)], arreglo[i]);
            i = parent(i);
        }
    }
private:
    int arreglo[10000];
    int tamano;

    int parent(int i) { return (i - 1) / 2; }
    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }

    void maxHeapify(int A[], int n, int i) {
        int l = left(i);
        int r = right(i);
        int largest(0);
        if (l <= (n - 1) && A[l] > A[i]) largest = l;
        else largest = i;
        if (r <= (n - 1) && A[r] > A[largest]) largest = r;
        if (largest != i) {
            swap(A[i], A[largest]);
            maxHeapify(A, n, largest);
        }
    }

    void buildMaxHeap(int A[], int n) {
        for (int i = n / 2 - 1; i >= 0; i--) maxHeapify(A, n, i);
    }

    void heapsort(int A[], int n) {
        buildMaxHeap(A, n);
        for (int i = n - 1; i > 0; i--) {
            swap(A[0], A[i]);
            maxHeapify(A, --n, 0);
        }
    }
};

#endif
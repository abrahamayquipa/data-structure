#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__
#include <cstdlib>//stdlib.h
#include <ctime>//time.h
#include <iostream>
using namespace std;
template <class T>

class MiVector {
    T* arr;
    int n;
public:
    MiVector() {
        arr = new T[n];
        n = 0;
    }

    void push_back(T e) {
        T* temp = new T[n + 1];
        for (int i = 0; i < n; ++i) {
            temp[i] = arr[i];
        }
        temp[n] = e;
        ++n;
        arr = temp;
    }

    void begin() {
        cout << "begin: " << arr[0] << endl;
    }

    void end() {
        cout << "end: " << arr[n - 1] << endl;
    }

    void at(int n) {
        for (int i = 0; i < n; ++i) {
            cout << "at: " << arr[n];
        }
    }

    void pop_back() {
        for (int i = n - 1; i < n; ++i) {
            arr[i] = arr[n];
            --n;
        }
    }
    void size() {
        cout << "size: " << n << endl;
    }

    void show() {
        cout << "array: ";
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MiVector<int> vector;
    vector.push_back(32);
    vector.push_back(1565);
    vector.push_back(6);
    vector.pop_back();
    vector.push_back(7226);
    vector.size();
    vector.begin();
    vector.end();
    vector.show();
    vector.at(1);
    return 0;
}

#endif
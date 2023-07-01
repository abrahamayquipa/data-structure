#include <iostream>
using namespace std;

void print(int n) {
    if (n > 0) {
        //cout << n << " ";
        print(n - 1);
        cout << n << " ";
    }
}

int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int addArray(int arr[], int n) {
    if (n == 0) return 0;
    return addArray(arr, n - 1) + arr[n - 1];
}

int lookForElement(int arr[], int element, int n) {
    if (arr[n] == element) return n;
    return lookForElement(arr, element, n - 1);
}

int fibonacci(int n, int start) {
    if (n == 1 || n == 2) return 1;
    if (start >= n) return 0;
    return fibonacci(n, n + 1) + n;
}

int main() {
    int arr[4] = { 5,1,6,3 };
    //print(10);
    //cout << endl;
    //cout << factorial(3);
    //cout << endl;
    //cout << addArray(arr, 4);
    //cout << endl;
    //cout << lookForElement(arr,6,4 - 1);
    cout << fibonacci(8, 3);
}

/*
* look for elemet
* sorting element
* fibonacci
*/
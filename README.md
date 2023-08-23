# Data structures
* Structure = container.
* Algorithm = process.

When making an algorithm, we will present 3 cases and verify if it works in these cases:
* case with 0 elements
* case with one element 
* case with n elements

## Week 01: Big O notation and Templeates
### Templeates
* Examples of declaration and invocation:
    * Declaration:
        ```cpp
        //for classes: 
        templeate<class name>

        //for functions: 
        templeate<typename name>
        ```
    * Invocation:
        ```cpp
        //for classes: 
        className<TypeOfData> templeateName;
        //Use
        templeateName.method

        //for functions:
        className<TypeOfData>(argument);
        ```

* In Operations.hpp:
```cpp
#ifndef __OPERATIONS_HPP__
#define __OPERATIONS_HPP__
using namespace std;

template<class T>
class Operations {
private:
  T firstNumber, secondNumber, sumResult, subtractResult;
public:
  Operations(T firstNumber,T secondNumber) {
    this->firstNumber = firstNumber;
    this->secondNumber = secondNumber;
    this->sumResult = 0;
  }

  ~Operations() {}

  T add() {
  sumResult = firstNumber + secondNumber;
  return sumResult;
  }

  T subtract(T firstNumber,T secondNumber);
};

template<typename T>
T Operations<T>::subtract(T firstNumber,T secondNumber) {
  subtractResult = firstNumber - secondNumber;
  return subtractResult;
}

#endif
```

* In main.cpp:
```cpp
#include <iostream>
#include "Operations.hpp"

int main() {
  Operations<int> obj1(20, 10);
  cout << obj1.add() << endl;
  cout << obj1.subtract(10, 5) << endl;
  return 0;
};
```

## Week 02: Recursivity and Lambdas
### Recursivity: 
* Vector.hpp:
```cpp
#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__
using namespace std;

template<class X>
class Vector {
private:
  int arr[5];
public:
	Vector() {
        for(int i = 0; i < 5; i++) {
          arr[i] = i;
        }
	}

    ~Vector() {}

    X lookForElement(X element, X n) {
        if(arr[n] == element) return n;
        return lookForElement(element, n - 1);
    }
};

#endif
```

* main.cpp:
```cpp
#include <iostream>
#include "Vector.hpp"
using namespace std;

int main() {
	Vector<int> array;
    cout << array.lookForElement(2, 5) << endl;
	return 0;
}
```

### Functions as variables: function<()>
This support external functions and lambdas.

* Examples of declaration and invocation:
    * Declaration:
        ```cpp
        function<typeDataReturn(parameter)>nameVariable;
        ```

* main.cpp:
```cpp
#include <iostream>
using namespace std;

#include <functional>
string funcion1(string X) { return "Hi,  " + X + "\n"; }
string funcion2(string X) { return "Welcome, " + X + "\n"; }


int main() {
    function<string(string)> variable;

    variable = funcion1;
    cout << variable("Ana");

    variable = funcion2;
    cout << variable("Ana");
}
```

### Lambdas - anonymous funntion
* Examples of declaration and invocation:
    * Estructure:
    ```cpp
    nameVariable = [](){}
    ```
    * Declaration:
    ```cpp
    nameVariable = [globalVariables](parameters){instructions}
    ```

* main.cpp:
```cpp
#include <iostream>
using namespace std;
#include <functional>

int main() {
    function<string(string)> variable;
    
    string msj = "UPCINO";
    
    variable = [msj](string s) -> string {
        return msj + " " + s + ", have a nice day";
    };
    cout << variable("Juan");
}
```

## Week 03: Linked List
For positional access, positional delete and sorting, both array and vector are optimal but vector wins narrowly in performance. But to insert at the beginning or at the end (as long as it has a pointer at the end) wins the linked lists.

* Array:
    * Finite
    * Same data
    * contiguous

* Vector:
    * Copy and paste into a larger or smaller arrangement

* Lists:
    * Use in IA's.
    * Use nodes.
    * Are created on demand
    * Each node has only one input and output

* List.hpp:
```cpp
#include <iostream>

template<typename T>
struct Nodo {//vagon
	Nodo<T>* next;
	T elemento;
	Nodo(T e) {
		elemento = e;
		next = nullptr;
	}
};


template <class T>
class List {
    Nodo<T>* head;
    size_t size;
public:
    List() { 
        head=nullptr;
        size=0; 
    }

    void push_front(T e) {
        Nodo<T>* _new=new Nodo<T>(e);
        if(head!=nullptr)
            _new->next=head;
        head=_new;
        ++size;
    }

    void print() {
        Nodo<T>* tmp=head;
        while(tmp!=nullptr) {
            cout << tmp->elemento << " ";
            tmp = tmp->next;
        }
    }
};
```

* main.cpp:
```cpp
#include <iostream>
using std::cout;
#include "List.hpp"

int main() {
    List<int> numeros;
    for(size_t i=0;i<100;++i) numeros.push_front(i);
    numeros.print();
}
```
<br/>
<div align="center">
    <h1 align="center">Data structures</h1>
</div>

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
        ```sh
        for functions: templeate<typename name>
        for classes: templeate<class name>
        ```
    * Invocation:
        ```sh
        //Declaration
        className<TypeOfData>name;
        //Use
        name.method
        ```

* In Vector.hpp:
```sh
#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__
#include <array>
using namespace std;

template<class X>
class Vector {
private:
	X* arr;
    size_t idx;
	size_t n;
public: 
    Vector(int n = 10, size_t id = -1) {
		this->n = n;
		arr = new int[n];
		idx = id;
	}
    ~Vector() {}

    int getSize();
}

template <class X>
int Vector<X>::getSize() {
	if (idx != -1) return idx + 1;
	else return 0;
}

#endif
```

* In main.cpp:
```sh
#include <iostream>
#include "Vector.hpp"

int main() {
	srand(time(NULL));
	Vector<int> array_enteros;
	cout << "* N. de elementos: " << array_enteros.getSize() << endl;
	return 0;
}
```

## Week 02: Recursivity and Lambdas
### Recursivity: 
* Vector.hpp:
```sh
#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__
#include <array>
using namespace std;

template<class X>
class Vector {
public:
	Vector(int n = 10, size_t id = -1) {
		this->n = n;
		arr = new int[n];
		idx = id;
	}

    X lookForElement(X element, X n) {
        if(arr[n] == element) return n;
        return lookForElement(element, n - 1);
    }
};

#endif
```

* main.cpp:
```sh
#include <iostream>
#include "Vector.hpp"
using namespace std;

int main() {
	Vector<int> array;

    cout << "Informacion anadida: " << endl;
	for (size_t i = 10; i < 17; ++i) {
		array.push_back(i);
	}
    
    cout << array.lookForElement(11, 7 - 1) << endl;
	return 0;
}
```

### Functions as variables
This support external functions and lambdas.

* Examples of declaration and invocation:
    * Declaration:
        ```sh
        function<tipeDataReturn(parameter)>nameVariable;
        ```

* main.cpp:
```sh
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
    ```sh
    nameVariable = [](){}
    ```
    * Declaration:
    ```sh
    nameVariable = [globalVariables](parameters){instructions}
    ```

* main.cpp:
```sh
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
```sh
#include <iostream>

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
```sh
#include <iostream>
using std::cout;
#include "List.hpp"

int main() {
    List<int> numeros;
    for(size_t i=0;i<100;++i) numeros.push_front(i);
    numeros.print();
}
```
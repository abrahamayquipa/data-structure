#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;

class Operaciones {
    
public:
	Operaciones() {
        
	};
	~Operaciones() {};

	int generarNumeroGanador() {
		int numeroGanador = rand() % 1000000 + 100000;
		return numeroGanador;
	}
};
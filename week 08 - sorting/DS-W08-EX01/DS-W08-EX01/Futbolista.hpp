#ifndef __FUTBOLISTA_HPP__
#define __FUTBOLISTA_HPP__

#include <string>
#include <iostream>
using namespace std;

class Futbolista {
public:
    string nombre;
    string apellido;
    int edad;

    Futbolista(std::string n, std::string a, int e) : nombre(n), apellido(a), edad(e) {}
};

#endif
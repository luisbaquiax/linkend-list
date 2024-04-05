//
// Created by Luis on 17/03/2024.
//

#ifndef LISTCIRCULAR_NODO_H
#define LISTCIRCULAR_NODO_H
#include <string>

class Nodo {
public:
    std:: string  valor;
    Nodo *next;
    Nodo *previous;
    Nodo(std:: string valor): valor(valor){}
    void printData();
};


#endif //LISTCIRCULAR_NODO_H

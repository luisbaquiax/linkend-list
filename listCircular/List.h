//
// Created by Luis on 17/03/2024.
//

#ifndef LISTCIRCULAR_LIST_H
#define LISTCIRCULAR_LIST_H
#include "Nodo.h"

class List {
public:
    List();
    int size;
    Nodo *first;
    void addFinal(Nodo *&nodo);
    Nodo *deletFinal();
    Nodo *deleByIndex(int index);
    void printList();
    void printListReverse();
};


#endif //LISTCIRCULAR_LIST_H

#include <iostream>
#include "List.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    List list;
    Nodo *nodo1 = new Nodo("1");
    Nodo *nodo2 = new Nodo("2");
    Nodo *nodo3 = new Nodo("3");
    Nodo *nodo4 = new Nodo("4");

    list.addFinal(nodo1);
    list.addFinal(nodo2);
    list.addFinal(nodo3);
    list.addFinal(nodo4);
    if (list.first != nullptr) {
        list.deleByIndex(0);
    }
    printf("print other time \n");
    list.printList();
      list.printListReverse();
    return 0;
}

//
// Created by Luis on 17/03/2024.
//

#include "List.h"
#include "iostream"

List::List() {
    size = 0;
}

void List::addFinal(Nodo *&nodo) {
    Nodo *nuevo = new Nodo(nodo->valor);
    if (size == 0) {
        first = nuevo;
        nuevo->next = first;
        nuevo->previous = first;
        first->next = nuevo;
        first->previous = nuevo;
        size++;
    } else {
        Nodo *temp = first;
        while (temp->next != first) {
            temp = temp->next;
        }
        temp->next = nuevo;
        nuevo->previous = temp;
        nuevo->next = first;
        first->previous = nuevo;
        size++;
    }
}

Nodo *List::deletFinal() {
    if (size == 1) {
        Nodo *eliminar = first;
        first = nullptr;
        size = 0;
        return eliminar;
    } else {
        Nodo *temp = first;
        while (temp->next != first) {
            temp = temp->next;
        }
        Nodo *eliminar = temp;
        temp->previous->next = temp->next;
        temp->next->previous = temp->previous;
        size--;
        return eliminar;
    }
}

Nodo *List::deleByIndex(int index) {
    Nodo *temp = nullptr;
    if (index < size) {
        if (size == 1) {
            temp = first;
            first = nullptr;
            size = 0;
        } else {
            printf("%d\n", index);
            temp = first;
            int count = 0;
            while (temp->next != first) {
                if (count == index) {
                    break;
                }
                count++;
                temp = temp->next;
            }
            if (temp == first) {
                first = temp->next;
            }
            temp->previous->next = temp->next;
            temp->next->previous = temp->previous;
            size--;
        }
    }
    return temp;
}

void List::printList() {
    if (first != nullptr) {
        Nodo *temp = first;
        printf("size %d\n", size);
        while (temp->next != first) {
            std::cout << "valor " + temp->valor << std::endl;
            temp = temp->next;
        }
        std::cout << "valor " + temp->valor << std::endl;
    }
}

void List::printListReverse() {
    if (first != nullptr) {
        Nodo *auxi = first->previous;
        Nodo *reverse = auxi;
        printf("print reverse size %d\n", size);
        while (reverse->previous != auxi) {
            std::cout << "valor " + reverse->valor << std::endl;
            reverse = reverse->previous;
        }
        std::cout << "valor " + reverse->valor << std::endl;
    }
}
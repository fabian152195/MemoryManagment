//
// Created by malavassi on 05/03/19.
//
#include <iostream>
#include "List.h"
#include "Node.h"

using namespace std;
List::List() {

first = nullptr;

}
void List::insert_inicio(int a) {
    node *nuevo_nodo;
    nuevo_nodo = new node(a);
    if (first == nullptr){
        first = nuevo_nodo;
    } else {

        nuevo_nodo->set_next(first);
        first = nuevo_nodo;
    }
}
void List::visualizar() {
    node *aux = first;
    if (this->first == nullptr){
        cout << "La lista esta vacia\n";
    }else{
        while(aux!= nullptr) {
            cout << aux->data << "\n";
            aux = aux->next;
        }
        cout << "Fin de la lista";
    }
}
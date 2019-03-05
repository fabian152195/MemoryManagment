//
// Created by malavassi on 05/03/19.
//
#include <iostream>
#include "List.h"
using namespace std;
List::List() {
first = nullptr;
}
void List::insert_inicio(int a) {
    node nuevo_nodo = node(a);
    if (!first){
        first = &nuevo_nodo;
    } else {
        nuevo_nodo.set_next(*first);
        first = &nuevo_nodo;
    }
}
void List::visualizar() {
    node *aux;
    aux = this->first;
    if (this->first = nullptr){
        cout << "La lista esta vacia\n";
    }else{
        while(aux->next) {
            cout << aux->data << "\n";
            aux = aux->next;
        }
        cout << aux->next;
        cout << "Fin de la lista";
    }

}
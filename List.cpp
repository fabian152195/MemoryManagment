//
// Created by malavassi on 05/03/19.
//
#include <iostream>
#include "List.h"
#include "node.h"

using namespace std;
List::List() {

first = nullptr;

}
void List::insert_inicio(int a) {
    size_t size = 2;
    node* nuevo_nodo;
    nuevo_nodo = new node();
    nuevo_nodo -> set_dato(a);
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
            cout << aux->get_Dato() << "\n";
            aux = aux->get_Siguiente();
        }
        cout << "Fin de la lista";
    }
}

void List::eliminar_nodofinal() {

    node *aux = this->first;

    if(aux== nullptr){
        cout << "No hay elementos en la lista" << endl;
    }
    else{
        if(aux->get_Siguiente() == nullptr){
            delete aux;
            aux->set_next(nullptr);
        }
        else{
            while(aux->get_Siguiente()->get_Siguiente()!= nullptr){
                aux = aux->get_Siguiente();
            }
            delete aux;
            aux->set_next(nullptr);
        }
    }
}
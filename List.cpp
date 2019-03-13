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
List::~List(){

}
/**
 *
 * @param a
 */
void List::insert_inicio(int a) {
    size_t size = 2;
    node *nuevo_nodo = new node();
    nuevo_nodo->set_Dato(a);
    if (first == nullptr){
        first = nuevo_nodo;
    } else {
        nuevo_nodo->set_Siguiente(first);
        first = nuevo_nodo;
    }
}
/**
 *
 */
void List::visualizar() {
    node *aux = first;
    if (this->first == nullptr){
        cout << "\nLa lista esta vacia\n";
    }else{
        cout << "\nLa lista corresponde a:\n------------------" << endl;
        while(aux!= nullptr) {
            cout << aux->get_Dato() <<": " <<static_cast<void*>(aux)<< "\n";
            aux = aux->get_Siguiente();
        }
        cout << "------------------";
    }
}

/**
 *
 */
void List::eliminar_nodofinal() {

    node *aux = this->first;

    if(aux== nullptr){
        cout << "No hay elementos en la lista" << endl;
    }
    else{
        if(aux->get_Siguiente() == nullptr){
            delete this->first;
            this->first= nullptr; //problem!!!
        }
        else{
            while(aux->get_Siguiente()->get_Siguiente()!= nullptr){
                aux = aux->get_Siguiente();
            }
            delete aux->get_Siguiente();
            aux->set_Siguiente(nullptr); //next -> null pointer
        }
    }
}
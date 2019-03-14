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
 * Inserta en la lista un nodo que almacena un integer dado
 * @param a valor entero que se desea que almacene el nuevo nodo que se inserta
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
    this->visualizar();
}
/**
 * Permite visualizar el contenido de la lista
 */
void List::visualizar() {
    node *aux = first;
    if (this->first == nullptr){
        cout << "\n------------------\nLa lista esta vacia\n------------------" << endl;
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
 * Elimina el ultimo elemento de la lista
 */
void List::eliminar_nodofinal() {

    node *aux = this->first;

    if(aux== nullptr){
        cout << "No hay elementos en la lista" << endl;
    }
    else{
        if(aux->get_Siguiente() == nullptr){
            delete this->first;
            this->first= nullptr;
        }
        else{
            while(aux->get_Siguiente()->get_Siguiente()!= nullptr){
                aux = aux->get_Siguiente();
            }
            delete aux->get_Siguiente();
            aux->set_Siguiente(nullptr);
        }
    }
    this->visualizar();
}

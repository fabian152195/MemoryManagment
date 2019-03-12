//
// Created by malavassi on 04/03/19.
//
#include<iostream>
#include "node.h"


node::node(int dato) {
    data=dato;
    next= nullptr;
}

node::node() {
    data;
    next= nullptr;
}

void* node::operator new(size_t size) {
    std::cout<< "Overloading new operator with size: " << size << std::endl;

    void* espacioMemoria = recolector.NuevoNodo();

    if (espacioMemoria == nullptr){
        node * p;
        p = ::new node();
        return p;
    } else {
        return espacioMemoria;
    }
}

void node::operator delete(void * p)
{
    std::cout<< "Overloading delete operator " << std::endl;

    recolector.ReciclarNodo(p);

    free(p);
}
void node::nuevo(){

}

void node::eliminar() {

}

void node::set_next(node *a) {
    this->next = a;
}

void node::set_dato(int dato) {
    this->data = dato;
}

node* node::get_Siguiente() const {
    return this->next;
}
int node::get_Dato() const {
    return this->data;
}

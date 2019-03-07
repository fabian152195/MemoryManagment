//
// Created by malavassi on 04/03/19.
//
#include<iostream>
#include "Node.h"


node::node() {
    data;
    next;
}
node::node(int cont) {
    data = cont;
    next = nullptr;
}

void* node::operator new(size_t size) {
    std::cout<< "Overloading new operator with size: " << size << std::endl;
    void * p = malloc(size);
    return p;
}

void node::operator delete(void * p)
{
    std::cout<< "Overloading delete operator " << std::endl;
    free(p);
}
void node::nuevo(){

}

void node::eliminar() {

}

void node::set_next(node *a) {
    this->next = a;
}
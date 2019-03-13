//
// Created by malavassi on 04/03/19.
//
#include<iostream>
#include "node.h"
#include "Collector.h"
using namespace std;


node::node(int dato) {
    data=dato;
    next= nullptr;
}

node::node() {
}

void* node::operator new(size_t size) {
    //cout<< "Overloading new operator with default size: " << size << endl;

    void* espacioMemoria;
    Collector::getInstance()->visualizar();
    espacioMemoria = Collector::getInstance()->NuevoNodo();

    if (espacioMemoria == nullptr){
        node * p = ::new node();
        cout<< "\nNodo creado con nueva direccion: " << static_cast<void*>(p) << endl;
        return p;
    } else {

        cout<< "\nNodo creado reutilizando direccion: " << static_cast<void*>(espacioMemoria) << endl;
        return espacioMemoria;
    }
}

void node::operator delete(void * p)
{
   // cout<< "Overloading delete operator " << endl;

    Collector::getInstance()->ReciclarNodo((node*) p);
    cout<< "\nNodo " << static_cast<void*>(p) << " eliminado de lista y agregado a Colector\n" << endl;

}

void node::set_next(node *a) {
    this->next = a;
}

void node::set_dato(int dato) {
    this->data = dato;
}

node* node::get_Siguiente() {
    return this->next;
}
int node::get_Dato() {
    return this->data;
}

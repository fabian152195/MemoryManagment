//
// Created by malavassi on 04/03/19.
//


#ifndef UNTITLED1_NODE_H
#define UNTITLED1_NODE_H

#include<iostream>
#include<stdlib.h>
#include "Collector.h"

class node {

    friend class Recolector;

public:
    void *operator new (size_t size);
    void operator delete(void *pointer_memory);
    node();
    node(int dato, node* pSiguiente);
    void nuevo();
    void eliminar();
    void set_next(node *a);

    Nodo* get_Siguiente () const;
    int get_Dato () const;

    //static void Limpiar ();

private:
    node *next;
    int data;
    static collector recolector;
};


#endif //UNTITLED1_NODE_H

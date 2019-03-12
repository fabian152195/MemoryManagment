//
// Created by malavassi on 04/03/19.
//


#ifndef UNTITLED1_NODE_H
#define UNTITLED1_NODE_H

#include<iostream>
#include<stdlib.h>


class node {

public:
    void* operator new (size_t size);
    void operator delete(void *pointer_memory);
    node(int dato);
    node();
    void nuevo();
    void eliminar();

    void set_next(node *a);
    void set_dato (int dato);

    node* get_Siguiente () const;
    int get_Dato () const;




    //static void Limpiar ();

private:
    node *next;
    int data;
};


#endif //UNTITLED1_NODE_H

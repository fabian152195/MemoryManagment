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
    node();
    void set_Siguiente(node *a);
    void set_Dato(int dato);
    node* get_Siguiente ();
    int get_Dato ();

private:
    node *next;
    int data;
};


#endif //UNTITLED1_NODE_H

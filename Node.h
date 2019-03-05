//
// Created by malavassi on 04/03/19.
//

#ifndef UNTITLED1_NODE_H
#define UNTITLED1_NODE_H


class node {
public:
    node(int cont);
    void nuevo();
    void eliminar();
    void set_next(node a);
    node *next;
    int data;

};


#endif //UNTITLED1_NODE_H

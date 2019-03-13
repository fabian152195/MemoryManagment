//
// Created by malavassi on 05/03/19.
//

#ifndef UNTITLED1_LIST_H
#define UNTITLED1_LIST_H

#include "node.h"

class List {
public:
    List();
    ~List();

    void insert_inicio(int dato);
    void eliminar_nodofinal();
    void visualizar();

private:

node* first;

};


#endif //UNTITLED1_LIST_H

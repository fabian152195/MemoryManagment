//
// Created by malavassi on 05/03/19.
//

#include "List.h"
List::List() {
first = nullptr;
}
void List::insert_inicio(int a) {
    node nuevo_nodo = node(a);
    if (!first){
        *first = nuevo_nodo;
    } else {
        nuevo_nodo.set_next(*first);
        first = &nuevo_nodo;
    }
}
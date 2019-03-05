//
// Created by malavassi on 04/03/19.
//

#include "Node.h"

node::node(int cont) {
    data = cont;
    next = nullptr;
}
void node::nuevo(){

}

void node::eliminar() {

}

void node::set_next(node a) {
    this->next = &a;
}
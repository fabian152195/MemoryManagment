//
// Created by malavassi on 04/03/19.
//

#include "Node.h"

node::node(node *sig, int cont) {
    *next = *sig;
    data = cont;
}
void node::nuevo(){

}

void node::eliminar() {

}
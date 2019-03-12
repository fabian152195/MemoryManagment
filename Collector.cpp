//
// Created by malavassi on 04/03/19.
//

#include "Collector.h"


collector::collector() {


}
void* collector::NuevoNodo() { // RETORNA PUNTERO PARA RECICLAR
    if(this->_p!= nullptr){
        node* aux = this->_p;
        this->set_first(_p->get_Siguiente());
        return aux;
    }else{
        return nullptr;
    }
}
void collector::ReciclarNodo(node* nodo) { //RECIBE PUNTERO PARA ALMACENAR EN LISTA
    nodo->set_next(this->get_first());
    this->set_first(nodo);
}
void collector::set_first(node *nodo){
    this->_p = nodo;
}
node* collector::get_first(){
    return this->_p;
}
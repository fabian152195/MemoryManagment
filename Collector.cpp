//
// Created by malavassi on 04/03/19.
//


#include "Collector.h"

using namespace std;

Collector* Collector::unique_instance = NULL;

Collector::Collector(void) {
}

Collector::~Collector(void) {

}

void Collector::visualizar() {
    node *aux = _p;
    if (this->_p == nullptr){
        cout << "\nColector no tiene espacios en memoria disponibles\n\n";
    }else{
        cout << "\nLas direcciones de memoria presentes en Collector son: " << endl;
        while(aux!= nullptr) {
            cout << static_cast<void*>(aux) << "\n";
            aux = aux->get_Siguiente();
        }
    }
}

void* Collector::NuevoNodo() { // RETORNA PUNTERO PARA RECICLAR
    if(this->_p!= nullptr){
        node* aux = this->_p;
        this->set_first(_p->get_Siguiente());
        aux->set_next(nullptr);
        return aux;
    }else{
        return nullptr;
    }
}

void Collector::ReciclarNodo(node* nodo) { //RECIBE PUNTERO PARA ALMACENAR EN LISTA
    nodo->set_next(this->get_first());
    this->set_first(nodo);
}
void Collector::set_first(node *nodo){
    this->_p = nodo;
}
node* Collector::get_first(){
    return this->_p;
}

//
// Created by malavassi on 04/03/19.
//

#ifndef UNTITLED1_COLLECTOR_H
#define UNTITLED1_COLLECTOR_H

#include "List.h"
#include "node.h"

class Collector {

private:
    node* first;
    Collector();
    static Collector* unique_instance;

public:
    ~ Collector();
    void Limpiar (); //
    void* NuevoNodo (); // RETORNA PUNTERO PARA RECICLAR
    void ReciclarNodo (node* nodo); //RECIBE PUNTERO PARA ALMACENAR EN LISTA
    void set_first(node *nodo);
    node* get_first();
    void visualizar();
    static Collector *getInstance(){
        if(unique_instance == NULL){
            unique_instance = new Collector();
        }
        return unique_instance;
    };
};


#endif //UNTITLED1_COLLECTOR_H

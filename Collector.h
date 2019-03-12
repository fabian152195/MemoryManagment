//
// Created by malavassi on 04/03/19.
//

#ifndef UNTITLED1_COLLECTOR_H
#define UNTITLED1_COLLECTOR_H

#include "List.h";
#include "node.h";

class collector {

public:
        collector();
        ~ collector();

    void Limpiar (); //
    void* NuevoNodo (); // RETORNA PUNTERO PARA RECICLAR
    void ReciclarNodo (node* nodo); //RECIBE PUNTERO PARA ALMACENAR EN LISTA
    void set_first(node *nodo);
    node* get_first();

private:
    node* _p;

};



#endif //UNTITLED1_COLLECTOR_H

//
// Created by malavassi on 04/03/19.
//

#ifndef UNTITLED1_COLLECTOR_H
#define UNTITLED1_COLLECTOR_H

#include "List.h";

class collector {

public:
        collector();
        ~ collector();

    void Limpiar (); //
    node* NuevoNodo (); // RETORNA PUNTERO PARA RECICLAR
    void ReciclarNodo (node* nodo); //RECIBE PUNTERO PARA ALMACENAR EN LISTA
    void set_first(node *nodo);
    node* get_first();

private:
    Nodo* _p;

};



#endif //UNTITLED1_COLLECTOR_H

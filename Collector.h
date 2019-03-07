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

    void Limpiar ();
    void* NuevoNodo ();
    void ReciclarNodo (void* nodo);

private:
    Nodo* _p;

};



#endif //UNTITLED1_COLLECTOR_H

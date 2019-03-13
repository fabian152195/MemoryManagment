#include <iostream>
#include "List.h"

int main() {
    std::cout << "\nPRUEBAS!" << std::endl;

    List list;
    list.insert_inicio(2);
    list.eliminar_nodofinal();
    list.insert_inicio(3);
    list.insert_inicio(4);

    list.eliminar_nodofinal();
    list.eliminar_nodofinal();

    list.insert_inicio(5);
    list.insert_inicio(4);
    list.visualizar();

    return 0;
}
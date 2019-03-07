#include <iostream>
#include "List.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    List list;
    list.insert_inicio(2);
    list.insert_inicio(3);
    list.insert_inicio(4);
    list.visualizar();




    return 0;
}
#include <iostream>
#include "Node/Node.h"
#include "List/List.h"
#include "Collector/Collector.h"

/*
 * Inicializa el programa
 * @Return
 */
int main() {
    List list = List();
    list.showList();
    list.addFirst(12);
    list.addFirst(3);
    list.addFirst(6);
    list.addFirst(4);
    list.addFirst(6);
    list.showList();
    list.deleteNode(0);
    list.deleteNode(0);
    list.showList();
    return 0;
}


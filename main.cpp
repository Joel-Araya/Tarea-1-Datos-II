#include <iostream>
#include "Node/Node.h"
#include "List/List.h"
#include "Collector/Collector.h"

int main() {
    List list = List();
    //Collector collector = Collector();
    //list.setCollector(collector);

    list.showList();

    list.addFirst(12);
    list.addFirst(3);
    list.addFirst(6);
    list.addFirst(4);
    list.addFirst(6);

    //list.showList();

    list.showList();



    list.deleteNode(0);
    list.deleteNode(0);
    list.showList();

    //cout<<"\nCollector de la lista es "<<list.getCollector();

    list.getCollector()->showListPtrs();

    return 0;
}


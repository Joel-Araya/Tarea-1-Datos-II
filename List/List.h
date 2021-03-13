//
// Created by joel on 10/3/21.
//

#ifndef TAREA_1_LIST_H
#define TAREA_1_LIST_H
#include "../Node/Node.h"
#include <iostream>

using namespace std;

/*
 * Estructura de datos basada en una lista enlazada que permite guarda varios nodos
 */
class List
{
private:
    Node* start = NULL;
    Collector* collector;
public:
    Collector *getCollector() const;
    List();
    ~List();
    void addFirst(int value);
    Node* getFirst();
    void showList();
    void setCollector(Collector collector1);
    Node* get(int n);
    void deleteNode(int n);
};


#endif //TAREA_1_LIST_H

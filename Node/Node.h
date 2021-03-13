//
// Created by joel on 10/3/21.
//

#ifndef TAREA_1_NODE_H
#define TAREA_1_NODE_H


#include <clocale>
#include <iostream>
#include "../Collector/Collector.h"

using namespace std;
/*
 * Genera un objeto de la clase nodo y que contiene un valor y un puntero al siguiente nodo
 */
class Node
{
private:
    int value;
    Node* ptrNext=NULL;
public:

    Node(int);
    ~Node();
    int getValue();
    void setValue(int);
    void setPtrNext(Node*);
    Node * getNext();
    void printNode();
    void* operator new(size_t size);
    void operator delete (void *pVoid);
    static Collector collector;
};


#endif //TAREA_1_NODE_H

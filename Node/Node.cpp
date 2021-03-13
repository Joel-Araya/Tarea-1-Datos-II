//
// Created by joel on 10/3/21.
//

#include "Node.h"
#include <iostream>


using namespace std;

/*
 * Retorna el puntero del node siguiente en la lista
 * @Return el puntero al nodo siguiente ptrNext
 */
Node* Node::getNext() {
    return ptrNext;
}

/*
 * Constructor de la clase Node
 * @Param value
 */
Node::Node(int _value) {
    setValue(_value);
    //cout<<"Direcion de collector "<<&collector<<endl;

}

Collector Node::collector = Collector();

/*
 * Destructor de la clase Node
 */
Node::~Node() {
    //delete this;
}

/*
 * Retorna el valor correspondiente al nodo
 * @Return el valor del nodo value
 */
int Node::getValue() {
    return value;
}

/*
 * Permite definir el valor del Nodo
 * @Param _value
 */
void Node::setValue(int _Value){
    value = _Value;
}

/*
 * Permite definir el puntero al siguiente nodo
 * @Param Node
 */
void Node::setPtrNext(Node* node){
    ptrNext = node;
}

/*
 * Muestra el valor del nodo en consola
 */
void Node::printNode(){
    cout<<value<<endl;
}

/*
 * Crea un nuevo nodo al usar el operador new
 * @Param size
 * @Return un puntero al nodo nuevo
 */
void *Node::operator new(size_t size) {
    //cout << "Node::new()" << endl;
    void * p = ::new Node(0);
    //cout<<"Se reservo un espacio de "<<size<<endl;
    return p;
}
/*
 * Envia el puntero de los nodos eliminados al collector
 * @Param el puntero del nodo elminado *pVoid
 */
void Node::operator delete(void *pVoid) {
    cout << "\nNode::delete(), ";
    collector.getNode(pVoid);
    //free(pVoid);
}





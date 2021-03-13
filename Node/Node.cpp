//
// Created by joel on 10/3/21.
//

#include "Node.h"
#include <iostream>


using namespace std;

Node* Node::getNext() {
    return ptrNext;
}

Node::Node(int _value) {
    setValue(_value);
    //cout<<"Direcion de collector "<<&collector<<endl;

}

int Node::check = 0;
Collector Node::collector = Collector();


Node::~Node() {
    //delete this;
}

int Node::getValue() {
    return value;
}

void Node::setValue(int _Value){
    value = _Value;
}

void Node::setPtrNext(Node* node){
    ptrNext = node;
}

void Node::printNode(){
    cout<<value<<endl;
}

void *Node::operator new(size_t size) {
    //cout << "Node::new()" << endl;
    void * p = ::new Node(0);
    //cout<<"Se reservo un espacio de "<<size<<endl;
    return p;
}

void Node::operator delete(void *pVoid) {
    cout << "\nNode::delete(), ";
    collector.getNode(pVoid);
    free(pVoid);
}





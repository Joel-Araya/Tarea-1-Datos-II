//
// Created by joel on 10/3/21.
//

#include "Collector.h"


/*
 * Contructor de collector
 */
Collector::Collector()
{
}

/*
 * Destructor de collector
 */
Collector::~Collector()
{
}

/*
 * Agrega a collector la dirección de memoria del nodo eliminado
 * @Param ptrNode
 */
void *Collector::getNode(void* ptrNode) {
    cout<<"en collector ha ingresado el nodo con direccion "<<ptrNode<<endl;
    vect.push_back(ptrNode);
}

/*
 * Muestra los datos almacenados en collector
 */
void Collector::showListPtrs() {
    if (vect.empty()){
        cout<<"El collector se encuentra vacio";
    } else {
        cout<<vect.size()<<endl;


/*        for (int i = 0; i < vect.size(); ++i) {
            cout<<vect[i]<<endl;
        }*/
    }
}

/*void Collector::recycle(){
    if(list.getFirst()==NULL){

    } else {

    }
}

List Collector::getList(){
    list.showList();
    return list;
}*/
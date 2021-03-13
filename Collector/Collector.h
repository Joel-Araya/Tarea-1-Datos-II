//
// Created by joel on 10/3/21.
//
#include <iostream>
#ifndef TAREA_1_COLLECTOR_H
#define TAREA_1_COLLECTOR_H
#include <array>
#include <vector>

using namespace std;
//#include "../List/List.h"

class Collector
{
private:
    vector<void*> vect;


public:
    Collector();
    ~Collector();
    //void recycle();
    void showListPtrs();
    void * getNode(void *);

};


#endif //TAREA_1_COLLECTOR_H

//
// Created by bryang2303 on 6/3/21.
//
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Node.h"


#ifndef TAREAEXTRACLASE1_COLLECTOR_H
#define TAREAEXTRACLASE1_COLLECTOR_H


using namespace std;

template <class T>

class Collector
{
public:
    Collector();
    ~Collector();

    void Delete(T);
    void del_by_data(T);
    void print();

private:
    Node<T> *m_head;
    int m_num_nodes;
};


#endif //TAREAEXTRACLASE1_COLLECTOR_H

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
    // Constructores
    Collector();
    ~Collector();
    // Metodos
    void Delete(Node<T>*,T);
    void New();
    void print();
    // Sets y Gets
    auto get_Head();
    auto get_nodeE();
    void set_Head(Node<T>*);
    void set_nodeE(Node<T>*);
    // Atributos
private:
    Node<T> *nodoE;
    Node<T> *head;
    int m_num_nodes;
};
#endif //TAREAEXTRACLASE1_COLLECTOR_H

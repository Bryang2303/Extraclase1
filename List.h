//
// Created by bryang2303 on 3/3/21.
//
//
// Created by bryang2303 on 3/3/21.
//

#ifndef LIST_H
#define LIST_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Node.h"
#include "Node.cpp"

using namespace std;

template <class T>

class List
{
public:
    List();
    ~List();

    void New(T);
    void Delete(T);
    auto get_nodeE();
    void print();

private:
    Node<T> *nodoE;
    Node<T> *m_head;
    int m_num_nodes;
};

#endif // LIST_H
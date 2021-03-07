//
// Created by bryang2303 on 3/3/21.
//

#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <class T>

class Node
{
public:
    Node();
    Node(T);
    ~Node();

    Node *next;
    T data;

    void print();
};

#endif // NODE_H

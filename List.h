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
    // Constructores
    List();
    ~List();
    // Metodos
    void New(T);  // Sobrecarga
    void New(Node<T>*,T); // Sobrecarga
    void Delete(T);
    auto get_Head();
    auto get_nodeE();
    void set_Head(Node<T>*);
    void set_nodeE(Node<T>*);
    void print();
private:
    // Atributos
    Node<T> *nodoE;
    Node<T> *head;
    int m_num_nodes;
};

#endif // LIST_H
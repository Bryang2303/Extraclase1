#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
    // Constructores
    Node();
    Node(T);
    ~Node();
    // Metodos
    auto get_Valor();
    auto get_Siguiente();
    void set_Valor(int data_);
    void set_Siguiente(Node<T>* next_);
    // Atributos
    Node *next;
    T data;

    void print();
};

#endif // NODE_H

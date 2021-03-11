//
// Created by bryang2303 on 3/3/21.
//

#include "List.h"

using namespace std;

// Constructor por defecto
template<typename T>
List<T>::List()
{
    m_num_nodes = 0;
    head = NULL;
    nodoE = NULL;
}

// Insertar al inicio
template<typename T>
void List<T>::New(T data_)
{
    cout << "nodo E EEEEESSS " << nodoE << endl;

    Node<T> *temp = head;
    Node<T> *new_node = new Node<T> (data_);
    if (!head) {
        cout << "DOOS" << new_node << endl;
        head = new_node;
    } else {
        new_node->next = head;

        cout << "TREES" << new_node << endl;
        head = new_node;

        while (temp) {
            temp = temp->next;
        }
    }
    m_num_nodes++;
}

// Insertar al inicio
template<typename T>
void List<T>::New(Node<T>* newPtr,T data_)
{

    Node<T> *temp = head;

    if (!head) {
        Node<T> *new_node2 = new Node<T> (data_);
        new_node2 = newPtr;
        new_node2->data = data_;
        cout << "UNOO" << new_node2 << endl;
        head = new_node2;
    } else {
        Node<T> *new_node2 = new Node<T> (data_);
        new_node2 = newPtr;
        new_node2->data = data_;
        new_node2->next = head;
        cout << "UNOO" << new_node2 << endl;
        head = new_node2;

        while (temp) {
            temp = temp->next;
        }
    }
    m_num_nodes++;
}

// Imprimir la Lista
template<typename T>
void List<T>::print()
{
    Node<T> *temp = head;
    if (!head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
            temp = temp->next;
        }
    }
    cout << endl << endl;
}
template<typename T>
auto List<T>::get_nodeE() {
    cout << nodoE << endl;
    return nodoE;
}

// Eliminar por data del nodo
template<typename T>
void List<T>::Delete(T data_) {
    Node<T> *temp = head;
    Node<T> *temp1 = head->next;

    int cont = 0;
    nodoE = head->next;

    if (head->data == data_) {
        nodoE = head;
        head = temp->next;

    } else {
        while (temp1) {
            if (temp1->data == data_) {

                Node<T> *aux_node = temp1;

                cout << temp1 << endl;
                //cout << temp1->data << endl;
                //cout << temp1->next << endl;


                temp->next = temp1->next;

                delete aux_node;
                cont++;
                m_num_nodes--;
            }
            if (cont!=0){
                cout << temp1 << endl;
                nodoE = temp1;
                nodoE->data = data_;

            }
            temp = temp->next;
            temp1 = temp1->next;
            cout << nodoE << endl;
            cout << nodoE->data << endl;

        }
    }
}

template<typename T>
auto List<T>::get_Head() {
    return head;
}
template<typename T>
void List<T>::set_Head(Node<T> *newhead) {
    head = newhead;
}
template<typename T>
void List<T>::set_nodeE(Node<T> *newNodeE) {
    nodoE = newNodeE;
}


template<typename T>
List<T>::~List() {}

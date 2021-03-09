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
    m_head = NULL;
    nodoE = NULL;
}

// Insertar al inicio
template<typename T>
void List<T>::New(T data_)
{
    cout << nodoE << endl;

    Node<T> *temp = m_head;

    if (!m_head) {
        Node<T> *new_node = new Node<T> (data_);
        cout << new_node << endl;
        m_head = new_node;
    } else {
        Node<T> *new_node = new Node<T> (data_);
        new_node->next = m_head;
        cout << new_node << endl;
        m_head = new_node;

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
    Node<T> *temp = m_head;
    if (!m_head) {
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
    Node<T> *temp = m_head;
    Node<T> *temp1 = m_head->next;

    int cont = 0;
    nodoE = m_head->next;

    if (m_head->data == data_) {
        nodoE = m_head;
        m_head = temp->next;

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
List<T>::~List() {}

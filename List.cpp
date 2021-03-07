//
// Created by bryang2303 on 6/3/21.
//

#include "List.h"
#include "Collector.h"

using namespace std;

// Constructor por defecto
template<typename T>
List<T>::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}

// Insertar al inicio
template<typename T>
void List<T>::add_head(T data_)
{


    Node<T> *temp = m_head;

    if (!m_head) {
        Node<T> *new_node = new Node<T> (data_);
        m_head = new_node;
    } else {
        Node<T> *new_node = new Node<T> (data_);
        new_node->next = m_head;
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

// Eliminar por data del nodo
template<typename T>
void List<T>::del_by_data(T data_) {
    Node<T> *temp = m_head;
    Node<T> *temp1 = m_head->next;

    int cont = 0;

    if (m_head->data == data_) {
        m_head = temp->next;
    } else {
        while (temp1) {
            if (temp1->data == data_) {
                Node<T> *aux_node = temp1;
                temp->next = temp1->next;
                //cout << aux_node << endl;
                delete aux_node;
                cont++;
                m_num_nodes--;
            }
            temp = temp->next;
            temp1 = temp1->next;

        }
    }
}

template<typename T>
List<T>::~List() {}

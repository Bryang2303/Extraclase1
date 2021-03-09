#include "Collector.h"

using namespace std;

// Constructor por defecto
template<typename T>
Collector<T>::Collector()
{
    m_num_nodes = 0;
    m_head = NULL;
}

// Insertar al inicio
template<typename T>
void Collector<T>::Delete(Node<T>* freeNode,T data_)
{
    Node<T> *temp = m_head;

    if (!m_head) {
        Node<T> *new_node = new Node<T> (data_);
        m_head = new_node;
        new_node = freeNode;
        cout << "La poscicion de memoria (" << new_node << ") del nodo eliminado de la lista (" << data_ << ") ha sido recolectada." << endl;
    } else {
        Node<T> *new_node = new Node<T> (data_);
        new_node->next = m_head;
        m_head = new_node;
        new_node = freeNode;
        cout << "La poscicion de memoria (" << new_node << ") del nodo eliminado de la lista (" << data_ << ") ha sido recolectada" << endl;

        while (temp) {
            temp = temp->next;
        }
    }
    m_num_nodes++;
}

// Imprimir la Lista
template<typename T>
void Collector<T>::print()
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
auto Collector<T>::get_Head() {
    return m_head;
}

// Eliminar por data del nodo
template<typename T>
void Collector<T>::New(T data_) {
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
Collector<T>::~Collector() {}

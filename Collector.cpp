#include "Collector.h"

using namespace std;

// Constructor por defecto
template<typename T>
Collector<T>::Collector()
{
    m_num_nodes = 0;
    head = NULL;
}

// Insertar al inicio
template<typename T>
void Collector<T>::Delete(Node<T>* freeNode,T data_)
{
    Node<T> *temp = head;
    Node<T> *new_node = new Node<T> (data_);
    if (!head) {
        freeNode->next=NULL;
        new_node = freeNode;
        //freeNode = new_node;
        head = new_node;
        //cout << "HEAD " << head << " Data del head " << head->data << endl;
        cout << "La poscicion de memoria (" << freeNode << ") del nodo eliminado de la lista (" << freeNode->next << ") ha sido recolectada." << endl;

    } else {

        new_node = freeNode;
        new_node->next = head;
        //freeNode->next = head;
        //new_node = freeNode;
        head = new_node;

        //cout << "HEAD " << head << " Data del head " << head->data << endl;
        cout << "La poscicion de memoria (" << freeNode << ") del nodo eliminado de la lista (" << freeNode->next << ") ha sido recolectada" << endl;

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
auto Collector<T>::get_Head() {
    return head;
}
template<typename T>
auto Collector<T>::get_nodeE() {
    return nodoE;
}

template<typename T>
void Collector<T>::set_Head(Node<T> *newhead) {
    head = newhead;
}
template<typename T>
void Collector<T>::set_nodeE(Node<T> *newNodeE) {
    nodoE = newNodeE;
}

// Eliminar por data del nodo
template<typename T>
void Collector<T>::New() {
    Node<T> *temp = head;
    Node<T> *temp1 = head->next;

    int cont = 0;
    nodoE = head->next;

    if (head==head) {
        nodoE = head;
        head = temp->next;

    }


}

template<typename T>
Collector<T>::~Collector() {}

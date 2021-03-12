#include "Collector.h"
using namespace std;
// Constructor por defecto
template<typename T>
Collector<T>::Collector(){
    m_num_nodes = 0;
    head = NULL;
}
// Sucede al eliminar un nodo de la lista, este es recolectado
template<typename T>
void Collector<T>::Delete(Node<T>* freeNode,T data_)
{
    Node<T> *temp = head;                       //temporal para el movimiento en la lista
    Node<T> *new_node = new Node<T> (data_);    //EL nodo a agregar en el Collector
    if (!head) {
        freeNode->next=NULL;                    //Se limpia la poscicion siguiente del nodo eliminado de la lista enlazada
        new_node = freeNode;                    //El nodo creado anteriormente es asignado como la posicion de memoria reciclada
        //freeNode = new_node;
        head = new_node;                        //La cabeza del collector ahora sera el nodo ingresado
        // Ahora se muestra la posicion del nodo reciclado, al igual que su valor
        cout << "La poscicion de memoria (" << freeNode << ") del nodo eliminado de la lista (" << freeNode->data << ") ha sido recolectada." << endl;

    } else {
        new_node = freeNode;                    //El nodo creado anteriormente es asignado como la posicion de memoria reciclada, de manera que este queste como la cabeza
        new_node->next = head;
        head = new_node;
        // Ahora se muestra la posicion del nodo reciclado, al igual que su valor
        cout << "La poscicion de memoria (" << freeNode << ") del nodo eliminado de la lista (" << freeNode->data << ") ha sido recolectada" << endl;

        //Movimiento en la lista
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
    if (!head) {            // Si el collector esta vacio
        cout << "Collector esta vacio " << endl;
    } else {
        while (temp) {      // Si no, se recorre y en el proceso, cada nodo imprime su valor
            temp->print();
            if (!temp->next) cout << "NULL";
            temp = temp->next;
        }
    }
    cout << endl;
}

template<typename T>  // Obtener cabeza del Collector
auto Collector<T>::get_Head() {
    return head;
}
template<typename T>  // Obtener nodoE
auto Collector<T>::get_nodeE() {
    return nodoE;
}
template<typename T>  // Definir cabeza del Collector
void Collector<T>::set_Head(Node<T> *newhead) {
    head = newhead;
}
template<typename T>  // Definir nodoE
void Collector<T>::set_nodeE(Node<T> *newNodeE) {
    nodoE = newNodeE;
}
// Antes de ingresar un nodo a la lista, el Collector cedera su pocision reciclada que este en la cabeza del mismo
template<typename T>
void Collector<T>::New() {
    Node<T> *temp = head;
    Node<T> *temp1 = head->next;
    int cont = 0;
    nodoE = head->next;
    if (head==head) {
        nodoE = head;    // nodo que saldra del Collector
        head = temp->next;
    }
}
template<typename T>
Collector<T>::~Collector() {}

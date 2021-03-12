#include "List.h"
using namespace std;
// Constructor por defecto
template<typename T>
List<T>::List(){
    m_num_nodes = 0;
    head = NULL;
    nodoE = NULL;
}
// Insertar al inicio de la lista
template<typename T>
void List<T>::New(T data_)
{
    Node<T> *temp = head;           // Temporal usado para el recorrido
    Node<T> *new_node = new Node<T> (data_); // Nuevo nodo
    if (!head) {                    // Si la lista esta vacia
        head = new_node;            // El nuevo nodo creado sera la cabeza
    } else {
        new_node->next = head;
        head = new_node;            // Ahora la cabeza es el nuevo nodo creado
        while (temp) {
            temp = temp->next;      // Recorrer la lista
        }
    }
    cout << new_node << endl;
    m_num_nodes++;
}
// Insertar al inicio de la lista
template<typename T>
void List<T>::New(Node<T>* newPtr,T data_)    // La posicion de memoria obtenido del Collector (si la hay) se utiliza para la creacion de un nodo en la lista
{
    Node<T> *temp = head;
    if (!head) {                              // Si esta es vacia
        Node<T> *new_node2 = new Node<T> (data_);   // Cree el nuevo nodo, cambiando el valor que tenia el nodo reciclado por el que se quiere asignar
        new_node2 = newPtr;                   // Se le establece la posicion en memoria del nodo reciclado al nuevo nodo
        new_node2->data = data_;
        head = new_node2;                     // Este ahora es la cabeza de la lista
        cout << new_node2 << endl;
    } else {        // Si no, se repite el proceso
        Node<T> *new_node2 = new Node<T> (data_);
        new_node2 = newPtr;
        new_node2->data = data_;
        new_node2->next = head;  // Pero se establece que el puntero siguiente ahora apunta a la cabeza de la lista, antes de que esta pase a ser el nodo ingresado
        head = new_node2;
        cout << new_node2 << endl;

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
    if (!head) {            // Si la lista esta vacia
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {      // Si no, imprima el valor de cada nodo de esta
            temp->print();
            if (!temp->next) cout << "NULL";
            temp = temp->next;
        }
    }
    cout << endl << endl;
}
template<typename T>
// Obtener la posicion en memoria del ultimo nodo eliminado
auto List<T>::get_nodeE() {
    cout << nodoE << endl;
    return nodoE;
}
// Eliminar por data del nodo
template<typename T>
void List<T>::Delete(T data_) {
    Node<T> *temp = head;           // Temporales para el recorrido de la lista
    Node<T> *temp1 = head->next;
    int cont = 0;
    nodoE = head->next;             // Nodo que se va a eliminar
    if (head->data == data_) {      // Si la cabeza de la lista coincide en valor con el nodo a eliminar buscado
        nodoE = head;               // El nodo a eliminar es la cabeza
        head = temp->next;
    } else {
        while (temp1) {
            if (temp1->data == data_) {    // Si el valor de la temporal, es igual al del nodo que se busca eliminar
                Node<T> *aux_node = temp1;
                //cout << temp1 << endl;
                temp->next = temp1->next;
                delete aux_node;  // ELiminne el nodo, posteriormente es enviado a Collector
                cont++;
                m_num_nodes--;
            }
            if (cont!=0){
                //cout << temp1 << endl;
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
template<typename T>  // Obtener la cabeza de la lista
auto List<T>::get_Head() {
    return head;
}
template<typename T>  // Definir la cabeza de la lista
void List<T>::set_Head(Node<T> *newhead) {
    head = newhead;
}
template<typename T>  // Definir el nodoE
void List<T>::set_nodeE(Node<T> *newNodeE) {
    nodoE = newNodeE;
}
template<typename T>
List<T>::~List() {}

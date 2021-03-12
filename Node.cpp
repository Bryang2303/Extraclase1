#include "Node.h"
// Constructor por defecto
template<typename T>
Node<T>::Node()
{
    data = NULL;
    next = NULL;
}
// Constructor por parámetro
template<typename T>
Node<T>::Node(T data_)
{
    data = data_;
    next = NULL;
}
// Imprimir un Nodo
template<typename T>
void Node<T>::print()
{
    //cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
    cout << data << "-> ";
}
template<typename T>  // Obtener valor de un nodo
auto Node<T>::get_Valor(){
    return data;
}
template<typename T>  // Obtener puntero al siguiente de un nodo
auto Node<T>::get_Siguiente(){
    return next;
}
template<typename T>  // Definir el valor de un nodo
void Node<T>::set_Valor(int data_) {
    data = data_;
}
template<typename T>  // Definir el puntero al siguiente de un nodo
void Node<T>::set_Siguiente(Node<T> *siguiente) {
    next = siguiente;
}
template<typename T>
Node<T>::~Node() {}
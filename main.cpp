
#include <iostream>
#include <stdlib.h>

#include "List.h"
#include "List.cpp"
#include "Collector.h"
#include "Collector.cpp"

using namespace std;

int main()
{
    List<int> list_1;
    Collector<int> list_2;

    int ele;

    cout << "Lista A al inicio " << endl;
    list_1.print();

    do {
        cout << "Seleccione la accion que desea realizar: " << endl;
        cout << "1: agregar un elemento a la lista " << endl;
        cout << "2: eliminar un elemento de la lista " << endl;
        cout << "0: cerrar programa  " << endl;

        cin >> ele;
        if (ele==1){
            cout << "Lista hasta el momento: "<< endl;
            list_1.print();
            cout << "Recolector hasta el momento: " << endl;
            list_2.print();
            cout << "Ingrese el valor a agregar a la lista" << endl;
            cin >> ele;
            if (!list_2.get_Head()){
                list_1.New(ele);
                list_1.print();

            } else {
                auto a = list_2.get_Head();
                list_2.New();
                list_1.New(a,ele);
                list_1.print();


            }

        } else if (ele==2){
            cout << "Elimina un elemento de la lista: " << endl;
            cin >> ele;
            list_1.Delete(ele);
            cout << "SIGAAAA" << endl;
            list_2.Delete(list_1.get_nodeE(),list_1.get_nodeE()->data);
            list_2.print();
            list_1.print();
        }

    } while (ele!=0);
    cout << "Programa finalizado" << endl;


    return 0;
}
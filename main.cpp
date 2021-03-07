
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

    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    list_1.add_head(ele);
    list_1.print();

    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    list_1.add_head(ele);
    list_1.print();

    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    list_1.add_head(ele);
    list_1.print();

    cout << "Elimina un elemento de la lista: " << endl;
    cin >> ele;
    list_1.del_by_data(ele);
    list_1.print();
    //list_2.Delete();




    return 0;
}
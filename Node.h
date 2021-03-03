//
// Created by bryang2303 on 2/3/21.
//

#ifndef TAREAEXTRACLASE1_NODE_H
#define TAREAEXTRACLASE1_NODE_H

class Node {
private:
    int valor{};
    int siguiente{};
public:
    Node(int valor, int siguiente);
    void MostrarValor();
};

#endif //TAREAEXTRACLASE1_NODE_H

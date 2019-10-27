#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
private:
    int *data;
    Node **pointers;
    bool leaf;
public:
    Node();
    Node(int degree, int data, int data_pos);
    ~Node();
    bool isLeaf() const;
    int *getData() const;
    Node **getPointers() const;
    bool isValid() const;
};

#endif

#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node {
private:
    int *data;
    Node **pointers;
    bool leaf;
    size_t size;
    void sort();
    bool isSorted() const;
public:
    Node();
    Node(int degree);
    ~Node();
    bool isLeaf() const;
    int *getData() const;
    Node **getPointers() const;
    bool isValid() const;
    void add(int n);
};

#endif

#ifndef B_PLUS_TREE
#define B_PLUS_TREE

#include "Node.h"

#include <iostream>

class BPlusTree {
private:
    Node *root;
    int degree;
public:
    BPlusTree(int degree);
    ~BPlusTree();
    Node *getRoot() const;
    void insert(int n);
    void remove(int n);
};

#endif

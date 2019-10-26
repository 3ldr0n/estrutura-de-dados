#include "BPlusTree.h"

BPlusTree::BPlusTree(int degree)
{
    this->degree = degree;
    this->root = NULL;
}

BPlusTree::~BPlusTree()
{
    delete root;
}

Node *BPlusTree::getRoot() const
{
    return root;
}

void BPlusTree::insert(int n)
{
    if (root == NULL)
        root = new Node(degree, n, 0);
}

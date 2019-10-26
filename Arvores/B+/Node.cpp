#include "Node.h"

Node::Node(int degree, int data, int data_pos)
{
    this->data = new int[degree];
    this->data[data_pos] = data;
}

Node::~Node()
{
    delete data;
}

bool Node::isLeaf() const
{
    return leaf;
}

int *Node::getData() const
{
    return data;
}

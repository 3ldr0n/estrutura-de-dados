#include "Node.h"

Node::Node(){}

Node::Node(int degree, int data, int data_pos)
{
    this->data = new int[degree - 1];
    this->data[data_pos] = data;
    this->pointers = new Node*[degree];
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

Node **Node::getPointers() const
{
    return pointers;
}

bool Node::isValid() const
{
    return data == NULL;
}

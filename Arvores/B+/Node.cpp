#include "Node.h"

Node::Node(){}

Node::Node(int degree)
{
    this->data = new int[degree - 1];
    this->pointers = new Node*[degree];
    this->size = 0;
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

void Node::add(int n)
{
    data[size] = n;
    sort();
    size++;
}

void Node::sort()
{
    for (size_t i = 0;i < size;i++) {
        for (size_t j = 0;j < size;j++) {
            if (data[j] > data[j+1]) {
                int aux = data[j];
                data[j] = data[j+1];
                data[j+1] = aux;
            }
        }
    }
}

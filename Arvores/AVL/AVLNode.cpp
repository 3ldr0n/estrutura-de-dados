#include "AVLNode.h"
#include <iostream>

AVLNode::AVLNode()
{
    left = NULL;
    right = NULL;
    height = 0;
}

AVLNode::AVLNode(int valor)
{
    left = NULL;
    right = NULL;
    data = valor;
    height = 0;
}
AVLNode::~AVLNode()
{
    delete left;
    delete right;
}
void AVLNode::setData(int d)
{
    data = d;
}
int AVLNode::getData()
{
    return data;
}

void AVLNode::setLeft(AVLNode *node)
{
    left = node;
}
AVLNode* AVLNode::getLeft()
{
    return left;
}

void AVLNode::setRight(AVLNode *node)
{
    right = node;
}
AVLNode* AVLNode::getRight()
{
    return right;
}

void AVLNode::setHeight(int h)
{
    height = h;
}

int AVLNode::getHeight()
{
    return height;
}

#ifndef AVLTREE_H
#define AVLTREE_H

#include "AVLNode.h"

class AVLTree
{
public:
    AVLTree();
    virtual ~AVLTree();
    AVLNode* getRoot();
    bool isEmpty();
    int height();
    int countNodes();
    void insert(int valor);
    void insertLeft(int valor, AVLNode *node);
    void insertRight(int valor, AVLNode *node);
    void preOrder();
    void posOrder();
    void inOrder();
    void reverseOrder();
private:
    AVLNode *root;
    int height(AVLNode*);
    int countNodes(AVLNode*);
    AVLNode* insert(AVLNode*, int);
    void preOrder(AVLNode *no);
    void posOrder(AVLNode *no);
    void inOrder(AVLNode *no);
    AVLNode* rotateLL(AVLNode*);
    AVLNode* rotateRR(AVLNode*);
    AVLNode* rotateLR(AVLNode*);
    AVLNode* rotateRL(AVLNode*);
    void reverseOrder(AVLNode*);
    int maximo(int, int);
};

#endif

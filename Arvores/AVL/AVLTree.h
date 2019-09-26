#ifndef AVLTREE_H
#define AVLTREE_H

#include "AVLNode.h"

class AVLTreePrivateTest;

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
    void preOrder();
    void posOrder();
    void inOrder();
    void reverseOrder();
private:
    AVLNode *root;
    int height(AVLNode*);
    int countNodes(AVLNode*);
    AVLNode* insert(AVLNode*, int);
    void insertLeft(int valor, AVLNode *node);
    void insertRight(int valor, AVLNode *node);
    void preOrder(AVLNode*);
    void posOrder(AVLNode*);
    void inOrder(AVLNode*);
    AVLNode *rotateLL(AVLNode*);
    AVLNode *rotateRR(AVLNode*);
    AVLNode *rotateLR(AVLNode*);
    AVLNode *rotateRL(AVLNode*);
    void reverseOrder(AVLNode*);
    int max(int, int);
    friend class AVLTreePrivateTest;
};

#endif

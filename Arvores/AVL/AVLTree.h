#ifndef AVLTREE_H
#define AVLTREE_H

#include "AVLNode.h"

class AVLTreePrivateTest;

class AVLTree
{
public:
    AVLTree();
    virtual ~AVLTree();
    AVLNode* getRoot() const;
    bool isEmpty() const;
    int height() const;
    int countNodes() const;
    void insert(int value);
    void preOrder() const;
    void posOrder() const;
    void inOrder() const;
    void reverseOrder() const;
private:
    AVLNode *root;
    int height(AVLNode*) const;
    int countNodes(AVLNode*) const;
    AVLNode* insert(AVLNode*, int);
    void insertLeft(int value, AVLNode *node);
    void insertRight(int value, AVLNode *node);
    void preOrder(AVLNode*) const;
    void posOrder(AVLNode*) const;
    void inOrder(AVLNode*) const;
    AVLNode *rotateLL(AVLNode*);
    AVLNode *rotateRR(AVLNode*);
    AVLNode *rotateLR(AVLNode*);
    AVLNode *rotateRL(AVLNode*);
    void reverseOrder(AVLNode*) const;
    int max(int, int) const;
    friend class AVLTreePrivateTest;
};

#endif

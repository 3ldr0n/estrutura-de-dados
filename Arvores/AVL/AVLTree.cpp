#include "AVLTree.h"
#include <iostream>

using namespace std;

AVLTree::AVLTree()
{
    root = NULL;
}

AVLTree::~AVLTree()
{
    delete root;
}

bool AVLTree::isEmpty()
{
    return root == NULL;
}

int AVLTree::height()
{
	return height(root);
}

int AVLTree::height(AVLNode *no)
{
	return no == NULL ? -1 : no->getHeight();

}

int AVLTree::maximo(int lhs, int rhs)
{
    return lhs > rhs ? lhs : rhs;
}

int AVLTree::countNodes()
{
    return countNodes(root);
}

int AVLTree::countNodes(AVLNode* no)
{
    if (no == NULL)
		return 0;

	int nodesOnLeft = countNodes(no->getLeft());
	int nodesOnRight = countNodes(no->getRight());
	return nodesOnLeft + nodesOnRight + 1;
}

/**
 * Insert é polimorfico. o Método publico é pra inserir na árvore.
 * Esse método invoca o método privado, que é recursivo.
 */
void AVLTree::insert(int valor)
{
    root = insert(root,valor);
}

void AVLTree::insertLeft(int valor, AVLNode *node)
{
    node->setLeft(insert(node->getLeft(), valor));
    if (height(node->getRight()) - height(node->getLeft()) == -2) {
        if (valor < node->getLeft()->getData())
            node = rotateLL(node);
        else
            node = rotateLR(node);
    }
}

void AVLTree::insertRight(int valor, AVLNode *node)
{
    node->setRight(insert(node->getRight(),valor));
    if (height( node->getRight()) - height(node->getLeft()) == 2) {
        if (valor > node->getRight()->getData())
            node = rotateRR(node);
        else
            node = rotateRL(node);
    }
}

/**
 * Se é uma arvore ou subarvore vazia, cria 1 novo nó e retorna.
 */
AVLNode* AVLTree::insert(AVLNode* node, int valor)
{
    if (node == NULL)
       	return new AVLNode(valor);

    if (valor < node->getData())
        insertLeft(valor, node);
    else if (valor > node->getData())
        insertRight(valor, node);

    int node_height = maximo(height(node->getLeft()), height(node->getRight())) + 1;
    node->setHeight(node_height);

    return node;
}

AVLNode* AVLTree::rotateLL(AVLNode *node)
{
    AVLNode *leftSubTree = node->getLeft();
    node->setLeft(leftSubTree->getRight());
    leftSubTree->setRight( node );
    node->setHeight(maximo(height(node->getLeft()), height(node->getRight())) + 1);
    leftSubTree->setHeight(maximo(height(leftSubTree->getLeft()), height(node) + 1));
    return leftSubTree;
}

AVLNode* AVLTree::rotateRR(AVLNode *node)
{
    AVLNode *rightSubTree = node->getRight();
    node->setRight(rightSubTree->getLeft());
    rightSubTree->setLeft(node);
    node->setHeight(maximo(height(node->getLeft()), height(node->getRight())) + 1);
    rightSubTree->setHeight(maximo(height(rightSubTree->getRight()), height(node) + 1));
    return rightSubTree;
}


AVLNode* AVLTree::rotateLR(AVLNode *node)
{
    node->setLeft(rotateRR(node->getLeft()));
    return rotateLL(node);
}

AVLNode* AVLTree::rotateRL(AVLNode *node)
{
    node->setRight(rotateLL(node->getRight()));
    return rotateRR(node);
}

void AVLTree::preOrder()
{
    preOrder(root);
}

void AVLTree::inOrder()
{
    inOrder(root);
}

void AVLTree::posOrder()
{
    posOrder(root);
}

void AVLTree::reverseOrder()
{
    reverseOrder(root);
}

void AVLTree::preOrder(AVLNode *no)
{
    if (no != NULL) {
        std::cout << no->getData() << std::endl;
        preOrder(no->getLeft());
        preOrder(no->getRight());
    }
}

void AVLTree::posOrder(AVLNode *no)
{
    if (no != NULL) {
        posOrder(no->getLeft());
        posOrder(no->getRight());
        std::cout << no->getData() << std::endl;
    }
}

void AVLTree::inOrder(AVLNode *no)
{
    if (no != NULL) {
        inOrder(no->getLeft());
        std::cout << no->getData() << std::endl;
        inOrder(no->getRight());
    }
}

void AVLTree::reverseOrder(AVLNode *no)
{
    if (no != NULL) {
        reverseOrder(no->getRight());
        std::cout << no->getData() << std::endl;
        reverseOrder(no->getLeft());
    }
}




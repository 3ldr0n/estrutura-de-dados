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

AVLNode* AVLTree::getRoot() const
{
    return root;
}

bool AVLTree::isEmpty() const
{
    return root == NULL;
}

int AVLTree::height() const
{
	return height(root);
}

int AVLTree::height(AVLNode *no) const
{
	return no == NULL ? -1 : no->getHeight();

}

int AVLTree::max(int a, int b) const
{
    return a > b ? a : b;
}

int AVLTree::countNodes() const
{
    return countNodes(root);
}

int AVLTree::countNodes(AVLNode* no) const
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
void AVLTree::insert(int value)
{
    root = insert(root, value);
}

void AVLTree::insertLeft(int value, AVLNode *node)
{
    node->setLeft(insert(node->getLeft(), value));
    if (height(node->getRight()) - height(node->getLeft()) == -2) {
        if (value < node->getLeft()->getData())
            node = rotateLL(node);
        else
            node = rotateLR(node);
    }
}

void AVLTree::insertRight(int value, AVLNode *node)
{
    node->setRight(insert(node->getRight(), value));
    std::cout << "Insert node right: " << node->getRight()->getData() << std::endl;
    if (height(node->getRight()) - height(node->getLeft()) == 2) {
        if (value > node->getRight()->getData())
            node = rotateRR(node);
        else
            node = rotateRL(node);
    }
}

/**
 * Se é uma arvore ou subarvore vazia, cria 1 novo nó e retorna.
 */
AVLNode* AVLTree::insert(AVLNode* node, int value)
{
    if (node == NULL)
       	return new AVLNode(value);

    if (value < node->getData())
        insertLeft(value, node);
    else if (value > node->getData())
        insertRight(value, node);

    int node_height = max(height(node->getLeft()), height(node->getRight())) + 1;
    node->setHeight(node_height);

    return node;
}

AVLNode* AVLTree::rotateLL(AVLNode *node)
{
    AVLNode *leftSubTree = node->getLeft();
    node->setLeft(leftSubTree->getRight());
    leftSubTree->setRight(node);
    node->setHeight(max(height(node->getLeft()), height(node->getRight())) + 1);
    leftSubTree->setHeight(max(height(leftSubTree->getLeft()), height(node) + 1));
    return leftSubTree;
}

AVLNode* AVLTree::rotateRR(AVLNode *node)
{
    AVLNode *rightSubTree = node->getRight();
    node->setRight(rightSubTree->getLeft());
    rightSubTree->setLeft(node);
    node->setHeight(max(height(node->getLeft()), height(node->getRight())) + 1);
    rightSubTree->setHeight(max(height(rightSubTree->getRight()), height(node) + 1));
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

void AVLTree::preOrder() const
{
    preOrder(root);
}

void AVLTree::inOrder() const
{
    inOrder(root);
}

void AVLTree::posOrder() const
{
    posOrder(root);
}

void AVLTree::reverseOrder() const
{
    reverseOrder(root);
}

void AVLTree::preOrder(AVLNode *no) const
{
    if (no != NULL) {
        std::cout << no->getData() << std::endl;
        preOrder(no->getLeft());
        preOrder(no->getRight());
    }
}

void AVLTree::posOrder(AVLNode *no) const
{
    if (no != NULL) {
        posOrder(no->getLeft());
        posOrder(no->getRight());
        std::cout << no->getData() << std::endl;
    }
}

void AVLTree::inOrder(AVLNode *no) const
{
    if (no != NULL) {
        inOrder(no->getLeft());
        std::cout << no->getData() << std::endl;
        inOrder(no->getRight());
    }
}

void AVLTree::reverseOrder(AVLNode *no) const
{
    if (no != NULL) {
        reverseOrder(no->getRight());
        std::cout << no->getData() << std::endl;
        reverseOrder(no->getLeft());
    }
}

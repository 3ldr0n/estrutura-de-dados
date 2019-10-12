#include <cassert>

#include "AVLTree.h"
#include "AVLTreePrivateTest.h"

void AVLTreePrivateTest::test_max()
{
    AVLTree tree;
    assert(tree.max(2, 3) == 3);
    assert(tree.max(2, 2) == 2);
    assert(tree.max(50, 8) == 50);
}

void AVLTreePrivateTest::test_height()
{
    AVLTree tree;
    assert(tree.height(tree.root) == -1);

    tree.insert(10);
    assert(tree.height(tree.root) == 0);

    tree.insert(2);
    assert(tree.height(tree.root) == 1);
    assert(tree.height(tree.root->getRight()) == -1);
    assert(tree.height(tree.root->getLeft()) == 0);
}

void AVLTreePrivateTest::test_countNodes()
{
    AVLTree tree;
    assert(tree.countNodes(tree.root) == 0);

    tree.insert(10);
    assert(tree.countNodes(tree.root) == 1);

    tree.insert(9);
    tree.insert(11);
    assert(tree.countNodes(tree.root) == 3);
    assert(tree.countNodes(tree.root->getRight()) == 1);
}

int main()
{
    AVLTreePrivateTest test;
    test.test_max();
    test.test_height();
    test.test_countNodes();
}

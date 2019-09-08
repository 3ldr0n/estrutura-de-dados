#include <cassert>

#include "AVLTree.h"
#include "AVLTreePrivateTest.h"

void AVLTreePrivateTest::test_maximo()
{
    AVLTree tree;
    assert(tree.maximo(2, 3) == 3);
    assert(tree.maximo(2, 2) == 2);
    assert(tree.maximo(50, 8) == 50);
}

void AVLTreePrivateTest::test_height()
{
    AVLTree tree;
    assert(tree.height(tree.root) == -1);

    tree.insert(10);
    assert(tree.height(tree.root) == 0);

    tree.insert(2);
    assert(tree.height(tree.root) == 1);
}

int main()
{
    AVLTreePrivateTest test;
    test.test_maximo();
    test.test_height();
}

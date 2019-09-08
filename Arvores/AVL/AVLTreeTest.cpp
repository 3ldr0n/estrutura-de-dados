#include <cassert>

#include "AVLTree.h"

void test_isEmpty()
{
    AVLTree tree;
    assert(tree.isEmpty());

    tree.insert(10);
    assert(!tree.isEmpty());
}

void test_height()
{
    AVLTree tree;
    assert(tree.height() == -1);

    tree.insert(10);
    assert(tree.height() == 0);

    tree.insert(9);
    tree.insert(11);

    assert(tree.height() == 1);

    tree.insert(12);
    assert(tree.height() == 2);
}

void test_countNodes()
{
    AVLTree tree;
    assert(tree.countNodes() == 0);

    tree.insert(10);
    assert(tree.countNodes() == 1);

    tree.insert(1);
    tree.insert(100);
    tree.insert(50);
    assert(tree.countNodes() == 4);
}

int main()
{
    test_isEmpty();
    test_height();
    test_countNodes();
    return 0;
}

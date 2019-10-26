#include "BPlusTree.h"
#include <cassert>

void test_insert()
{
    BPlusTree tree(5);
    assert(tree.getRoot() == NULL);

    tree.insert(5);
    assert(tree.getRoot() != NULL);
    assert(tree.getRoot()->getData() != NULL);
    assert(tree.getRoot()->getData()[0] == 5);
}

int main()
{
    test_insert();

    std::cout << "Tests passed" << std::endl;
    return 0;
}

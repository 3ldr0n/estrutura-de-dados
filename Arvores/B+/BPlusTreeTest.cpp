#include "BPlusTree.h"
#include <cassert>

void test_insert_one_number()
{
    BPlusTree tree(5);
    assert(tree.getRoot() == NULL);

    tree.insert(5);
    assert(tree.getRoot() != NULL);
    assert(tree.getRoot()->getData() != NULL);
    assert(tree.getRoot()->getData()[0] == 5);
}

void test_insert_two_numbers()
{
    BPlusTree tree(5);
    assert(tree.getRoot() == NULL);

    tree.insert(5);
    assert(tree.getRoot() != NULL);
    assert(tree.getRoot()->getData() != NULL);
    assert(tree.getRoot()->getData()[0] == 5);

    tree.insert(2);
    assert(tree.getRoot()->getData()[0] == 2);
    assert(tree.getRoot()->getData()[1] == 5);
}

int main()
{
    test_insert_one_number();
    test_insert_two_numbers();

    std::cout << "Tests passed" << std::endl;
    return 0;
}

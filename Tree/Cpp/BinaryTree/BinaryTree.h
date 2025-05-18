#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <cstddef>
#include <sstream>
#include <stdexcept>
#include <string>
#include "TreeNode.h"

template<typename Item_Type>
class BinaryTree {
protected:
    TreeNode<Item_Type>* root;

    BinaryTree(BinaryTree<Item_Type>* new_root) : root(new_root) {}

public:
}

#endif
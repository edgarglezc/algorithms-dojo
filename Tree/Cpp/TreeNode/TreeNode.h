#ifndef TREE_NODE_H
#define TREE_NODE_H
#include <sstream>

template<typename Item_Type>
struct TreeNode {
    // Fields
    Item_Type data;
    TreeNode<Item_Type>* left;
    TreeNode<Item_Type>* right;

    // Constructor
    TreeNode(const Item_Type& the_data,
             TreeNode<Item_Type>* left_ptr,
             TreeNode<Item_Type>* right_ptr):
        data(the_data), left(left_ptr), right(right_ptr) {}

    // Destructor
    virtual ~TreeNode() {}

    // to_string
    virtual std::string to_string() const {
        std::ostringstream os;
        os << data;
        return os.str();
    }
};

template<typename Item_Type>
std::ostream& operator<<(std::ostream& out, const TreeNode<Item_Type>& node) {
    return out << node.to_string();
}

#endif
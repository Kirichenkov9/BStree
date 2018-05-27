
#include <iostream>
#include <tree.hpp>
int main() {
    BStree::Tree<int> tree{8, 10, 14, 13, 3, 1, 6, 4, 7};
    std::cout << "Tree is:\n";
    tree.print_order(std::cout, BStree::traversal_order::pre);
    
    std::cout << "\nUsing iterator to print keys\n";
    for (int c : tree) {
        std::cout << c << " ";
    }

    std::cout << "\nUsing iterator to print keys in reverse order\n";
    BStree::BSTIterator<int> it = tree.rbegin();
    for (; it != tree.rend(); --it) {
        std::cout << *it << " ";
    }
}
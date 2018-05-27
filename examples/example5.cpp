#include <iostream>
#include <tree.hpp>
int main() {
    
    BStree::Tree<int> tree{8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15};
    std::cout << "Tree is:\n";
    tree.print_order(std::cout, BStree::traversal_order::pre);
    
    std::cout << "\nUsing iterator to print keys\n";
    BStree::BSTIterator<int> it_ = tree.begin();
    for (; it_ != tree.end(); ++it_) {
        std::cout << *it_ << " ";
    }
    std::cout<<*it_;

    std::cout << "\nUsing iterator to print keys in reverse order\n";
    BStree::BSTIterator<int> it = tree.rbegin();
    for (; it != tree.rend(); --it) {
        std::cout << *it << " ";
    }
    std::cout <<*it<<std::endl;
}
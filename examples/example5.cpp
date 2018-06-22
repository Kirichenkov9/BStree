#include <iostream>
#include <locale>
#include <string>
#include <tree.hpp>
#include <iterator.hpp>


int main() {
    setlocale(LC_ALL, "RUS");
    BStree::Tree<int> tree{8, 4, 12, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15};
    std::cout << "Выведем исходное дерево:"<<std::endl;
    tree.print_order(std::cout, BStree::traversal_order::pre);
    
    std::cout<<std::endl << "Выведем дерево, используя итератор прямого обхода: ";
    auto it_ = tree.begin();
    for (; it_ != tree.end(); ++it_) {
        std::cout << *it_ << " ";
    }
    

    std::cout<<std::endl << "Выведем дерево, используя итератор обратного обхода: ";
    auto it = tree.rbegin();
    for (; it != tree.rend(); --it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl; 
}

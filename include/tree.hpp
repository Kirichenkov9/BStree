#include <iostream>
#include <fstream>
#include <cstring>
namespace BStree {
struct Node {
    int data ;
    Node* left;
    Node* right;
    Node(int value) : left{nullptr}, right{nullptr} {
        data = value;
    };
};

enum class traversal_order {pre, in, post};
class Tree {
    Node* root;
    auto print_root(const Node* node) -> void;
    auto destructor(Node* node) -> void;
public:
    Tree() {
        root = nullptr;
    }
    Tree(std::initializer_list<int> list);
    Tree(const Tree& tree);
    auto remove(int value)->bool;
    auto search(int value) const -> bool;
    auto swap(Tree& tree) -> void;
    auto add(int value) -> bool;
    auto empty() const -> bool;
    auto print() -> void;
    auto save(const std::string& path) -> bool;
    auto load(const std::string& path) -> bool;
    auto print_order(std::ostream& stream, traversal_order order) const -> std::ostream&;
    auto friend operator<<(std::ostream& stream, const Tree&) -> std::ostream&;
    auto operator=(const Tree&) -> Tree&;
    ~Tree() {
        std::cout<<"Память очищена"<<std::endl;
        destructor(root);
    }

};
}
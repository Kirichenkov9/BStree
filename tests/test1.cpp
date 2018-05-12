#include "catch.hpp"
#include <tree.hpp>
#include <cstring>
#include <sstream>
#include <iostream>


TEST_CASE("Creating tree") {
	BStree::Tree tree;
	REQUIRE(tree.empty() == false);
	BStree::Tree tree_{1};
	REQUIRE(tree_.empty() == true);
}

TEST_CASE("Printing of tree by various traversal order") {
  BStree::Tree tree = { 8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15 };
  std::string pre = "8  4  2  1  3  6  5  7  12  10  9  11  14  13  15  ";
  std::string in = "1  2  3  4  5  6  7  8  9  10  11  12  13  14  15  ";
  std::string post = "1  3  2  5  7  6  4  9  11  10  13  15  14  12  8  ";

   std::string str;
   std::stringstream out(str);

   tree.print_order(out, BStree::traversal_order::pre); 
   out<<std::endl;
   tree.print_order(out, BStree::traversal_order::in);
   out<<std::endl;
   tree.print_order(out, BStree::traversal_order::post);
   out<<std::endl;

   std::string result_pre;
   std::string result_in;
   std::string result_post;

   getline(out, result_pre);
   getline(out, result_in);
   getline(out, result_post);

   REQUIRE(pre == result_pre);
   REQUIRE(in == result_in);
   REQUIRE(post == result_post);
 }

 TEST_CASE("Addig node") {
     BStree::Tree tree = { 25, 34, 12, 4, 7, 67, 78, 9, 0 };

     tree.add(1);
     tree.add(20);
     tree.add(5);


    std::string str;
    std::stringstream out(str);

    tree.print_order(out, BStree::traversal_order::pre); 
    
    std::string result = "25  12  4  0  1  7  5  9  20  34  67  78  ";
    std::string result_of_adding;
    getline(out, result_of_adding);

    REQUIRE(result== result_of_adding);
 }

 TEST_CASE("Deleting node") {
 	BStree::Tree tree = { 25, 34, 12, 4, 7, 67, 78, 9, 0 };

 	tree.remove(25);
 	tree.remove(0);
 	tree.remove(12);

 	std::string result = "34  4  7  9  67  78  ";

 	std::string str;
    std::stringstream out(str);

    tree.print_order(out, BStree::traversal_order::pre);

    std::string result_of_deleting;
    getline(out, result_of_deleting);

    REQUIRE(result== result_of_deleting);
 }

 TEST_CASE("Saving in file and loading from file") {
 	BStree::Tree tree = { 8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15 };
 	BStree::Tree tree1;
 	std::string text = "8  4  2  1  3  6  5  7  12  10  9  11  14  13  15  ";;
    tree.save("BStree.txt");
    tree1.load("BStree.txt");

    std::string str;
    std::stringstream out(str);
    tree1.print_order(out, BStree::traversal_order::pre);

    std::string result;
    getline(out, result);
    
    REQUIRE(result == text);
 }

TEST_CASE("Existence of node") {
	BStree::Tree tree = { 8, 4, 12, 2, 6, 10, 14, 1, 3, 5, 7, 9, 11, 13, 15 };
	REQUIRE(tree.search(8) == true);
	REQUIRE(tree.search(100) == false);
}
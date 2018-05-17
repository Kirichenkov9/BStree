# BStree
[![Build Status](https://travis-ci.org/Kirichenkov9/BStree.svg?branch=master)](https://travis-ci.org/Kirichenkov9/BStree)

**This is a project of realization Binary Search tree**

*In this project the following opportunities are realized:*

* displaying the tree on the screen
* displaying the list of tree nodes (3 orders: pre, in, post)
* adding a node to the tree
* removing the node from the tree
* saving the tree to the file
* loading the tree from the file
* existing of node


## Building of a project:
```ShellSession
$ cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=install
$ cmake --build _build --target install
```

**Run the test:**
```ShellSession
$ cmake -H. -B_build -DBUILD_TESTS=ON
$ cmake --build _build --target install
$ cmake --build _build --target test -- ARGS=--verbose
```

**Run the examples:**
```ShellSession
$ cmake -H. -B_build -DBUILD_EXAMPLES=ON
$ cmake --build _build --target install
$ cd _build
$ ./example<number>
 ```
## Benchmark

The benchmark of each open method is 10, 10 ^ 2, 10 ^ 3, 10 ^ 4, 10 ^ 5, 10 ^ 6, 10 ^ 7, 10 ^ 8 and 10^9 elements.

|Operations| 10 | 10^2 | 10^3 | 10^4 | 10^5 | 10^6 | 10^7 | 10^8 | 10^9 |
|---|---|---|---|---|---|
|Insert|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|
|Search|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|
|Remove|:x:|:x:|:x:|:x:|:x:|


|Operations|Binary Search Tree|AVL Tree|Red Black Tree|Splay Tree|Trie|
|---|---|---|---|---|---|
|Insert|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|
|Search|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|
|Delete|:x:|:x:|:x:|:x:|:x:|
|Pre Order Traversal|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|In Order Traversal|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|Post Order Traversal|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|Breadth First Traversal|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|In Order Predecessor|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||
|In Order Successor|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:|:heavy_check_mark:||



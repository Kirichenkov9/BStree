# BStree
[![Build Status](https://travis-ci.org/Kirichenkov9/BStree.svg?branch=master)](https://travis-ci.org/Kirichenkov9/BStree)

**This is a project of realization Binary Search tree**

*In this project the following opportunities are realized:*
```
1) displaying the tree on the screen
2) displaying the list of tree nodes (3 orders: pre, in, post)
3) adding a node to the tree
4) removing the node from the tree
5) saving the tree to the file
6) loading the tree from the file
7) existing of node
```


**Building of a project:**
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






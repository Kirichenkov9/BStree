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


|Operations|Print|Print pre order|Print in oreder|Print post order|Insert|Remove|Exist|Save in file|Load from file|
|---|---|---|---|---|---|---|---|---|---|
|10|5.2e-05|5e-06|5e-06|5e-06|2e-06|2e-06|0|0.000101|3.3e-05|
|10^2|0.000501|7.2e-05|3.5e-05|3.4e-05|1e-06|1e-06|1e-06|0.000228|0.00011|
|10^3|0.005581|0.0005|0.000526|0.000155|2e-06|2e-06|1e-06|1.5e-05|8.7e-05|
|10^4|0.015598|0.001018|0.001096|0.001091|1e-06|1e-06|1e-06|2.7e-05|0.000402|
|10^5|     |                |               |               |0.059814|0.247803|     |            |             |
|10^6|     |                |               |               |0.82981|2.43457|     |            |             |
|10^7|     |                |               |               |15.0377|24.0627|     |            |             |
|10^8|     |                |               |               |236.91|236.155|     |            |             |
|10^9|:x:|:x:|:x:|:x:|:x:|:x:|:x:|:x:|:x:|

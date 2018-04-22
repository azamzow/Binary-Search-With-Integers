# B-Tree Search Project

### Description

This project writes a c++ function for the BinarySearch algorithm to search a target element in an asorted, ascending or descending, ordered vector. The function also keeps track of the number of comparisons used to find the target. To ensure the correctness of the algorithm the input data is sorted in 2 arrays, one in ascending order and the other in descending order. An exception is thrown when an input vector is unsorted.

### To Run

Using terminal on Mac, you have to make sure you have g++ installed first. Then you can run it...

```
$ cd Binary_Search_With_Integers
$ g++ BinarySearch.cpp
$ ./a.out
```

### Description 

This program tests using vectors populated with:

i) consecutive increasing integers in the ranges from 1 to powers of 2, that is, to these numbers:

1 ,2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048.

ii)  consecutive decreasing integers in the ranges from powers of 2 to 1, that is, to these numbers:

2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1.

### Output

The program will output the number of comparisons to find the target in each range. First we search 2048 and 3 in the ascending array, then 1 and 10 in the decending array. An example output is shown below..

![Result](https://github.com/azamzow/Binary_Search_With_Integers/blob/master/Result.png?raw=true)
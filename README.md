# OOP_basics
This repository is created to show that I have mastered the basics of C++

## VideoGame1
We want to make a computer game with a lot of enemies: monsters, ninjas, etc. All of these enemies share a common function: an attack function.
However, they all attack in different ways. With ***polymorphism*** we can use the same attack function on many different objects that inherited from the same class with different results. I used ***pointers*** and ***virtual function***.

## VideoGame2
Alternative version of VideoGame1. When we write a ***pure virtual function***, we must override it. If you want to make a game where each enemy has a specificity, use a pure virtual function. If you want to have basic enemies with no specificity, use a regular virtual function (VideoGame1).

## Calculator
We want to built a calculator that can compare and add two numbers together. This calculator has to be able to perform with any kind of type that is comparable and additive. For this, we need to use ***class template***.

## Division
The user wants to make a division. We have to make sure he/she doesn't divide by 0! For this, we need to implement an ***exception***.

## Struct_VS_Class
What is the difference between ***struct*** and ***class*** in C++ ?


## LongestIncreasingSubsequence
The set {3, 2, 6, 4, 5, 1} has the inscreasing subsequence: {3,6}, {2,6}, {2,4,5} and {1}.<br>
Our problem is: for a vector D of size N, find its longest increasing subsequence.<br>
Intuitively we think about this algorithm:<br>
for(int i=N, i>0, i--){<br>
    find all subsequence of D with length of i;<br>
    if(there is one inscreasing subsequence)<br>
        break;<br>
}<br>
The problem is the worst case complexity of this algorithm is: O(2^N).<br>

# OOP_basics
This repository is created to show that I have mastered the basics of C++

## VideoGame1
We want to make a computer game with a lot of enemies: monsters, ninjas, etc. All of these enemies share a common function: an attack function.
However, they all attack in different ways. With **polymorphism** we can use the same attack function on many different objects that inherited from the same class with different results. I used **pointers** and **virtual function**.

## VideoGame2
Alternative version of VideoGame1. When we write a **pure virtual function**, we must override it. If you want to make a game where each enemy has a specificity, use a pure virtual function. If you want to have basic enemies with no specificity, use a regular virtual function (VideoGame1).

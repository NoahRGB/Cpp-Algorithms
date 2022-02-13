#pragma once

#include <iostream>
#include <vector>

class Queue {
//static implementation, fixed size
//circular queue
public:
    Queue(int _max) : max(_max) {};
    bool isEmpty() { return size == 0; };
    bool isFull() { return size == max; };
    bool enqueue(int newItem);
    int dequeue();
    void print();
    std::string toString();
private:
    int front = 0;
    int back = -1;
    int size = 0;
    int max = 0;
    std::vector<int> queue = {0};
};

class Stack {
//static implementation, fixed  size
public:
    Stack(int _max) : max(_max) {};
    bool push(int item);
    int pop();
    int peek();
    bool isEmpty() { return top == 0; };
    bool isFull() { return top == max; };
private:
    int top = 0;
    int max = 0;
    std::vector<int> stack = {0};
};

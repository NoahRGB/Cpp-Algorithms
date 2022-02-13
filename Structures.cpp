#include "Structures.hpp"

bool Queue::enqueue(int newItem) {
    if (!this->isFull()) {
        back = (back + 1) % max;
        queue[back] = newItem;
        size++;
        return true;
    }
    return false;
}

int Queue::dequeue() {
    if (!this->isEmpty()) {
        int item = queue[front];
        front = (front + 1) % max;
        size--;
        return item;
    }
    return NULL;
}

void Queue::print() {
    for (int i = front; i <= back; i++) {
        std::cout << queue[i] << " ";
    }
    std::cout << std::endl;
}

bool Stack::push(int item) {
    if (!this->isFull()) {
        top++;
        stack[top] = item;
        return true;
    }
    return false;
}

int Stack::pop() {
    if (!this->isEmpty()) {
        int item = stack[top];
        top--;
        return item;
    }
    return NULL;
}

int Stack::peek() {
    if (!this->isEmpty()) {
        return stack[top];
    }
    return NULL;
}

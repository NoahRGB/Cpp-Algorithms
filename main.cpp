#include <iostream>
#include <vector>

#include "Algorithms.hpp"
#include "Structures.hpp"
using namespace std;

int main() {
    std::vector<int> list1 = {5, 4, 3, 2, 1};
    Queue q(3);
    q.enqueue(5);
    q.enqueue(6);
    q.dequeue();
    q.print();
}

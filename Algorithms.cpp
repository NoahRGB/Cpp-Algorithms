#include "Algorithms.hpp"

#include <iostream>
#include <vector>

void printVector(std::vector<int> vec) {
    std::cout << std::endl;
    for (int el : vec)
        std::cout << el << " ";
    std::cout << std::endl;
}

bool binarySearch(std::vector<int> list, int target) {
    //could be modified to return the index instead
    //O(log n)
    int lower = 0, upper = (int)list.size() - 1;
    bool found = false;
    while (lower <= upper && found == false) {
        int mid = (lower+upper)/2;
        if (list[mid] == target) {
            found = true;
        } else if (list[mid] < target) {
            std::cout << lower << std::endl;
            lower = mid+1;
            std::cout << lower << std::endl;
        } else {
            std::cout << upper << std::endl;
            upper = mid-1;
            std::cout << upper << std::endl;
        }
    }
    return found;
}

bool linearSearch(std::vector<int> list, int target) {
    //could be modified to return the index instead
    //O(n)
    bool found = false;
    for (int i = 0; i < list.size(); i++) {
        if (list[i] == target)
            found = true;
    }
    return found;
}

void bubbleSort(std::vector<int>& list) {
    //O(n^2)
    bool passMade = true;
    while (passMade) {
        passMade = false;
        for (int i = 0; i < list.size()-1; i++) {
            if (list[i] > list[i+1]) {
                passMade = true;
                int temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
            }
        }
    }
}

void insertionSort(std::vector<int>& list) {
    //O(n^2)
    //O(n) if nearly sorted already
    for (int i = 1; i < list.size(); i++) {
        int currentValue = list[i];
        int position = i;
        while (position > 0 && list[position-1] > currentValue) {
            list[position] = list[position-1];
            position--;
        }
        list[position] = currentValue;
    }
}

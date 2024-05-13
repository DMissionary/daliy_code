#include "compare_length.h"
#include <iostream>
#include <vector>
#include <string>

int CompareLength(const std::vector<std::string>& arr, int index1, int index2) {
    if (index1 < 0 || index1 >= arr.size() || index2 < 0 || index2 >= arr.size()) {
        std::cerr << "Invalid indices\n";
        return -1; // or throw an exception
    }
    
    // TODO error2: please fix
    int length1 = arr[index1].length();
    int length2 = arr[index2].length(); 
    
    if (length1 == length2) {
        std::cout << "Length at index " << index1 << " and index " << index2 << " are equal.\n";
        return 0;
    } else if (length1 < length2) {
        std::cout << "Length at index " << index1 << " is less than length at index " << index2 << ".\n";
        return -1;
    } else {
        std::cout << "Length at index " << index1 << " is greater than length at index " << index2 << ".\n";
        return 1;
    }
}

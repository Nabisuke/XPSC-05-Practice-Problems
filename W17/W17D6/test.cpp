#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5}; // Example vector
    int n = v.size(); // Get the size of the vector

    if (n > 1) { // Ensure there are at least two elements to swap
        std::swap(v[0], v[n - 1]); // Swap first and last elements
    }

    // Output the modified vector
    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
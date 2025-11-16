#ifndef U_H
#define U_H
#include <string>
#include <vector>
#include <iostream>

std::string formatTimestamp(time_t t);

// *** TEMPLATE ADDED ***
template <typename T>
void printVector(const std::vector<T>& v) {
    for(const auto& x : v) {
        std::cout << x << "\n";
    }
}

#endif

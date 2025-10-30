#include <iostream>

int main() {
    long version = __cplusplus;
    std::cout << "C++ version: " << version << std::endl;

    if (version == 199711L) {
        std::cout << "C++98" << std::endl;
    } else if (version == 201103L) {
        std::cout << "C++11" << std::endl;
    } else if (version == 201402L) {
        std::cout << "C++14" << std::endl;
    } else if (version == 201703L) {
        std::cout << "C++17" << std::endl;
    } else if (version == 202002L) {
        std::cout << "C++20" << std::endl;
    } else if (version == 202302L) {
        std::cout << "C++23" << std::endl;
    } else {
        std::cout << "Unknown C++ standard or pre-C++98" << std::endl;
    }
    return 0;
}
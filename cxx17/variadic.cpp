
#include <iostream>

// Base case: no arguments
void print() {
    std::cout << "No arguments\n";
}



// template <typename... Args>
// auto add(Args&& Args...){
//     return (args + ...);
// }

template <typename... Args>
auto add(Args&&... args) {
    return (args + ...); // Fold expression: (((arg1 + arg2) + arg3) + ...)
}

// Variadic template using fold expression
template <typename... Args>
void print(Args&&... args) {
    // Fold expression to print all arguments
    ((std::cout << args << " "), ...);
    std::cout << "\n";
}

int main() {
    print(1, 2.5, "Hello", 'A');  // Output: 1 2.5 Hello A
    print();                      // Output: No arguments
    std::cout << add(1, 3, 4) << "\n";        // Output: 10
    std::cout << add(2.5, 3.5, 4.0) << "\n";     // Output: 10.0
    return 0;
}

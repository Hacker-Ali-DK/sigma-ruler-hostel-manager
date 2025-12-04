#include <iostream>

int main() {
    std::cout << "Hello, world!\n";

    std::cout << "Enter two numbers: ";
    double a, b;
    if (!(std::cin >> a >> b)) {
        std::cerr << "Invalid input\n";
        return 1;
    }

    std::cout << "Sum: " << (a + b) << '\n';
    return 0;
}
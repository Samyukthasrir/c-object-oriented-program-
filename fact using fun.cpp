#include <iostream>

unsigned long long factorial(int n) {
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number < 0)
        std::cout << "Error! Factorial of a negative number doesn't exist." << std::endl;
    else
        std::cout << "Factorial of " << number << " = " << factorial(number) << std::endl;

    return 0;
}


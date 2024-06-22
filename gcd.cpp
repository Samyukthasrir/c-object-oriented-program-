#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter two positive integers: ";
    std::cin >> num1 >> num2;

    while (num1 != num2) {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    std::cout << "GCD: " << num1 << std::endl;

    return 0;
}


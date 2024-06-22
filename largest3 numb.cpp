#include <iostream>

int main() {
    int num1, num2, num3;
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3)
        std::cout << "Largest number: " << num1 << std::endl;
    else if (num2 >= num1 && num2 >= num3)
        std::cout << "Largest number: " << num2 << std::endl;
    else
        std::cout << "Largest number: " << num3 << std::endl;

    return 0;
}


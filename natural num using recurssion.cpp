#include <iostream>

int sumOfNaturalNumbers(int n) {
    if (n != 0)
        return n + sumOfNaturalNumbers(n - 1);
    else
        return n;
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    std::cout << "Sum of natural numbers up to " << num << " is " << sumOfNaturalNumbers(num) << std::endl;

    return 0;
}


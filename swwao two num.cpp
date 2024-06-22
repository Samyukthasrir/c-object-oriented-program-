#include <iostream>

int main() {
    int a, b, temp;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    std::cout << "After swapping, a = " << a << " and b = " << b << std::endl;

    return 0;
}


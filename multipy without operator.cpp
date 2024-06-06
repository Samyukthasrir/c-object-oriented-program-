#include <iostream>
using namespace std;
int multiply(int num1, int num2) {
    int result = 0;
    for (int i = 0; i < num2; i++) {
        result += num1;
    }
    return result;
}

int main() {
    int num1, num2;

    
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    
    int product = multiply(num1, num2);

    
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;

    return 0;
}


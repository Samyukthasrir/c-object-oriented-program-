#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    double result = 0.0;

    originalNum = num;
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }
    return (int)result == num;
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}


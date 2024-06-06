#include <iostream>

using namespace std;
int gcd(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int main() {
    int x, y;

    
    cout << "Enter the first number (x): ";
    cin >> x;
    cout << "Enter the second number (y): ";
    cin >> y;

    int result = gcd(x, y);
    cout << "The GCD of " << x << " and " << y << " is: " << result << endl;

    return 0;
}


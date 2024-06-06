#include <iostream>
using namespace std;
int main() {
    int sum = 0;

    
    for (int i = 50; i <= 100; i++) {
        
        if (i % 7 == 0) {
            
            sum += i;
        }
    }

    
    cout << "The sum of integers between 50 and 100, which are divisible by 7, is: " << sum << endl;

    return 0;
}


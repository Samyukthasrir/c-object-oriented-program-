#include <iostream>
using namespace std;
int main() {
    int seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    int hours = seconds / 3600; 
    int remainingSeconds = seconds % 3600; 
    int minutes = remainingSeconds / 60; 
    int remainingSecondsFinal = remainingSeconds % 60; 
    cout << seconds << " seconds is equivalent to ";
    cout << hours << " hours ";
    cout << minutes << " minutes ";
    cout << remainingSecondsFinal << " seconds." << endl;

    return 0;
}


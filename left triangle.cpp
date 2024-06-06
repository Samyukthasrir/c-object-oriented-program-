#include<iostream>
using namespace std;
class pattern {
public:
    int i, j, n;
    void printLeftTriangle(int size) {
        
		for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    pattern p;
    p.printLeftTriangle(5); 
}

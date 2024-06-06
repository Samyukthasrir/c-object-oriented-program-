#include<iostream>
using namesapce std;
class armstrong{
	public:
		void isarmstrong(int n){
			int digit,f=0,data=n;
			digit=n%10;
			f=f+(digit*digit*digit);
			n=n/10;
		}
};
int main(){
	int n;
	cout<<"enter number";
	cin>>n;
ArmstrongChecker checker(num);
    if (checker.isArmstrong()) {
        std::cout << num << " is an Armstrong number." << endl;
    } else {
        std::cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}


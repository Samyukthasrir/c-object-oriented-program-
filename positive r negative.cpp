#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter a number";
	cin>>n;
	if (n>0){
		cout<<"it is a positive number";
	}
	else if (n==0){
		cout<<"neither positive or negative number";
	} 
	else {
		cout<<"it is a negative number";
	}
	return 0;
}

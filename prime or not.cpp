#include<iostream>
using namespace std;
int main(){
	int num,i=2,flag=0;
	cout<<"enter the num:";
	cin>>num;
	while(i<num){
		if(num%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==1){
		cout<<"it is not a prime number";
	}
	else{
		cout<<"it is a prime number";
	}
	return 0;
}
	

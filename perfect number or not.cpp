#include<iostream>
#include<iostream>
using namespace std;
int main(){
	int i=1,num,data,sum=0;
	cout<<"enter the num:";
	cin>>num;
	data=num;
	while(i<=(num/2)){
		if(num%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(data==sum){
		cout<<"it is perfect number";
	}
	else{
		cout<<"it is not a perfect number";
	}
	return 0;
}
		

#include<iostream>
using namespace std;
int main(){
	int i,n1,n2,n3,count;
	cout<<"enter n1";
	cout<<"enter n2";
	cin>>n1;
	cin>>n2;
	for(i=0;i<=count;i++){
		n3=n1+n2;
		cout<<n3;
		n1=n2;
		n2=n3;
		n3=n1;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter a : ";
	cin>>a;
	cout<<"enter b : ";
	cin>>b;
	cout<<"enter c : ";
	cin>>c;
	if(a>b){
		if(a>c){
			cout<<a;
		}
	}
	else if (b>c){
		if(b>a){
			cout<<b;
		}
	}
	else {
		cout<<c;
	}
	return 0;
}

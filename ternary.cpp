#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter a : ";
	cin>>a;
	cout<<"enter b : ";
	cin>>b;
	cout<<"enter c : ";
	cin>>c;
	int max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	cout<<"maximum is:"<<max;
	return 0;
}

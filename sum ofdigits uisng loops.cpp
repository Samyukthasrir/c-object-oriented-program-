#include<iostream>
using namespace std;
class sum{
	public:
	int i,n,m=0;
	void sumofdigits(int n){
		for(i=1;i<=n;i++)
		{
			m=m+i;
		}
		cout<<m;
	}
};
int main(){
	int p;
	cout<<"enter the size:";
	cin>>p;
	sum s;
	s.sumofdigits(p);
	
}
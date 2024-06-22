#include<iostream>
using namespace std;
class sum{
	public:
		int i
		void sumofnumber(int n){
			for(i=1;i<=n;i++){
				sum +=i*i;
			}
		}
};
int main(){
	sum p;
	p.sumofnumber(5);	
}

#include <iostream>
using namespace std;
class word
{
	public:
		string s;
		int i,j,n;
		void p(string s)
		{
			n = s.length();
			for(i=1;i<=n;i++){
			for(j=0;j<i;j++){
			cout<<s[j]<<" ";
		}
		cout<<endl;
	}
}
};
int main()
{
	string m;
	cout<<"String = ";
	cin>>m;
	word r;
	r.p(m);
}
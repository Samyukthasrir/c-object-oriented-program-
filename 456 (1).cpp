#include<iostream>
#include<string.h>
using namespace std;
int main(){
  int n=121,digit,rev=0,s;
  cin>>n;
  s = n;
  cout<<"Enter a number "<<n<<endl;
  while(n!=0){
    digit=n%10;
    rev=(rev*10)+digit;
    n=n/10;
    
  }
  if(rev==s){
    cout<<"it is a palindrome";
  }
  else{
    cout<<"it is not palindrome";
  }
}





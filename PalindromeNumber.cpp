#include<iostream>
using namespace std;

int main(){
  int n,rev;
  
  cout<<"Enter a number : ";
  cin>>n;
  
  int temp=n;
  
  while(n!=0){
    int digit=n%10;
    rev=rev*10+digit;
    n=n/10;
  }
  cout<<"\nReverse : "<<rev;
  
  if(temp==rev){
    cout<<"\nIt's a Palindrome Number";
  }else{
    cout<<"\nIt's not a Palindrome Number";
  }
  
}

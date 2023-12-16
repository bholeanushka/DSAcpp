#include<iostream>
using namespace std;

int main(){
	int n,sum;
	
	cout<<"Enter a number : ";
	cin>>n;
	int temp=n;
	
	while(n!=0){
		int digit=n%10;
		sum+=digit*digit*digit; //we can use cmath library's pow(digit) function
		n=n/10;
	}
	cout<<"\nArmstrong : "<<sum;
	if(temp==sum){
    	cout<<"\nIt's a Armstrong Number";
  	}else{
    	cout<<"\nIt's not a Armstrong Number";
  	}
}

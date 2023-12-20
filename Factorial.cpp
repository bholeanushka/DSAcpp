#include<iostream>

using namespace std;

int factorial(int n){
	if(n==0){
		return 1;
	}
	return n*factorial(n-1); //recursion
}
/*------------------------OR----------------------
int factorial(int n){
	int fact=1;
	for(int i=2;i<=n;i++){
		fact*=i;
	}
	return fact;
}
-----------------------------------------------------*/
int main(){
	int n;
	
	cout<<"Enter the number : ";
	cin>>n;
	
	cout<<"Factorial of "<<n<<" is : "<<factorial(n);
}
/*Output : 
Enter the number : 5
Factorial of 5 is : 120
--------------------------------
*/

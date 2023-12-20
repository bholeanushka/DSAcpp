#include<iostream>

using namespace std;

int factorial(int n){
	if(n==0){
		return 1;
	}
	return n*factorial(n-1);
}

int main(){
	int n,r;
	
	cout<<"Enter the Value of n : ";
	cin>>n;
	
	cout<<"Enter the Value of r : ";
	cin>>r;
	cout<<"nCr is : "<<factorial(n)/(factorial(n-r)*factorial(r));
}

/*Output : 
Enter the Value of n : 5
Enter the Value of r : 2
nCr is : 10
--------------------------------
*/

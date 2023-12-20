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
	
	cout<<"The Pascal Triangle : \n";
	for(int i =0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
		}
		cout<<endl;
	}
}
/*Output : 
Enter the Value of n : 4
The Pascal Triangle :
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

--------------------------------
*/

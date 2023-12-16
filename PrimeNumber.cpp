#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int n;
	int counter=0;
	cout<<"Enter Number : ";
	cin>>n;
	for(int i=2;i<sqrt(n);i++){  //can aslo use : i<sqrt(n) to reduce the time complexity
		if(n%i==0){
			counter++;
			cout<<"It's not a Prime Number";
		}
	}
	if(counter==0){
		cout<<"It's a Prime Number";
		
	}
	
	return 0;
	
}
// if there any factpr after the sqrt(n) then they're the multiple of smaller number which are already covered

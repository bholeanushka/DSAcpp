#include<iostream>

using namespace std;
/*int sum(int n){
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=i;
	}
	
	return ans;
}*/
int main(){
	int n;
	
	cout<<"Enter the Value of n : ";
	cin>>n;
	
	cout<<"SUM : "<<(n*(n+1))/2; /*Formula n(n+1)
                                             -----------
                                                 2			*/
	//OR -->
	//sum(n);
	
}
/*Output : 
Enter the Value of n : 5
SUM : 15
--------------------------------
*/

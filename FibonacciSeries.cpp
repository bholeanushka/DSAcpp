#include<iostream>
#include<math.h>
using namespace std;

void fib(int n){
	int x=0;
	int y=1;
	int nextterm;
	//cout<<x;
	for(int i=1;i<=n;i++){
		cout<<x<<endl;
		nextterm=x+y;
		x=y;
		y=nextterm;
		
	}
}
int main(){
	int n;
	
	cout<<"Enter the number : ";
	cin>>n;
	
	fib(n);
}
/*Output :
Enter the number : 5
0
1
1
2
3
*/

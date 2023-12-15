// Pattern Printing 

#include<iostream>

using namespace std;

int main(){
	int rows,col,n;
	
	cout<<"Enter Rows : ";
	cin>>rows;
	cout<<"Enter Columns : ";
	cin>>col;
	
	cout<<"\nRectangle Pattern : \n";
	for(int i = 0 ; i < rows ; i++){
		for(int j=0 ; j<col;j++){
			cout<<"* ";
		}
		cout<<"\n";
		
	}
	/*OutPut : 
	* * * *
	* * * *
	* * * *
	* * * *
	* * * *
*/
	cout<<"\nHollow Rectangle Pattern : \n";
	for(int i=0;i<rows;i++){
		for(int j=0;j<col;j++){
			if((i!=0 and i!=4)and(j!=0 and j!=3)){
				cout<<"  ";
			}
			else{
				cout<<"* ";	
			}
			
		}
		cout<<"\n";
	}
	/*OutPut : 
	* * * *
	*     *
	*     *
	*     *
	* * * *
*/
	
	cout<<"\nEnter N : ";
	cin>>n;
	
	cout<<"\nInverted Half Pyramid : \n";
	for(int i=n;i>0;i--){
		for(int j=i ; j>0;j--){
			cout<<"* ";
			
		}
		cout<<"\n";
	}
	/*OutPut : 
	* * * * *
	* * * *
	* * *
	* *
	*
*/
	cout<<"\nHalf Pyramid after 180 degree Rotation: \n";
	for(int i=0;i<n;i++){
		for(int j=0 ;j<n;j++){
			if(j<n-i-1){
				cout<<"  ";
			}
			else{
				cout<<"* ";	
			}
				
		}
		cout<<"\n";
	}
	/*OutPut : 
	        *
	      * *
	    * * *
	  * * * *
	* * * * *
*/
	cout<<"\nHalf Pyramid Using Numbers: \n";
	for(int i = 1;i<=rows;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	/*OutPut :
	1
	2 2
	3 3 3
	4 4 4 4
	5 5 5 5 5
*/
	cout<<"\nFloyd's Triangle : \n";
	int c=1;
	for(int i = 1 ; i<=rows ; i++){
		for(int j = 1 ;j<=i;j++){
			cout<<c<<" ";
			c++;
			
		}
		cout<<endl;
	}
	/*OutPut :
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15
*/
	int num;
	cout<<"\nButterfly pattern : \n";
	cout<<"Enter N : \n";
	cin>>num;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		int space=2*num-2*i;
		for(int j=1 ; j<=space;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<" *";
		}
		cout<<endl;
	}
	for(int i=num;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		int space=2*num-2*i;
		for(int j=1 ; j<=space;j++){
			cout<<"  ";
		}
		for(int j=1;j<=i;j++){
			cout<<" *";
		}
		cout<<endl;
	}
	/*Output : 
	*              *
	* *          * *
	* * *      * * *
	* * * *  * * * *
	* * * *  * * * *
	* * *      * * *
	* *          * *
	*              *
 */
} 

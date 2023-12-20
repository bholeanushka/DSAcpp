#include<iostream>

using namespace std;

/*bool isPythagorean(int x,int y,int z){
	int m=max(x,max(y,z));
	if(m==z){
		if(m*m==(x*x)+(y*y)){
			return true;
		}
	}else if(m==y){
		if(m*m==(x*x)+(z*z)){
			return true;
		}
	}else{
		if(m*m==(z*z)+(y*y)){
			return true;
		}
	}
	
	return false;
}
-------------OR----------------------*/
bool isPythagorean(int x,int y,int z){
	int m=max(x,max(y,z));
	int a,b;
	if(m==z){
		a=x;
		b=y;
	}else if(m==y){
		a=x;
		b=z;
	}else{
		a=z;
		b=y;
	}
	
	return m*m==(a*a)+(b*b);
}

int main(){
	int x,y,z;
	
	cout<<"Enter the Value of x,y,z : ";
	cin>>x>>y>>z;
	
	if(isPythagorean(x,y,z)){
		cout<<x<<","<<y<<","<<z<<" are Pythagorean Triplet";
	}else{
		cout<<x<<","<<y<<","<<z<<" are not Pythagorean Triplet";
	}
	
}

/*Output
Enter the Value of x,y,z : 3
5
4
3,5,4 are Pythagorean Triplet
--------------------------------
Enter the Value of x,y,z : 3
3
3
3,3,3 are not Pythagorean Triplet
--------------------------------
*/

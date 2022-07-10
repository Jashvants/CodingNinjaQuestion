#include<iostream>
using namespace std;

int multiplyNumbers(int x,int y){
	
	// If x is less than y swap the 
	if(x<y){
		return multiplyNumbers(y,x);
	}
	// iteratively calculate y times sum of x
	else if(y!=0){
		return (x+multiplyNumbers(x,y-1));
		
	}
	// if any of the two numbers is zero return zero
	else{
		return 0;
	}
}


int main(){
	int m,n;
	cin>>m>>n;
	cout<<multiplyNumbers(m,n)<<endl;
}

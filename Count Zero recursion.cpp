#include<iostream>
using namespace std;

int countZeroes(int n){
	
	static int count =0;
	if(n>0){
		if(n%10==0)
			count++;
			
			countZeroes(n/10);
			
		
			
	}
		return count;
	
	
	
	
//	if(n==0){
//		return 1;
//	}
//	int c=0;
//	
//	int output = countZeroes(n%10);
//	if(n==0){
//	
//	c++;
//	}
//	
//	return c;
}


int main(){
	
	int n;
	cin>>n;
	cout<<countZeroes(n)<<endl;
	
}

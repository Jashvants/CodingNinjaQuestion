#include<iostream>
using namespace std;

int count(int n){
	static int c=0;
	
	if(n>0){
		c ++;
		count(n/10);
	}
	else{
	
	
	return c;}
}

int main(){
	int n;
	cin>>n;
	cout<<count(n)<<endl;
}

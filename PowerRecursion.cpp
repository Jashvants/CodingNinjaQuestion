#include<iostream>
using namespace std;

int power(int x,int n){
	if(n!=0){
	
	int output= x * power(x,n-1);
	return output;
}
else 
return 1;
}

int main()
{
	int x,n;
	cin>>x>>n;
	cout<<power(x,n)<<endl;
	
}

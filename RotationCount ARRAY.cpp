#include<iostream>
using namespace std;

int arrayRotateCheck(int *arr,int n){
	int minidx=0;
	int minno=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<minno){
			minno=arr[i];
			minidx=i;
		}
	}
	return minidx;
	
}


int main()
{
	int t;
	cin>>t;
	while(t--){
		int size;
		cin>>size;
		int *input=new int[size];
		
		
		for(int i=0;i<size;i++){
			cin>>input[i];
		}
		cout<<arrayRotateCheck(input,size)<<endl;
		delete[] input;
	}
}

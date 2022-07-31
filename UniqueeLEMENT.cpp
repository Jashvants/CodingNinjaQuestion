#include<iostream>
#include<string>
using namespace std;

int findUnique(int *arr,int n){
//	for(int i=0;i<n;i++){
//		int j=0;
//		for(;j<n;j++){
//			if(i!=j && arr[i]==arr[j]){
//				break;
//			}
//		}
//		if(j==n){
//			return arr[i];
//		}
//	}
	// Time complexity : O(n)
	// Space complexity = O(1)
	
	int XOR =0;
	for(int i=0;i<n;++i){
		XOR  = XOR ^ arr[i];
	}
	return XOR;
}

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int size;
		cin>>size;
		int *input= new int[size];
		for(int i=0;i<size;i++){
			cin>>input[i];
		}
		
		cout<<findUnique(input,size)<<endl;
	}
	return 0;
	
}

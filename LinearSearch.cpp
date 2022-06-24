#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int linearsearch(int *arr,int n, int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}

int main(){
	int testcase,n,arr[100],x;
	cin>>testcase;
	cin>>n;
	
	for(int i=1;i<=testcase;i++){
	     for(int i=0;i<n;i++){
		    cin>>arr[i];
	}
	
	cout<<"Enter the value that you want to search";
	cin>>x;
	int result= linearsearch(arr,n,x);
	
	cout<<result;
	
	
	
	
	
	}
	
	linearsearch(arr,n,x);
}

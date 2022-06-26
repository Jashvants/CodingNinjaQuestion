#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	for(int j=0;j<n-1;j++){
	
	for(int i=0;i<n-1-j;i++){
		if(arr[i]>arr[i+1]){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
		}
	}
}

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int size;
		cin>>size;
		int *input=new int[size];
		for(int i=0;i<size;i++){
			cin>>input[i];
			
		}
		bubbleSort(input,size);
		for(int i=0;i<size;i++){
			cout<<input[i]<<" ";
		}
		delete[] input;
		cout<<endl;
	}
}

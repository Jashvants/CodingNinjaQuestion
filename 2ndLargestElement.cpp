#include<iostream>
#include<climits>
using namespace std;

int findSecondLargest(int *arr,int size){
	if(size<=0){
		return INT_MIN;
	}
	int largest=arr[0];
	
	int secondLargest=INT_MIN;
	
	for(int i=1;i<size;i++){
		if(arr[i]>largest){
			secondLargest=largest;
			largest=arr[i];
		}
		else if(arr[i]>secondLargest && arr[i]!=largest){
			secondLargest=arr[i];
		}
	}
	return secondLargest;
	
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
		
		cout<<findSecondLargest(input,size)<<endl;
		delete[] input;
	}
	return 0;
}

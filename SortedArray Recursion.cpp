#include <iomanip>
#include<iostream>
using namespace std;

bool is_sorted2(int a[], int size){
	if(size==0 || size==1){
		return true;
	}
	
	bool isSmallerOutput= is_sorted2(a+1,size-1);
	if(!isSmallerOutput){
		return false;
	}
	
	if(a[size-1]>a[size-2]){
		return false;
	}
	else{
		return true;
	}
}


bool is_sorted(int a[], int size){
	if(size==0|| size==1){
		return true;
	}
	
	if(a[size-1]>a[size-2]){
		return false;
	}
	
	return is_sorted(a,size-1);
}

int main(){
	int arr[20];
	int size;
	cin>>size;
	
	for(int i=0;i<size;i++){
		cin>>arr[i];
		
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<"If your array is sorted then 1 otherwise 0 == ";

	
  	is_sorted(arr , size);
  	if(is_sorted(arr,size)){
  		cout<<"Yes"<<endl;
  		
	  }
	  else{
	  	cout<<"NO";
	  }

	
}

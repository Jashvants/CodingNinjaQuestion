#include<iostream>
#include<climits>
using namespace std;

int findUnique(int *arr,int size){
	for(int i=0;i<size;i++){
		int j=0;
		
		for(;j<size;j++){
			if(i!=j&&arr[i]==arr[j]){
				break;
			}
		}
		
		if (j==size){
			return arr[i];
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
	cout<<findUnique(input,size)<<endl;
}


}

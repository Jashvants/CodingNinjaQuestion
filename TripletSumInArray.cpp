#include<iostream>
using namespace std;

/*NOTE:- GIVEN SOLUTION IS NOT GOOD BECAUSE TIME COMPLEXITY OF THIS SOLUTION IS O(n^3).


int tripletSum(int *input, int size, int x){
	int count=0;
	
	for(int i=0;i<size;i++){
		for(int j=0;j<i;j++){
			for(int k=0;k<j;k++){
				if(input[i]+input[j]+input[k]==x){
					count++;
				}
			}
		}
	}
	return count;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int size;
		int x;
		cin>>size;
		int *input=new int[size];
		
		for(int i=0;i<size;i++){
			cin>>input[i];
		}
		
		cin>>x;
		cout<<tripletSum(input,size,x);
		
		delete [] input;
	}
	
	return 0;
}


#include<iostream>
using namespace std;


/*Time complexity of this solution is O(n^2) Because of nested loop.
Space complexity is O(1)  since we are not using any extra space
*/

int pairSum(int *input,int size,int x){
	int count =0;
	
	for(int i=0;i<size;i++){
		for(int j=0;j<i;j++){
			if(i!=j&&input[i]+input[j]==x){
				count++;
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
		
		cout<<pairSum(input,size,x);
		
		delete[] input;
		
	}return 0;
}

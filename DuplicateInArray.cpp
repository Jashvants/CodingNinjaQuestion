#include<iostream>
#include<climits>

using namespace std;

int duplicate(int *arr, int size){
//	int duplicate;
//	for(int currentNumber=1;currentNumber<=size-1;currentNumber++){
//		
//	int count=0;
//	
//	for(int i=0;i<size;i++){
//	
//	if(arr[i]==currentNumber){
//		count++;
//	}
//}
//	
//	if(count>1){
//		
//		duplicate=currentNumber;
//	}
//}
//return duplicate;


// XOR APPROACH OF THIS PROBLEM

   int answer=0;
   for(int i=0;i<size;i++){
   	answer=answer^arr[i];
   }
   for(int i=0;i<=size-2;i++){
   	answer=answer^i;
   }
   
   return answer;




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
		cout<<duplicate(input,size);
	}
	return 0;
}

#include<iostream>

using namespace std;

void rotate(int *arr,int d,int size){
	    /* storing 1st D elements in temporary array */
  int temp[d];
  for (int i=0;i<d;i++)
  {
    temp[i]=arr[i];
  }
  
  /* shifting remaining elements of the array */
  int x=0;
  for(int j=d;j<n;j++)
  {
    arr[x]=arr[j];
    x++;
  }
  
  /* storing back the D elements to the orignal array */
  x=0;
  for (int k=n-d;k<n;k++)
  {
    arr[k]=temp[x];
    x++;
  }
	
	//I tried this but failed.
	//Dont worry keep trying , Practice makes men perfect.
	
//	int end=size-1;
//	while(k)
//	for(int i=0;i<size;i++){
//		int temp=arr[i];
//		arr[i]=arr[i+1];
//		arr[end]=temp;
//	}
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
		int d;
		cin>>d;
		rotate(input,d,size);
		for(int i=0;i<size;i++){
			cout<<input[i]<<" ";
			
		}
		delete[] input;
		cout<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;

int length(char input[]){
	int count=0;
	for(int i=0;input[i]!='\0' ;i++){
		count++;
	}
	return count;
}

void reverseWords(char input[], int i,int j){
	while(i<j){
		char temp=input[i];
		input[i]=input[j];
		input[j]=temp;
		i++;
		j--;
	}
}

void reverseWordWise(char input[]){
	//reverse the whole string
	int len=length(input);
	int i=0,j=len-1;
	while(i<j){
		char temp=input[i];
		input[i]=input[j];
		input[j]=temp;
		i++;
		j--;
	}
	
	//Reverse individual word in the string
	int start=0,end=0;
	for(i=0;i<len;i++){
		if(input[i]==' '){
			end=i-1;
			reverseWords(input,start,end);
			start=i+1;
			end=i+1;
		}
	}
	end=i-1;
	reverseWords(input,start,end);
}


int main(){
	char input[1000];
	cin.getline(input,1000);
	reverseWordWise(input);
	cout<<input<<endl;
	

}

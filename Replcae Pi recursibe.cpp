#include<iostream>
using namespace std;

int length(char input[]){
	int count=0;
	for(int i=0;input[i]!='\0';i++){
		count++;
	}
	return count;
}


void replacePiHelper(char str[],int start){
	// Base condition if string is empty or of length of one
	if(str[start]=='\0' || str[start+1]=='\0'){
		return ;
	}
	
	//getting answer from
	//Recursion for the smaller problem
	
	replacePiHelper(str,start+1);
	
	//small calculation part 
	//if teh first character is 'p'
	// and the first char of the part
	// passed to recursion is 'i' then replace
	// pi with 3.14
	
	if(str[start]=='p' && str[start+1]=='i'){
		// shifting the character to 
		//right side to put 3.14 in
		//the character array
		
		
		for(int i= length(str);i>=start+2;i--){
			str[i+2]= str[i];
		}
		
	// Replacing with 3.14
	
	str[start]='3';
	str[start+1]='.';
	str[start+2]='1';
	str[start+3]='4';
	}
	
	
	
}
void replacePi(char input[]){
	replacePiHelper(input,0);
	
}

int main(){
	char input[1000];
	cin.getline(input,1000);
	replacePi(input);
	cout<<input<<endl;
	
}

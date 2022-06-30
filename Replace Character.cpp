#include<iostream>
#include<cstring>
using namespace std;

int length(char input[]){
	int count=0;
	for(int i=0;input[i]!='\0';i++){
		count++;
	}
	return count;
}

void replaceCharacter(char input[], char c1,char c2)
{
	for(int i=0;i<length(input);i++){
		if(input[i]== c1){
			input[i]=c2;
			
		}
	}
	
	
	
}


int main() 
{
	char input[1000];
	char c1,c2;
	cin>>input;
	cin>>c1>>c2;
	replaceCharacter(input,c1,c2);
	cout<<input<<endl;
	
}

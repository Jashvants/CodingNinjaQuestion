#include<iostream>
#include<string.h>

#include<math.h>

using namespace std;

void pairStar(char input[])
{
	if(strlen(input)==1){
		return ;
	}
	pairStar(input+1);
	
	if(input[0]==input[1]){
		int i=strlen(input);
		while(i>=1){
			input[i+1]=input[i];
			i--;
		}
		input[i+1]='*';
	}
}

int main(){
	char input[100];
	cin.getline(input,100);
	pairStar(input);
	cout<<input<<endl;
}

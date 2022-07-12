#include <iostream>

using namespace std;

int sumOfDigits(int n){
	if(n<=9){
		return n ;
	}
	
	int sum = n%10 + sumOfDigits(n/10);
	return sum;

}

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}


#include<iostream>
using namespace std;


// constraint: n >= 0
int sumOfDigits(int n) {

	if (n == 0) {
		return 0;
	} else {
		int smallAns = sumOfDigits(n / 10);
		int currentLastDigit = n % 10;
		return currentLastDigit + smallAns;
	}
}




int main() {

	cout<<sumOfDigits(0)<<endl;			// 0
	cout<<sumOfDigits(1)<<endl;			// 1
	cout<<sumOfDigits(10)<<endl;		// 1
	cout<<sumOfDigits(15)<<endl;		// 6
	cout<<sumOfDigits(3)<<endl;			// 3
	cout<<sumOfDigits(123)<<endl;		// 6
	cout<<sumOfDigits(54)<<endl;		// 9



	return 0;
}

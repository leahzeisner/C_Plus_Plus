#include<iostream>
using namespace std;


// constraint: n >= 0
int countDigits(int n) {

	if (n == 0) {
		return 0;
	} else {
		int smallAns = countDigits(n / 10);
		return smallAns + 1;
	}
}




int main() {


	cout<<countDigits(0)<<endl;		// 0
	cout<<countDigits(1)<<endl;		// 1
	cout<<countDigits(56)<<endl;	// 2
	cout<<countDigits(362)<<endl;	// 3
	cout<<countDigits(7564)<<endl;	// 4

	return 0;
}

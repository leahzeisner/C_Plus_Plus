#include<iostream>
using namespace std;



// constraint; n >= 1
int countZeros(int n) {

	if (n == 0) {
		return 0;
	} else {
		int smallAns = countZeros(n / 10);
		int lastDigit = n % 10;

		if (lastDigit == 0) {
			return 1 + smallAns;
		} else {
			return smallAns;
		}
	}
}




int main() {


	cout<<countZeros(10)<<endl;			// 1
	cout<<countZeros(10603)<<endl;		// 2
	cout<<countZeros(1032)<<endl;		// 1
	cout<<countZeros(100001)<<endl;		// 4
	cout<<countZeros(583629)<<endl;		// 0



	return 0;
}

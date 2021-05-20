#include<iostream>
using namespace std;




// RULES: can't use * operator, for loop, or while loop
int multiplyByAdding(int m, int n) {

	if (n == 0) {
		return 0;
	} else {
		int smallAns = multiplyByAdding(m, n-1);  // 5 2
		return m + smallAns;
	}
}




int main() {

	// multiplyByAdding(5, 3);
	// m = 5, n = 3

	// 5 + multiplyByAdding(5, 2);  --> 5 + 10 = 15 = ANSWER
	// 5 + multiplyByAdding(5, 1);  --> 5 + 5 = 10
	// 5 + multiplyByAdding(5, 0);  --> 5 + 0 = 5
	// multiplyByAdding(5, 0) --> 0


	cout<<multiplyByAdding(0, 0)<<endl;		// 0
	cout<<multiplyByAdding(5, 0)<<endl;		// 0
	cout<<multiplyByAdding(0, 5)<<endl;		// 0
	cout<<multiplyByAdding(1, 1)<<endl;		// 1
	cout<<multiplyByAdding(1, 5)<<endl;		// 5
	cout<<multiplyByAdding(5, 1)<<endl;		// 5
	cout<<multiplyByAdding(3, 5)<<endl;		// 15


	return 0;
}

#include<iostream>
using namespace std;


int power(int x, int n) {

	if (n == 0) {
		return 1;
	} else {
		return x * power(x, n-1);
	}
}

int main() {


	cout<<power(5, 3)<<endl;  // 125
	cout<<power(5, 0)<<endl;  // 1
	cout<<power(3, 5)<<endl;  // 243
	cout<<power(0, 5)<<endl;  // 0
	cout<<power(0, 0)<<endl;  // 1



	return 0;
}

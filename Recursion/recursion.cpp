#include<iostream>
using namespace std;



int factorial(int n) {

	if (n < 0) {
		return -1;
	}

	if (n == 0) {
		return 1;
	} else {
		int smallAns = factorial(n-1);
		return n * smallAns;
	}



}






int main() {


	int n;
	cout<<"Enter a number to get the factorial of: ";
	cin>>n;

	int ans = factorial(n);
	cout<<ans<<endl;




	return 0;
}

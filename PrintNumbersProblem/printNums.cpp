#include<iostream>
using namespace std;


// Print numbers from 1 to n
void printNumbers(int n) {

	if (n <= 0) {
		return;
	} else {
		printNumbers(n-1);
		cout<<n<<" ";
	}
}




// Print numbers from 1 to n
void printNumbersReverse(int n) {

	if (n <= 0) {
		return;
	} else {
		cout<<n<<" ";
		printNumbersReverse(n-1);
	}
}




int main() {



	printNumbers(-1); 	// prints nothing
	cout<<endl;

	printNumbers(0); 	// prints nothing
	cout<<endl;

	printNumbers(1);	// 1
	cout<<endl;

	printNumbers(2);	// 1 2
	cout<<endl;

	printNumbers(5);	// 1 2 3 4 5
	cout<<endl;

	printNumbers(10);	// 1 2 3 4 5 6 7 8 9 10
	cout<<endl;





	printNumbersReverse(-1); 	// prints nothing
	cout<<endl;

	printNumbersReverse(0); 	// prints nothing
	cout<<endl;

	printNumbersReverse(1);		// 1
	cout<<endl;

	printNumbersReverse(2);		// 2 1
	cout<<endl;

	printNumbersReverse(5);		// 5 4 3 2 1
	cout<<endl;

	printNumbersReverse(10);	// 10 9 8 7 6 5 4 3 2 1



	return 0;
}

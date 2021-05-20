#include<iostream>;
using namespace std;


void printHello() {
	cout<<"Hello"<<endl;
}

int add(int a, int b) {
	return a + b;
}


// doesn't swap the original variables passed in, just gives value
void mySwapCallByValue(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

// does swap the original variables passed in, given entire bucket (variable)
void mySwapCallByReference(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {


	printHello();
	cout<<add(4, 5)<<endl;


	// CALL BY VALUE
	int x = 5;
	int y = 7;
	cout<<"Before swapping: x="<<x<<", y="<<y<<endl; // x=5, y=7
	mySwapCallByValue(x, y);
	cout<<"After swapping: x="<<x<<", y="<<y<<endl;  // x=5, y=7



	// CALL BY REFERENCE
	int a = 5;
	int b = 7;
	cout<<"Before swapping: a="<<a<<", b="<<b<<endl; // a=5, b=7
	mySwapCallByReference(a, b);
	cout<<"After swapping: a="<<a<<", b="<<b<<endl;  // a=7, b=5



	return 0;
}

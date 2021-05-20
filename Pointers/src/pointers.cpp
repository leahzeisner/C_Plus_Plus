#include<iostream>
using namespace std;

int main() {

	int i = 10;
	int * pointer = &i;

	cout<<&i<<endl;  		// same memory location
	cout<<&pointer<<endl;   // same memory location

	// DEREFERENCE OPERATION -> go to memeory location and print what's stored there
	cout<<*pointer<<endl;   // 10


	cout<<&i<<endl;         // same memory location
	cout<<pointer<<endl;    // same memory location

	i = 25;

	cout<<i<<endl;          // 25
	cout<<*pointer<<endl;   // 25


	return 0;
}

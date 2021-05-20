#include <iostream>
using namespace std;

int main() {

	int a = 1;
	a++;  // post increment
	++a;  // pre increment

	cout<<a<<endl;  // 3
	cout<<endl;


	// POST INCREMENT
	// assign value of a to x (x = a = 1), then increment value of a (a = 2)
	int b = 1;
	int x = b++;
	cout<<b<<endl;  // 2
	cout<<x<<endl;  // 1


	// PRE INCREMENT
	// increment value of c (c = 2), then assign value of c to y (y = c = 2)
	int c = 1;
	int y = ++c;
	cout<<c<<endl;  // 2
	cout<<y<<endl;  // 2
	cout<<endl;






	int d = 3;
	d--;
	--d;

	cout<<b<<endl;  // 1
	cout<<endl;


	// POST DECREMENT
	// assign value of e to f (e = f = 1), then decrement value of e (e = 0)
	int e = 1;
	int f = e--;
	cout<<e<<endl;  // 0
	cout<<f<<endl;  // 1
	cout<<endl;

	// PRE DECREMENT
	// decrement value of g (g = 0), then assign value of g to h (h = g = 0)
	int g = 1;
	int h = --g;
	cout<<g<<endl;  // 0
	cout<<h<<endl;  // 0
	cout<<endl;




	return 0;
}

#include<iostream>
using namespace std;

int main() {

	int a = 10;
	int y = a;

	int &x = a;
	int &z = a;

	a++;
	x++;
	y++;
	z++;

	cout<<a<<endl;  // 13
	cout<<x<<endl;  // 13
	cout<<y<<endl;  // 11
	cout<<z<<endl;  // 13




	return 0;
}

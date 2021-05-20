#include <iostream>
using namespace std;

int main() {

	int a[4] = {1, 2, 3, 4};

	cout<<a[0]<<endl;  // 1


	int b[4];
	b[0] = 5;
	b[1] = 6;
	cout<<b[2]<<endl;  // 0


	return 0;
}

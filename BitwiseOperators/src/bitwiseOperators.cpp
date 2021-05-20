#include<iostream>;
using namespace std;

int main() {


	// 0 & 0 -> 0
	// 0 & 1 -> 0
	// 1 & 0 -> 0
	// 1 & 1 -> 1

	//  101
	//  011
	// ----
	//  001


	// 5 'BITWISE AND' 3
	cout<<(5&3)<<endl;      // 1

	// 3 'BITWISE AND' 7
	cout<<(3&7)<<endl;      // 3





	// 5 'BITWISE OR' 3
	cout<<(5|3)<<endl;      // 7

	// 3 'BITWISE OR' 7
	cout<<(3|7)<<endl;      // 7




	// 'NOT' 5
	cout<<(~5)<<endl;       // -6

	// 'NOT' 1
	cout<<(~1)<<endl;       // -2




	// 5 'XOR' 3
	cout<<(5^3)<<endl;       // 6

	// 5 'XOR' 0
	cout<<(5^0)<<endl;       // 5

	// 5 'XOR' 5
	cout<<(5^5)<<endl;       // 0

	cout<<(2^3^5^3^5)<<endl;  // 2




	// 1 'LEFT SHIFT' 3
	cout<<(1<<3)<<endl;      // 8

	// 3 'RIGHT SHIFT' 1
	cout<<(3>>1)<<endl;      // 1




	return 0;
}

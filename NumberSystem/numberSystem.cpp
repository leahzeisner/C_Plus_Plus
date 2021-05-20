#include<iostream>
#include<cmath>
using namespace std;



// constraint: 0 <= binary
int binaryToDecimal(int binary) {

	int decimal = 0;
	int base = 1;

	while (binary != 0) {
		int remainder = binary % 10;
		decimal += remainder * base;
		base *= 2;
		binary /= 10;
	}
	return decimal;
}




int decimalToBinary(int decimal) {

	// ull = unsigned long long int
	int binary = 0;
	int index = 0;

	while (decimal > 0) {
		int remainder = decimal % 2;
		int c = pow(10, index);
		binary += remainder * c;
		decimal /= 2;
		index++;
	}

	return binary;

}




// constraint: 0 < decimal < 1000000000
void printDecimalToOctal(int decimal) {

	string octal = "";

	while (decimal != 0) {
		int remainder = decimal % 8;
		decimal /= 8;
		char c = remainder + '0';
		octal = c + octal;
	}
	cout<<octal<<endl;
}



// calculates the number of 1's in the binary representation of the given int
int countOnes(int decimal) {

	string binary = to_string(decimalToBinary(decimal));

	int count = 0;

	for (int i = 0; i < binary.length(); i++) {
		if (binary[i] == '1') {
			count++;
		}
	}
	return count;

}





int main() {

	// NUMBER SYSTEM:
	// Weighted vs. Unweighted

	// WEIGHTED = each digit assigned some weight on basis of position
	// 			EX: decimal number system
	//				number = 235
	//						2 -> 10^2
	//						3 -> 10^1
	//						4 -> 10^0

	// UNWEIGHTED = eahc digit has the same weight
	// 			EX: tally number system
	//				number = 111  -->  all digits have weight of 1




	cout<<binaryToDecimal(0)<<endl;				// 0
	cout<<binaryToDecimal(1)<<endl;				// 1
	cout<<binaryToDecimal(1000)<<endl;			// 8
	cout<<binaryToDecimal(1010)<<endl;			// 10
	cout<<binaryToDecimal(1111)<<endl;			// 15
	cout<<binaryToDecimal(10000)<<endl;			// 16
	cout<<binaryToDecimal(1100101)<<endl;		// 101
	cout<<binaryToDecimal(101100110)<<endl;		// 358


	cout<<endl;


	printDecimalToOctal(1);						// 1
	printDecimalToOctal(8);						// 10
	printDecimalToOctal(10);					// 12
	printDecimalToOctal(15);					// 17
	printDecimalToOctal(16);					// 20
	printDecimalToOctal(101);					// 145
	printDecimalToOctal(358);					// 546


	cout<<endl;


	cout<<countOnes(0)<<endl;					// 0
	cout<<countOnes(1)<<endl;					// 1
	cout<<countOnes(5)<<endl;					// 2
	cout<<countOnes(4)<<endl;					// 1
	cout<<countOnes(15)<<endl;					// 4
	cout<<countOnes(54)<<endl;					// 4
	cout<<countOnes(101)<<endl;					// 4
	cout<<countOnes(358)<<endl;					// 5

	return 0;
}








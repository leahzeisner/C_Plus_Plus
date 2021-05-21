#include<iostream>
using namespace std;



// print pattern corresponding to n
// for n = 6:
// 1
// 11
// 111
// 1001
// 11111
// 100001

void print(int n){

	if (n == 1) {
		cout<<1<<endl;
	} else if (n % 2 == 0) {
		print(n-1);
		cout<<1;
		for (int i = 0; i < n-2; i++) {		// even --> 1 *(n-2) zeros* 1
			cout<<0;
		}
		cout<<1<<endl;
	} else {
		print(n-1);
		for (int i = 0; i < n; i++) {		// odd --> n 1's
			cout<<1;
		}
		cout<<endl;
	}
}





// print pattern corresponding to n
// for n = 6:
// 1
// 11
// 202
// 3003
// 40004
// 500005

void print2(int n){

	if (n == 1) {
		cout<<1<<endl;
	} else if (n == 2) {
		print2(n-1);
		cout<<11<<endl;
	} else {
		print2(n-1);

		cout<<n-1;
		for (int i = 0; i < n-2; i++) {
			cout<<0;
		}
		cout<<n-1<<endl;
	}
}





// hourglass pattern
//5 4 3 2 1 0 1 2 3 4 5
//  4 3 2 1 0 1 2 3 4
//    3 2 1 0 1 2 3
//	    2 1 0 1 2
//	      1 0 1
//		    0
//		  1 0 1
//	    2 1 0 1 2
//	  3 2 1 0 1 2 3
//  4 3 2 1 0 1 2 3 4
//5 4 3 2 1 0 1 2 3 4 5

void hourglass(int n) {

	// first get top of hourglass
	int count = n;
	int numSpaces = 0;
	while (count >= 0) {
		for (int s = 0; s < numSpaces; s++) {
			cout<<" ";
		}
		for (int i = count; i >= 0; i--) {
			cout<<i<<" ";
		}
		for (int j = 1; j <= count; j++) {
			cout<<j<<" ";
		}
		cout<<endl;
		numSpaces += 2;
		count--;
	}

	// then get bottom of hourglass
	count = 1;
	numSpaces = 2 * (n-1);
	while (count <= n) {
		for (int s = 0; s < numSpaces; s++) {
			cout<<" ";
		}
		for (int i = count; i >= 0; i--) {
			cout<<i<<" ";
		}
		for (int j = 1; j <= count; j++) {
			cout<<j<<" ";
		}
		cout<<endl;
		numSpaces -= 2;
		count++;
	}

}





// pattern
// for n = 5
//1
//2 2
//3 0 3
//4 0 0 4
//5 0 0 0 5
void print3(int n) {

	if (n == 1) {
		cout<<1<<endl;
	} else if (n == 2) {
		print3(n-1);
		cout<<2<<" "<<2<<endl;
	} else {
		print3(n-1);

		cout<<n<<" ";
		for (int i = 0; i < n-2; i++) {
			cout<<0<<" ";
		}
		cout<<n<<endl;
	}
}





// fibonacci pattern
// for n = 4
// 0
// 1 1
// 2 3 5
// 8 13 21 34
// constraint: n >= 1
void fibonacciPattern(int n) {

	int firstFib = 0;
	int secondFib = 1;

	int row = 1;
	int colCount = 1;

	while (row <= n) {

		int col = 1;

		while (col <= colCount) {
			cout<<firstFib<<" ";
			int thirdFib = firstFib + secondFib;
			firstFib = secondFib;
			secondFib = thirdFib;
			col++;
		}
		cout<<endl;
		row++;
		colCount++;
	}
}





// mountain pattern
// for n = 5:
// 1			   1  --> spaces = 7
// 1 2		     2 1  --> spaces = 5
// 1 2 3       3 2 1  --> spaces = 3
// 1 2 3 4   4 3 2 1  --> spaces = 1
// 1 2 3 4 5 4 3 2 1

// for n = 2:
// 1   1
// 1 2 1

// for n = 1:
// 1
// constraint: 0 < n < 10
void mountainPattern(int n) {

	int spaces = (2 * n) - 3;
	int colCount = 1;

	for (int i = 1; i <= n; i++) {

		int num = 1;

		// first half of numbers
		for (int col = 1; col <= colCount; col++) {
			if (col != n) {
				cout<<num<<"\t";
			}
			num++;

		}


		// spaces
		for (int s = 1; s <= spaces; s++) {
			cout<<"\t";
		}


		// second half of numbers
		for (int col = num-1; col >= 1; col--) {
			cout<<col<<"\t";
		}

		cout<<endl;
		spaces -= 2;
		colCount++;
	}
}





// triangle pattern
// for n = 4:
//       1
//     2 3 2
//   3 4 5 4 3
// 4 5 6 7 6 5 4
void trianglePattern(int n) {

	int spaces = n - 1;

	for (int i = 1; i <= n; i++) {

		// spaces
		for (int s = 0; s < spaces; s++) {
			cout<<"\t";
		}


		// numbers increasing
		int midNum = 2*i - 1;
		for (int j = i; j <= midNum; j++) {
			cout<<j<<"\t";
		}


		// numbers decreasing
		for (int k = midNum - 1; k >= i; k--) {
			cout<<k<<"\t";
		}


		// spaces
		for (int s = 0; s < spaces; s++) {
			cout<<"\t";
		}

		cout<<endl;
		spaces--;
	}
}





// numbers and stars
// for n = 5:
// 1 2 3 4 5
// 1 2 3 4 *
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *
void numsAndStars(int n) {

	int starCount = 0;
	int numCount = n;

	while (numCount >= 1) {

		for (int i = 1; i <= numCount; i++) {
			cout<<i<<"\t";
		}

		for (int s = 1; s <= starCount; s++) {
			cout<<"*\t";
		}

		cout<<endl;
		numCount--;

		if (starCount > 0) {
			starCount += 2;
		} else {
			starCount++;
		}
	}
}





// numbers and stars pattern #2
// for n = 7:
// 1******
// 12*****
// 123****
// 1234***
// 12345**
// 123456*
// 1234567
// constraint: 1 <= n <= 10
void numsAndStars2(int n) {

	int numCount = 1;
	int starCount = n - 1;

	while (numCount <= n) {

		// numbers
		for (int i = 1; i <= numCount; i++) {
			cout<<i;
		}

		// stars
		for (int s = 1; s <= starCount; s++) {
			cout<<"*";
		}

		cout<<endl;
		numCount++;
		starCount--;
	}
}





// print first n1 terms of series 3n + 2 that are NOT multiples of n2
// constraints: 0 < n1 < 100, 0 < n2 < 100
// for n1 = 10, n2 = 4:
//	5
//  11
//  14
//  17
//  23
//  26
//  29
//  35
//  38
//  41
void printSeries(int n1, int n2) {

	int n = 1;
	int count = 0;
	int num;

	while(count < n1) {
		num = 3 * n + 2;

		if (num % n2 != 0) {
			cout<<num<<endl;
			count++;
		}

		n++;
	}
}





// hollow diamond pattern
// for n = 7:
// * * * * * * *
// * * *   * * *
// * *       * *
// *           *
// * *       * *
// * * *   * * *
// * * * * * * *

// for n = 5:
// * * * * *
// * *   * *
// *       *
// * *   * *
// * * * * *

// for n = 3:
// * * *
// *   *
// * * *
// constraint: n is ODD
void hollowDiamond(int n) {

	int starCount = n / 2;  // number of stars on each side of the spaces
	int spaceCount = 2;
	int rowCount = 1;

	while (rowCount <= n) {

		if (rowCount == 1 || rowCount == n) {
			for (int i = 1; i <= n; i++) {
				cout<<"*\t";
			}
			cout<<endl;
		} else {

			// first stars
			for (int i = 1; i < starCount; i++) {
				cout<<"*\t";
			}
			cout<<"*";


			// spaces
			for (int s = 1; s <= spaceCount; s++) {
				cout<<"\t";
			}


			// second stars
			for (int i = 1; i <= starCount; i++) {
				cout<<"*\t";
			}

			cout<<endl;

			if (rowCount > n / 2) {
				starCount += 1;
				spaceCount -= 2;
			} else {
				starCount -= 1;
				spaceCount += 2;
			}
		}
		rowCount++;
	}
}





// returns true if the given number is an Armstrong number
// ex: n = 1634 returns true bc 1^4 + 6^4 + 3^4 + 4^4 = 1634
void isArmstrongNumber(int n) {

	int m = n;
	int numDigits = 0;
	while (m) {
		numDigits++;
		m /= 10;
	}

	int sum = 0;
	m = n;

	while (m) {
		int digit = m % 10;
		int num = pow(digit, numDigits);
		sum += num;
		m /= 10;
	}

	if (n == sum) {
		cout<<"true"<<endl;
	} else {
		cout<<"false"<<endl;
	}
}









int main() {

	// PRINT

//	print(1);
//	cout<<endl;
//
//	print(2);
//	cout<<endl;
//
//	print(3);
//	cout<<endl;
//
//	print(4);
//	cout<<endl;
//
//	print(5);
//	cout<<endl;
//
//	print(6);
//	cout<<endl;





	// PRINT2

//	print2(1);
//	cout<<endl;
//
//	print2(2);
//	cout<<endl;
//
//	print2(3);
//	cout<<endl;
//
//	print2(4);
//	cout<<endl;
//
//	print2(5);
//	cout<<endl;
//
//	print2(6);
//	cout<<endl;





	// HOURGLASS

//	hourglass(0);
//	cout<<endl;
//
//	hourglass(1);
//	cout<<endl;
//
//	hourglass(2);
//	cout<<endl;
//
//	hourglass(3);
//	cout<<endl;
//
//	hourglass(5);





	// PRINT3

//	print3(1);
//	cout<<endl;
//
//	print3(2);
//	cout<<endl;
//
//	print3(3);
//	cout<<endl;
//
//	print3(4);
//	cout<<endl;
//
//	print3(5);
//	cout<<endl;
//
//	print3(6);
//	cout<<endl;





	// FIBONACCI PATTERN

//	fibonacciPattern(1);
//	cout<<endl;
//
//	fibonacciPattern(2);
//	cout<<endl;
//
//	fibonacciPattern(5);
//	cout<<endl;





	// MOUNTAIN PATTERN

//	mountainPattern(1);
//	cout<<endl;
//
//	mountainPattern(2);
//	cout<<endl;
//
//	mountainPattern(5);
//	cout<<endl;





	// TRIANGLE PATTERN

//	trianglePattern(1);
//	cout<<endl;
//
//	trianglePattern(2);
//	cout<<endl;
//
//	trianglePattern(5);
//	cout<<endl;





	// NUMBERS AND STARS PATTERN

//	numsAndStars(1);
//	cout<<endl;
//
//	numsAndStars(2);
//	cout<<endl;
//
//	numsAndStars(5);
//	cout<<endl;





	// NUMBERS AND STARS PATTERN #2

//	numsAndStars2(1);
//	cout<<endl;
//
//	numsAndStars2(2);
//	cout<<endl;
//
//	numsAndStars2(7);
//	cout<<endl;





	// PRINT SERIES

//	printSeries(10, 4);





	// HOLLOW DIAMOND PATTERN

//	hollowDiamond(1);
//	cout<<endl;
//
//	hollowDiamond(3);
//	cout<<endl;
//
//	hollowDiamond(5);
//	cout<<endl;
//
//	hollowDiamond(7);
//	cout<<endl;





	// IS ARMSTRONG NUMBER ?

	isArmstrongNumber(1634);	// true
	isArmstrongNumber(371);		// true
	isArmstrongNumber(123);	    // false








	return 0;
}









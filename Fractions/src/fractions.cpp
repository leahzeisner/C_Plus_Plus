#include<iostream>
#include<cmath>
using namespace std;



class Fraction{

private:
	int numerator;
	int denominator;

public:
	Fraction(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}

	void print() {
		if (this->denominator == 1) {
			cout<<this->numerator<<endl;
		} else {
			cout<<this->numerator<<"/"<<this->denominator<<endl;
		}

	}

	void add(Fraction f) {
		int lcm = this->denominator * f.denominator;
		int x = lcm / this->denominator;
		int y = lcm / f.denominator;
		int num = x * this->numerator + y * f.numerator;

		// store result in 'this' Fraction
		this->numerator = num;
		this->denominator = lcm;
	}

	void simplify() {
		int gcd = 1;
		int gcdMax = min(this->numerator, this->denominator);
		for (int i = 1; i <= gcdMax; i++) {
			if (this->numerator % i == 0 && this->denominator % i == 0) {
				gcd = i;
			}
		}
		this->numerator /= gcd;
		this->denominator /= gcd;
	}

};

int main() {

	Fraction f(10, 5);
	f.print();  // 2

	f.add(Fraction(4, 2));
	f.print();  // 4

	f.simplify();
	f.print();


	Fraction f2(4, 8);
	f2.simplify();
	f2.print();

	return 0;
}

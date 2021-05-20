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

	void print() const {
		if (this->denominator == 1) {
			cout<<this->numerator<<endl;
		} else {
			cout<<this->numerator<<"/"<<this->denominator<<endl;
		}

	}




	// add f1 + f2, and store it in a new Fraction f3
	Fraction add(Fraction const &f) const {
		int lcm = this->denominator * f.denominator;
		int x = lcm / this->denominator;
		int y = lcm / f.denominator;
		int num = x * this->numerator + y * f.numerator;

		// create new result Fraction
		Fraction fNew(num, lcm);
		fNew.simplify();
		return fNew;
	}


	// OPERATOR OVERLOADING (using f1 + f2 instead of f1.add(f2) )
	Fraction operator+(Fraction const &f) const {
		int lcm = this->denominator * f.denominator;
		int x = lcm / this->denominator;
		int y = lcm / f.denominator;
		int num = x * this->numerator + y * f.numerator;

		// create new result Fraction
		Fraction fNew(num, lcm);
		fNew.simplify();
		return fNew;
	}




	Fraction multiply(Fraction const &f2) const {
		int n = numerator * f2.numerator;
		int d = denominator * f2.denominator;

		Fraction fNew(n, d);
		fNew.simplify();
		return fNew;
	}


	// OPERATOR OVERLOADING (using f1 * f2 instead of f1.multiply(f2) )
	Fraction operator*(Fraction const &f2) const {
		int n = numerator * f2.numerator;
		int d = denominator * f2.denominator;

		// create new result Fraction
		Fraction fNew(n, d);
		fNew.simplify();
		return fNew;
	}




	// overload '=='
	bool operator==(Fraction const &f2) const {
		return (numerator == f2.numerator && denominator == f2.denominator);
	}




	// overload pre-increment (++f)
	Fraction& operator++() {
		numerator += denominator;
		simplify();

		return *this;  // return the content, not the address
	}




	// overload post-increment (f++)
	Fraction& operator++(int) {
		Fraction fNew(numerator, denominator);
		numerator += denominator;
		simplify();
		fNew.simplify();
		return fNew;
	}




	// overload '+='
	Fraction& operator+=(Fraction const &f) {
		int lcm = this->denominator * f.denominator;
		int x = lcm / this->denominator;
		int y = lcm / f.denominator;

		int num = x * this->numerator + y * f.numerator;

		numerator = num;
		denominator = lcm;

		simplify();
		return *this;
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


	// OPERATOR OVERLOADING
	// We want to do Fraction + Fraction using the plus sign.
	// We have to overload the plus sign operator to work
	// for our Fractions class


	Fraction f1(10, 2);
	Fraction f2(15, 4);

	Fraction f3 = f1.add(f2);

	f1.print();  //   10/2
	f2.print();  //   15/4
	f3.print();  //   35/4


	Fraction f4 = f1 + f2;
	f4.print();  //   35/4



	if (f1 == f2) {
		cout<<"Equal"<<endl;
	} else {
		cout<<"Not Equal"<<endl;   // Not Equal
	}


	Fraction f5(f1);
	if (f1 == f5) {
		cout<<"Equal"<<endl;       // Equal
	} else {
		cout<<"Not Equal"<<endl;
	}



	Fraction f6 = ++f1;
	f1.print();			//  10/2 + 2/2 = 12/2 = 6
	f6.print();			//  10/2 + 2/2 = 12/2 = 6


	f2.print();					// 15/4
	Fraction f7 = ++(++f2);
	f2.print();					// 23/4
	f7.print();					// 23/4



	Fraction frac(10, 2);
	Fraction frac2 = frac++;
	frac.print();				// 6
	frac2.print();				// 5



	int i = 5;
	int j = 3;
	(i += j) += j;
	cout<<i<<" "<<j<<endl;		// i = 11, j = 3

	frac += frac2;				// 6 = 6 + 5 = 11
	frac.print();				// 11
	frac2.print();				// 5



	return 0;
}















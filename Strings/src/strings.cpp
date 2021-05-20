#include<iostream>
#include<cstring>

using namespace std;

int main() {


//	char name[100];
//	cout<<"Enter your name: ";  // leah zeisner
//	cin.getline(name, 100);
//
//	cout<<"Your name is: "<<name<<endl;  // leah zeisner
//
//
//
//	char name2[100];
//	cout<<"Enter your name: ";  // leah zeisner
//	cin.getline(name2, 100, ' ');
//
//	cout<<"Your name is: "<<name2<<endl;  // leah




//	char myArr[100];
//	cout<<"Enter a string: "<<endl;
//	cin>>myArr;
//	int length = strlen(myArr);
//	cout<<"The length is: "<<length<<endl;
//
//
//	char mySecondArr[100];
//	cout<<"Enter another string: "<<endl;
//	cin>>mySecondArr;
//	bool areEqual = strcmp(myArr, mySecondArr);
//	if (areEqual == 0) {
//		cout<<"equal"<<endl;
//	} else {
//		cout<<"not equal"<<endl;
//	}




	char a[10] = "abc";
	char b[10] = "def";
	strcpy(a, b);         // copy content of b into a
	cout<<"a="<<a<<endl;  // "def"
	cout<<"b="<<b<<endl;  // "def"



	char d[10] = "abcd";
	char e[10] = "efghijk";
	strncpy(d, e, 3);     // copies first 3 characters of e into d
	cout<<"d="<<d<<endl;  // "efgd"
	cout<<"e="<<e<<endl;  // "efghijk"



	char x[10] = "abc";
	char y[10] = "def";
	strcat(x, y);
	cout<<"x="<<x<<endl;  // "abcdef"
	cout<<"y="<<y<<endl;  // "def"
















	return 0;
}

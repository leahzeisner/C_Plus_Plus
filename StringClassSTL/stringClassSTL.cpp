#include<iostream>
#include<vector>
#include <stdlib.h>
using namespace std;

int main() {



	string s = "abc";
	cout<<s<<endl;


	string s2;
	s2 = "def";
	cout<<s2<<endl;


	string *sp = new string;
	*sp = "mno";
	cout<<sp<<endl;		// address
	cout<<*sp<<endl;	// content ("mno")





	// 2D ARRAY OF STRINGS

	vector<string> v;
	v.push_back(s);
	v.push_back("hello");

	for (int i = 0; i < v.size(); i++) {
		cout<<v[i]<<" ";
		sort(v[i].begin(), v[i].end());			// abc abc hello ehllo
		cout<<v[i]<<" ";
	}
	cout<<endl;





	// GETTING A STRING AS USER INPUT   -->   getline(cin, string name)

	string s3;
	cout<<"Enter a string: "<<endl;
	getline(cin, s3);
	cout<<s3<<endl;





	// USING STRINGS

	string s4;
	s4 = "abcabc";
	cout<<s4[0]<<endl;			// a
	s4[0] = 'd';
	cout<<s4[0]<<endl;			// d


	string s5 = s2 + s4;		// s5 = "def" + "dbcabc"
	cout<<s5<<endl;				// defdbcabc

	cout<<s5.size()<<endl;		// 9
	cout<<s5.length()<<endl;	// 9

	string s6;
	s6 = s5.substr(0, 4);
	cout<<s6<<endl;				// defd
	cout<<s5.substr(3)<<endl;	// dbcabc


	cout<<s6.find("de")<<endl;  // 0
	cout<<s6.find("f")<<endl;   // 2


	int x = 12;
	string xStr = to_string(x);
	cout<<xStr<<endl;			// "12" (as a string)


	x = atoi(xStr.c_str());
	cout<<x<<endl;				// 12 (as an integer)




	return 0;
}











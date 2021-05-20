#include<iostream>
#include<vector>
using namespace std;



int main() {


	vector<int> *vp = new vector<int>();	// dynamic
	vector<int> v;							// static


	v.push_back(10);				// push 10 onto the end of the vector
	v.push_back(20);				// push 20 onto the end of the vector
	v.push_back(30);				// push 30 onto the end of the vector

					// SIZE INCREASES AS NEEDED (always doubles)


	cout<<v[0]<<endl;	// 10
	cout<<v[1]<<endl;	// 20
	cout<<v[2]<<endl;	// 30


	v[1] = 100;
	cout<<v[1]<<endl;	// 100;


	v.push_back(22);
	v.push_back(90);

	for (int i = 0; i < v.size(); i++) {		// 10 100 30 22 90
		cout<<v[i]<<" ";
	}
	cout<<endl;




	cout<<v.at(4)<<endl;	// 90
//	cout<<v.at(6)<<endl;	// ERROR



	v.pop_back();		// REMOVE LAST ELEMENT

	for (int i = 0; i < v.size(); i++) {		// 10 100 30 22
		cout<<v[i]<<" ";
	}
	cout<<endl;




	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {		// 10 22 30 100
		cout<<v[i]<<" ";
	}
	cout<<endl;



	cout<<v.capacity()<<endl;		// 4 elements, capacity = 8
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	cout<<v.capacity()<<endl;		// 8 elements, capacity = 8
	v.push_back(5);
	cout<<v.capacity()<<endl;		// 9 elements, capacity = 8





	vector<int> v2(10, -2);

	for (int i = 0; i < v2.size(); i++) {	// -2 -2 -2 -2 -2 -2 -2 -2 -2 -2
		cout<<v2[i]<<" ";
	}
	cout<<endl;


	vector<int> v3(10);

	for (int i = 0; i < v3.size(); i++) {	// 0 0 0 0 0 0 0 0 0 0
		cout<<v3[i]<<" ";
	}
	cout<<endl;











	return 0;
}

#include<iostream>
using namespace std;

int main() {

	int n;
	cout<<"Enter a number for the size of the array: ";
	cin>>n;


	int a[n];
	for (int i = 0; i < n; i++) {
		cout<<"Enter a number: ";
		cin>>a[i];
	}


	cout<<"Before: [ ";
	for (int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<"]"<<endl;


	sort(a, a + n);


	cout<<"Sorted: [ ";
	for (int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<"]"<<endl;



	return 0;
}

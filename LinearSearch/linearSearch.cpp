#include<iostream>
using namespace std;




int linearSearch(int a[], int n, int key) {

	for (int i = 0; i < n; i++) {

		if (a[i] == key) {
			return i;
		}
	}

	return -1;
}




int main() {


	int n;
	cout<<"Enter a number for the size of the array: ";
	cin>>n;


	int a[n];
	for (int i = 0; i < n; i++) {
		cout<<"Enter a number: ";
		cin>>a[i];
	}

	int key;
	cout<<"Enter a value to search for: ";
	cin>>key;


	int pos = linearSearch(a, n, key);

	if (pos == -1) {
		cout<<"Error: Given value not found in array.";
	} else {
		cout<<"Value found at index "<<pos<<endl;
	}



	return 0;
}

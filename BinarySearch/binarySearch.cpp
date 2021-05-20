#include<iostream>
using namespace std;



// ARRAY MUST BE SORTED !!
int binarySearch(int a[], int n, int key) {

	int start = 0;
	int end = n-1;

	while(start <= end) {

		int mid = (start + end) / 2;

		if (a[mid] == key) {
			return mid;
		} else if (a[mid] > key) {
			end = mid - 1;
		} else {
			start = mid + 1;
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

	sort(a, a+n);
	int pos = binarySearch(a, n, key);

	if (pos == -1) {
		cout<<"Error: Given value not found in array.";
	} else {
		cout<<"Value found at index "<<pos<<endl;
	}



	return 0;
}

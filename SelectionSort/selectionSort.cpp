#include<iostream>
using namespace std;




void selectionSort(int a[], int n) {

	for(int i = 0; i <= n-2; i++) {

		int smallest = i;  // keeps track of current smallest element

		for (int j = i+1; j <= n-1; j++) {

			if(a[j] < a[smallest]) {
				smallest = j;  // switch index of smallest current element
			}
		}

		// put the smallest element in its place
		// or do nothing if smallest = i still
		swap(a[i], a[smallest]);
	}
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


	cout<<"Before: [ ";
	for (int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<"]"<<endl;


	selectionSort(a, n);


	cout<<"Sorted: [ ";
	for (int i = 0; i < n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<"]"<<endl;



	return 0;
}








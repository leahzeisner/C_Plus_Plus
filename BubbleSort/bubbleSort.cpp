#include<iostream>
using namespace std;



void bubbleSort(int a[], int n) {

	for (int count = 1; count <= n-1; count++) {
		for (int j = 0; j <= n-2; j++) {

			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
}



void optimizedBubbleSort(int a[], int n) {

	for (int count = 1; count <= n-1; count++) {

		int flag = 0;

		for (int j = 0; j <= n-2; j++) {

			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
				flag = 1;
			}
		}

		if (flag == 0) {
			break;  // array is already sorted, no need to continue
		}
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


//		bubbleSort(a, n);
		optimizedBubbleSort(a, n);


		cout<<"Sorted: [ ";
		for (int i = 0; i < n; i++) {
			cout<<a[i]<<" ";
		}
		cout<<"]"<<endl;




	return 0;
}

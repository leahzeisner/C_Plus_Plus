#include<iostream>
using namespace std;

int main() {

	int *p = new int;   // 8 bytes on stack, 4 bytes on heap
	*p = 10;
	cout<<p<<endl;   // memory location
	cout<<*p<<endl;  // 10



	double *d = new double;
	char *c = new char;



	int m,n;
	cin>>m>>n;
	int** x = new int*[m];

	for (int i = 0; i < m; i++) {
		x[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin>>x[i][j];
		}
	}
	cout<<x<<endl;

//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cin>>x[i][j];
//		}
//	}




	return 0;
}

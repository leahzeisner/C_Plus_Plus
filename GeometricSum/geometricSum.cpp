#include<iostream>
#include<cmath>
using namespace std;



// constraint; n >= 1
double geometricSum(int k) {

	if (k == 0) {
		return 1;
	} else {
		double smallAns = geometricSum(k-1);
		return (1.0 / pow(2, k)) + smallAns;
	}
}




int main() {


	cout<<geometricSum(0)<<endl;		// 1
	cout<<geometricSum(1)<<endl;		// 1.5
	cout<<geometricSum(2)<<endl;		// 1.75
	cout<<geometricSum(3)<<endl;		// 1.875
	cout<<geometricSum(4)<<endl;		// 1.9375



	return 0;
}

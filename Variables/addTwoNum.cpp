#include<iostream>;
using namespace std;

int main() {

	int i = 10;
	int j = 15;

	int sum = i + j;

	cout<<sum<<endl;
	cout<<sizeof(sum)<<endl;  // 4



	short int s = 25;
	cout<<sizeof(s)<<endl;  // 2



	long int l = 10000000;
	cout<<sizeof(l)<<endl;;  // 8



	float f = 1.23;
	cout<<f<<endl;


	double d = 3.5;
	cout<<d<<endl;


	string str = "hello";
	cout<<str<<endl;


	char c = 'c';
	cout<<c<<endl;


	bool b = true;



	return 0;
}

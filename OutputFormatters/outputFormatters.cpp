#include<iostream>
#include<iomanip>
using namespace std;

int main() {


	cout<<oct<<163<<endl;				// 243

	cout<<fixed<<25.3647<<endl;			// 25.364700

	cout<<scientific<<25.3647<<endl;	// 2.536470e+01

	cout<<"hello"<<endl;				// hello
	cout<<setw(20)<<"hello"<<endl;		//                    hello   (20 spaces west)
	cout<<setw(10)<<"hello"<<endl;		//          hello 			  (10 spaces west)




	return 0;
}

#include<iostream>
#include<fstream>
using namespace std;

int main() {


	// WRITE TO FILE

	// TO CREATE NEW FILE
//	ofstream ofs("myfile.txt");

	// TO EDIT EXISITING FILE
	ofstream ofs("myfile.txt", ios::app);

	ofs<<"Leah!"<<endl;
	ofs<<30<<endl;
	ofs<<"CS"<<endl;

	ofs.close();





	// READ FROM FILE


	// These work the same way
//	ifstream ifs("myfile.txt");
	ifstream ifs;
	ifs.open("myfile.txt");

	if (ifs) {
		cout<<"File is Opened"<<endl;
	}

	if (ifs.is_open()) {
		cout<<"File is Opened"<<endl;
	}

	string name;
	int rollNum;
	string major;

	ifs>>name>>rollNum>>major;

	cout<<"Name: "<<name<<endl;
	cout<<"Roll Number: "<<rollNum<<endl;
	cout<<"Major: "<<major<<endl;


	ifs.close();




	return 0;
}

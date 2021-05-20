#include<iostream>
#include<fstream>
using namespace std;




class Student {

	public:
		string name;
		int rollNum;
		string major;



		Student() {

		}

		Student(string name, int roll, string major) {
			this->name = name;
			this->rollNum = roll;
			this->major = major;
		}


		friend ofstream & operator<<(ofstream &ofs, Student &s) {
			ofs<<s.name<<endl;
			ofs<<s.rollNum<<endl;
			ofs<<s.major<<endl;
			return ofs;
		}


		friend ifstream & operator>>(ifstream &ifs, Student &s) {
			ifs>>s.name;
			ifs>>s.rollNum;
			ifs>>s.major;
			return ifs;
		}
};






int main() {


	Student student("Leah", 30, "CS");
	ofstream ofs("student.txt");
	ofs<<student;

	ofs.close();



	Student student2;
	ifstream ifs("student.txt");
	ifs>>student2;

	cout<<"Name: "<<student2.name<<endl;
	cout<<"Roll Number: "<<student2.rollNum<<endl;
	cout<<"Major: "<<student2.major<<endl;

	ifs.close();




	return 0;
}













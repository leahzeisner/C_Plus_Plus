#include<iostream>
using namespace std;




class Student {
	public:
		int rollNum;
		int age;
		static int totalStudents;

		Student() {
			totalStudents++;
		}

		int getRollNum() {
			return this->rollNum;
		}

		static int getTotalStudents() {
			return totalStudents;
		}
};

// initialize static properties outside of class
int Student::totalStudents = 0;





int main() {

	Student student;

	cout<<student.rollNum<<" "<<student.age<<endl;  // garbage, garbage

	cout<<student.totalStudents<<endl;   // 1



	Student s2;
	cout<<s2.totalStudents<<endl; 		 // 2

	Student s3;
	cout<<s3.totalStudents<<endl;		 // 3


	cout<<Student::totalStudents<<endl;  // 20





	return 0;
}

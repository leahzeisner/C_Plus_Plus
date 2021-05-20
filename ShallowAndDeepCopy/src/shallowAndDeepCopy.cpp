#include<iostream>
using namespace std;


class Student{
	int age;
	char *name;

	public:

		// copy constructor
		Student(Student const &s) {
			this->age = s.age;
			this->name = new char[strlen(s.name) + 1];
			strcpy(this->name, s.name);
		}

		// parameterized constructor
		Student(int age, char *name) {
			this->age = age;
//			this->name = name;  // shallow copy, copy only address of array

			this->name = new char[strlen(name) + 1];
			strcpy(this->name, name);  // deep copy, copy the contents, not the address
		}

		void display(){
			cout<<name<<" "<<age<<endl;
		}

};

int main() {

	char name[] = "leah";
	Student s1(19, name);
	s1.display();  // leah 19


	name[3] = 'e';
	Student s2(30, name);
	s2.display(); // leae 19

	s1.display(); // leah 19, s1 not affected


	Student s3(s1);
	s3.display();  // leah 19

	return 0;
}

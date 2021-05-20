#include<iostream>
using namespace std;




class Student {

public:

	// DEFAULT CONSTRUCTOR
	Student() {

	}

	// PARAMETERIZED CONSTRUCTOR
	Student(int rollNumber, int age) {
		this->rollNumber = rollNumber;
		this->age = age;
	}

	int rollNumber;
	int age;

	void display() {
		cout<<"age: "<<this->age<<", roll number: "<<this->rollNumber;
	}
};




class Product {

private:
	int weight;

public:
	int id;
	char name[50];


	int getWeight() {
		return this->weight;
	}

	int setWeight(int w) {
		this->weight = w;
	}

};




int main() {


	// DEFAULT CONSTRUCTOR

	Student s1;

	s1.age = 24;
	s1.rollNumber = 100;

	cout<<s1.age<<endl;
	cout<<s1.rollNumber<<endl;



	Student *s2 = new Student;

	(*s2).age = 20;
	s2 -> rollNumber = 42;



	s1.display();  // age: 24, roll number: 100
	cout<<endl;

	(*s2).display(); // age: 20, roll number: 42
	cout<<endl;








	// PARAMETERIZED CONSTRUCTOR


	Student *s3 = new Student(78, 19);
	(*s3).display();  // age: 19, roll number: 78
	cout<<endl;


	Student s4(45, 40);
	s4.display();   // age: 40, roll number: 45
	cout<<endl;








	// COPY CONSTRUCTOR

	Student s5(s4);  // COPY CONSTRUCTOR
	s5.display();    // age: 40, roll number: 45
	cout<<endl;


	Student *s6 = new Student(*s3);  // COPY CONSTRUCTOR
	(*s6).display();   				// age: 19, roll number: 78
	cout<<endl;








	// COPY ASSIGNMENT OPERATOR

	Student s7(10, 100);
	Student s8(20, 200);
	Student *s9 = new Student(30, 300);

	s8 = s7;
	*s9 = s7;
	s8 = *s9;

	s7.display();     // age: 100, roll number: 10
	cout<<endl;

	s8.display();     // age: 100, roll number: 10
	cout<<endl;

	(*s9).display();  // age: 100, roll number: 10
	cout<<endl;







	Product p1;
	p1.setWeight(10);
	cout<<p1.getWeight()<<endl;  // 10




	return 0;
}

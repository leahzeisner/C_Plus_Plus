#include<iostream>
using namespace std;


class Student{
	private:
		int age;
		int rollNumber;

	public:
		Student(int age, int rollNumber) {
			this->age = age;
			this->rollNumber = rollNumber;
		}

		int getAge() const {
			return this->age;
		}
		int getRollNumber() const {
			return this->rollNumber;
		}
		int setAge(int a) {
			this->age = a;
		}
		int setRollNumber(int r) {
			this->rollNumber = r;
		}
};

int main() {


	int const a = 3;  // can't change this

	Student const student(19, 45);
	student.getAge();
//	student.setAge(20);   CAN'T DO THIS, MODIFIES CONST OBJECT



	return 0;
}

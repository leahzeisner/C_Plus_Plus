#include<iostream>
using namespace std;


class Vehicle {

	private:
		int maxSpeed;

	protected:
		int numTires;

	public:
		string color;

		Vehicle() {
			cout<<"Vehicle Default Constructor"<<endl;
		}

		Vehicle(int z) {
			maxSpeed = z;
			cout<<"Vehicle Parameterized Constructor"<<endl;
		}

		~Vehicle() {
			cout<<"Vehicle Destructor"<<endl;
		}
};



// can only access public properties of Vehicle and its own public properties
class Car : public Vehicle {

	public:
		int numGears;

//		Car() {
//			cout<<"Car Default Constructor"<<endl;
//		}

		Car() : Vehicle(5) {

		}

		~Car() {
			cout<<"Car Destructor"<<endl;
		}

		void print() {
			cout<<"Number of Tires: "<<numTires<<endl;
			cout<<"Number of Gears: "<<numGears<<endl;
			cout<<"Color: "<<color<<endl;
//			cout<<"Max Speeds: "<<maxSpeed<<endl;
		}
};






int main() {

	Vehicle v;
	v.color = "blue";
//	v.maxSpeed = 4;		--> Error: Private Property
//	v.numTires = 4;		--> Error: Protected Property



	Car c;				 // calls default constructor of Vehicle class
	c.color = "Black";
//	c.numTires = 4;     --> Error: Protected Property
	c.numGears = 5;








	return 0;
}

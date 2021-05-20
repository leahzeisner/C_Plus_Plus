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

		void print() {
			cout<<"Vehicle"<<endl;
		}

		~Vehicle() {
			cout<<"Vehicle Destructor"<<endl;
		}
};




// can only access public properties of Vehicle and its own public properties
class Car : virtual public Vehicle {

	public:
		int numGears;

		Car() {
			cout<<"Car Default Constructor"<<endl;
		}

//		Car() : Vehicle(5) {
//
//		}

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




class Truck : virtual public Vehicle {
	public:
		Truck() {
			cout<<"Truck Constructor"<<endl;
		}
};




class Bus : public Car, public Truck {
	public:
		Bus() {
			cout<<"Bus Constructor"<<endl;
		}
};






int main() {

	Bus b;
	//b.Car::print();


	return 0;
}









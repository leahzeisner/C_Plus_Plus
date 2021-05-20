#include<iostream>
using namespace std;




class Bus {

	public:

		// print() wants to access the 'x' of truck
		// give definition outside of class
		void print();


};



class Truck {

	private:
		int x;

	protected:
		int y;

	public:
		int z;

		// functions of Bus class are friends of the Truck class,
		// not a part of Truck class though
		friend void Bus::print();
		friend void test();

		// Bus Class is friend of Truck class
		// all Bus functions can access all Truck properties
		// one way friendship
		friend class Bus;
};


void test() {
	// access private property of Truck class
	Truck t;
	t.x = 10;
	t.y = 20;
	cout<<"x = "<<t.x<<endl;
	cout<<"y = "<<t.y<<endl;
}



void Bus::print() {
	Truck t;
	t.x = 10;
	t.y = 20;
	cout<<"x = "<<t.x<<endl;
	cout<<"y = "<<t.y<<endl;
}





int main() {

	Bus b;
	b.print();
	test();



	return 0;
}




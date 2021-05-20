#include<iostream>
using namespace std;




template<typename T>

class Pair {
	T x;
	T y;

	public:

		void setX(T x) {
			this->x = x;
		}

		T getX() {
			return this->x;
		}

		void setY(T y) {
			this->y = y;
		}

		T getY() {
			return this->y;
		}
};


template<typename T, typename Y>

class Pair2 {
	T x;
	Y y;

	public:

		void setX(T x) {
			this->x = x;
		}

		T getX() {
			return this->x;
		}

		void setY(Y y) {
			this->y = y;
		}

		Y getY() {
			return this->y;
		}
};






int main() {

	// PAIR

	Pair<int> p;
	p.setX(2);
	p.setY(5);
	cout<<"x = "<<p.getX()<<endl;
	cout<<"y = "<<p.getY()<<endl;


	Pair<double> p2;
	p2.setX(2.3);
	p2.setY(5.6);
	cout<<"x = "<<p2.getX()<<endl;
	cout<<"y = "<<p2.getY()<<endl;


	Pair<char> p3;
	p3.setX('a');
	p3.setY('z');
	cout<<"x = "<<p3.getX()<<endl;
	cout<<"y = "<<p3.getY()<<endl;





	// PAIR2

	Pair2<int, double> p4;
	p4.setX(2);
	p4.setY(5.5);
	cout<<"x = "<<p4.getX()<<endl;
	cout<<"y = "<<p4.getY()<<endl;


	Pair2<double, char> p5;
	p5.setX(2.3);
	p5.setY('g');
	cout<<"x = "<<p5.getX()<<endl;
	cout<<"y = "<<p5.getY()<<endl;


	Pair2<char, float> p6;
	p6.setX('a');
	p6.setY(9.9);
	cout<<"x = "<<p6.getX()<<endl;
	cout<<"y = "<<p6.getY()<<endl;





	Pair2<Pair2<int, int>, int> pair;
	pair.setY(30);

	Pair2<int, int> temp;
	temp.setX(10);
	temp.setY(20);

	pair.setX(temp);

	cout<<"Pair: x = "<<pair.getX().getX()<<", y = "<<pair.getX().getY()<<endl;
	cout<<"y = "<<pair.getY()<<endl;





	Pair2<Pair2<int, int>, Pair2<int, int> > pair2;

	Pair2<int, int> temp1;
	temp1.setX(10);
	temp1.setY(20);

	Pair2<int, int> temp2;
	temp2.setX(30);
	temp2.setY(40);

	pair2.setX(temp1);
	pair2.setY(temp2);

	cout<<"Pair #1: x = "<<pair2.getX().getX()<<", y = "<<pair2.getX().getY()<<endl;
	cout<<"Pair #2: x = "<<pair2.getY().getX()<<", y = "<<pair2.getY().getY()<<endl;




	return 0;
}








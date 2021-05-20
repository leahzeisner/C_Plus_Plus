#include<iostream>
using namespace std;




class DynamicArray {

	int *data;
	int nextIndex;
	int capacity;  // total size of the array

	public:
		DynamicArray() {
			data = new int[5];
			nextIndex = 0;
			capacity = 5;
		}


		DynamicArray(int capacity) {
			this->data = new int[capacity];
			this->nextIndex = 0;
			this->capacity = capacity;
		}


		DynamicArray(DynamicArray const &d) {
			this->nextIndex = d.nextIndex;
			this->capacity = d.capacity;

			// deep copy the array
			this->data = new int[d.capacity];
			for (int i = 0; i < d.nextIndex; i++) {
				this->data[i] = d.data[i];
			}
		}


		void operator=(DynamicArray const &d) {
			this->nextIndex = d.nextIndex;
			this->capacity = d.capacity;

			// deep copy the array
			this->data = new int[d.capacity];
			for (int i = 0; i < d.nextIndex; i++) {
				this->data[i] = d.data[i];
			}
		}


		void add(int element) {
			if (nextIndex == capacity) {
				int *newData = new int[2 * capacity];

				for (int i = 0; i < capacity; i++) {
					newData[i] = data[i];
				}

				delete []data;
				data = newData;
				capacity *= 2;

			}
			data[nextIndex] = element;
			nextIndex++;
		}


		int getElement(int i) const {
			if (i >= 0 && i < nextIndex) {
				return data[i];
			} else {
				return -1;
			}
		}


		void add(int element, int i) {
			if (i < nextIndex) {
				data[i] = element;
			} else if (i == nextIndex) {
				add(element);
			} else {
				cout<<"Error: Index is not valid."<<endl;
			}
		}


		void print() const {
			cout<<"[ ";
			for (int i = 0; i < nextIndex; i++) {
				cout<<data[i]<<" ";
			}
			cout<<"]"<<endl;
		}


		int getCapacity() const {
			return capacity;
		}
};




int main() {


	DynamicArray arr;

	arr.add(10);
	arr.add(20);
	arr.add(30);
	arr.add(40);
	arr.add(50);
	arr.add(60);  			 // increases capacity to 10

	arr.print();
	cout<<arr.getCapacity()<<endl;


	cout<<arr.getElement(-1)<<endl;  // -1 (ERROR)
	cout<<arr.getElement(0)<<endl;   // 10
	cout<<arr.getElement(2)<<endl;   // 30
	cout<<arr.getElement(5)<<endl;   // 60
	cout<<arr.getElement(6)<<endl;   // -1 (ERROR)



	DynamicArray arr2(arr);  // copy constructor

	DynamicArray arr3;
	arr3 = arr;				 // copy assignment operator

	arr.add(100, 0);



							 // SHALLOW COPIES CREATED -> NEED DEEP COPIES

//	arr.print();   			 //  [ 100 20 30 40 50 60 ]
//	arr2.print();  			 //  [ 100 20 30 40 50 60 ]
//	arr3.print();			 //  [ 100 20 30 40 50 60 ]





							 // AFTER IMPLEMENTING DEEP COPYING &
							 // OVERLOADING '=' OPERATOR

	arr.print();   			 //  [ 100 20 30 40 50 60 ]
	arr2.print();  			 //  [ 10 20 30 40 50 60 ]
	arr3.print();			 //  [ 10 20 30 40 50 60 ]



	DynamicArray arr4(100);
	cout<<arr4.getCapacity()<<endl;  // 100









	return 0;
}

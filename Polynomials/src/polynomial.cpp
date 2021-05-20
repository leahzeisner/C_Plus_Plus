#include<iostream>
using namespace std;




class Polynomial {

	int *degCoef;
	int capacity;

	public:

		// Default Constructor
		Polynomial() {
			this->capacity = 500;
			this->degCoef = new int[this->capacity];
			for (int i = 0; i < capacity; i++) {
				this->degCoef[i] = 0;
			}
		}


		// Copy Constructor
		Polynomial(Polynomial const &p) {
			this->capacity = p.capacity;
			this->degCoef = new int[p.capacity];
			for (int i = 0; i < capacity; i++) {
				this->degCoef[i] = p.degCoef[i];
			}
		}


		// Copy Assignment Constructor
		void operator=(Polynomial const &p) {
			this->capacity = p.capacity;
			delete []degCoef;
			this->degCoef = new int[p.capacity];
			for (int i = 0; i < capacity; i++) {
				this->degCoef[i] = p.degCoef[i];
			}
		}


		void print() {
			for (int i = 0; i < capacity; i++) {
				cout<<degCoef[i]<<"x"<<i<<" ";
			}
			cout<<endl;
		}


		void setCoef(int d, int c) {
			if (d >= capacity) {
				int temp = capacity;

				while (temp < d) {
					temp *= 2;
				}

				int *newArr = new int[temp];

				for (int i = 0; i < capacity; i++) {
					newArr[i] = degCoef[i];
				}

				capacity = temp;
				delete []degCoef;
				degCoef = newArr;
			}
			degCoef[d] = c;
		}


		Polynomial operator+(Polynomial const &p) {
			int m = capacity;
			int n = p.capacity;
			Polynomial ans;

			int i;
			for (i = 0; i < min(m, n); i++) {
				ans.setCoef(i, degCoef[i] + p.degCoef[i]);
			}

			while (i < m) {
				ans.setCoef(i, p.degCoef[i]);
				i++;
			}

			while (i < n) {
				ans.setCoef(i, p.degCoef[i]);
				i++;
			}
			return ans;
		}


		Polynomial operator-(Polynomial const &p){
			int m = capacity;
			int n = p.capacity;
			Polynomial ans;

			int i;
			for(i = 0; i < min(m, n); i++) {
				ans.setCoef(i,degCoef[i] - p.degCoef[i]);
			}
			while(i < m) {
				ans.setCoef(i,degCoef[i]);
				i++;
			}
			while(i < n) {
				ans.setCoef(i,p.degCoef[i]);
				i++;
			}
			return ans;
		}


		Polynomial operator*(Polynomial const &p) {
			int m = capacity;
			int n = p.capacity;
			Polynomial ans;

			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					ans.degCoef[i + j] += degCoef[i] + p.degCoef[j];
				}
			}
			return ans;
		}






};



int main() {








	return 0;
}

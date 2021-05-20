#include<iostream>
#include<vector>
using namespace std;


class SpiralOrderMatrix {

	public:

		vector<int> spiralOrder(vector<vector<int> >& matrix) {

			vector<int> ans;
			int m = matrix.size();
			int n = matrix[0].size();

			if (m == 0 || n == 0) {
				return ans;
			}

			int startRow = 0;
			int endRow = m-1;
			int startCol = 0;
			int endCol = n-1;
			int count = 0;

			while (startRow <= endRow && startCol <= endCol) {

				// STEP 1: Print Start Row
				for (int i = startCol; i <= endCol; i++) {
					ans.push_back(matrix[startRow][i]);
					count++;
				}
				startRow++;
				if (count == m*n) {
					return ans;
				}


				// STEP 2: Print End Column
				for (int i = startRow; i <= endRow; i++) {
					ans.push_back(matrix[i][endCol]);
					count++;
				}
				endCol--;
				if (count == m*n) {
					return ans;
				}


				// STEP 3: Print End Row
				for (int i = endCol; i >= startCol; i--) {
					ans.push_back(matrix[endRow][i]);
					count++;
				}
				endRow--;
				if (count == m*n) {
					return ans;
				}


				// STEP 3: Print Start Column
				for (int i = endRow; i >= startRow; i--) {
					ans.push_back(matrix[i][startCol]);
					count++;
				}
				startCol++;
				if (count == m*n) {
					return ans;
				}
			}
			return ans;
		}
};

int main() {

	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	vector<int> v2;
	v2.push_back(4);
	v2.push_back(5);
	v2.push_back(6);

	vector<int> v3;
	v3.push_back(7);
	v3.push_back(8);
	v3.push_back(9);

	std::vector<vector<int> > vector;
	vector.push_back(v1);
	vector.push_back(v2);
	vector.push_back(v3);


	SpiralOrderMatrix som;
	std::vector<int> ans;
	ans = som.spiralOrder(vector);

	for (int i = 0; i < ans.size(); i++) {
		cout<<ans[i]<<" ";
	}
	cout<<endl;



	std::vector<int> empty1;
	std::vector<int> empty2;
	std::vector<int> empty3;

	std::vector<std::vector<int> > empty;
	empty.push_back(empty1);
	empty.push_back(empty2);
	empty.push_back(empty3);

	std::vector<int> ans2;
	ans2 = som.spiralOrder(empty);

	cout<<ans2.size()<<endl;	// 0



	return 0;
}









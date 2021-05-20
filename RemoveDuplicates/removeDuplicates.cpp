#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;



vector<int> removeDuplicates(int *arr, int n) {

	vector<int> output;
	unordered_map<int, bool> myMap;

	for (int i = 0; i < n; i++) {
		if (myMap.count(arr[i]) == 0) {
			output.push_back(arr[i]);
			myMap[arr[i]] = true;
		}
	}
	return output;

}





int main() {


	int a[] = {1, 5, 2, 4, 4, 3, 3, 6, 7, 1, 1, 2};

	vector<int> output = removeDuplicates(a, 12);

	for (int i = 0; i < output.size(); i++) {
		cout<<output[i]<<" ";
	}
	cout<<endl;		// 1 5 2 4 3 6 7



	return 0;
}

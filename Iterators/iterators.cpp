#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;

int main() {


	unordered_map<string, int> myMap;

	myMap["abc1"] = 1;
	myMap["abc2"] = 2;
	myMap["abc3"] = 3;
	myMap["abc4"] = 4;
	myMap["abc5"] = 5;
	myMap["abc6"] = 6;

	for (unordered_map<string, int>::iterator it = myMap.begin(); it != myMap.end(); it++) {
		cout<<"Key: "<<it->first<<", Value: "<<it->second<<endl;
	}
	cout<<endl;




	// ORDERED BY KEYS, NOT VALUES

	map<string, int> myOrderedMap;

	myOrderedMap["abc1"] = 1;
	myOrderedMap["abc2"] = 2;
	myOrderedMap["abc3"] = 3;
	myOrderedMap["abc4"] = 4;
	myOrderedMap["abc5"] = 5;
	myOrderedMap["abc6"] = 6;

//	for (map<string, int>::iterator it = myOrderedMap.begin(); it != myOrderedMap.end(); it++) {
//		cout<<"Key: "<<it->first<<", Value: "<<it->second<<endl;
//	}

	for (auto it = myOrderedMap.begin(); it != myOrderedMap.end(); it++) {
		cout<<"Key: "<<it->first<<", Value: "<<it->second<<endl;
	}
	cout<<endl;





	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout<<*it<<" ";
//	}

	for (auto it = v.begin(); it != v.end(); it++) {
		cout<<*it<<" ";
	}
	cout<<endl<<endl;





	// FIND

	if (myMap.find("abc1") == myMap.end()) {  // can't find element, returns end null pointer
		cout<<"abc1 not present"<<endl;
	} else {
		cout<<"abc1 present"<<endl;  // is present
	}





	// FIND AND ERASE

	unordered_map<string, int>::iterator it = myMap.find("abc1");
	myMap.erase(it);

	if (myMap.find("abc1") == myMap.end()) {  // can't find element, returns end null pointer
		cout<<"abc1 not present"<<endl;  // not present anymore
	} else {
		cout<<"abc1 present"<<endl;
	}





	// ERASE THE WHOLE MAP

	myMap.erase(myMap.begin(), myMap.end());
	cout<<myMap.size()<<endl;		// 0




	return 0;
}

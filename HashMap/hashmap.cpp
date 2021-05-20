#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main() {

	// HASHMAP KEYS ARE ALL UNIQUE!



	unordered_map<string, int> myMap;



	// INSERTING ELEMENTS

	// First Way
	pair<string, int> p("abc", 1);
	myMap.insert(p);

	// Second Way
	myMap["def"] = 2;





	// FIND / ACCESS ELEMENTS

	cout<<myMap["abc"]<<endl;		// 1
	cout<<myMap["def"]<<endl;		// 2

	cout<<myMap.at("abc")<<endl;	// 1
	cout<<myMap.at("def")<<endl;	// 2

	cout<<myMap["ghi"]<<endl;		// 0 (doesn't exist)
//	cout<<myMap.at("ghi")<<endl;	// ERROR (doesn't exist)





	// CHECK PRESENCE OF A KEY

	if (myMap.count("ghi") > 0) {
		cout<<"ghi exists in the hashmap"<<endl;	// exists
	} else {
		cout<<"ghi doesn't exist in the hashmap"<<endl;
	}





	// UPDATING KEYS

	myMap["abc"] = 20;





	// GET SIZE OF HASHMAP

	cout<<myMap.size()<<endl;	// 3





	// ERASE KEYS

	myMap.erase("ghi");

	if (myMap.count("ghi") > 0) {
		cout<<"ghi exists in the hashmap"<<endl;
	} else {
		cout<<"ghi doesn't exist in the hashmap"<<endl;   // doesn't exist
	}

	cout<<myMap.size()<<endl;	// 2




	return 0;
}









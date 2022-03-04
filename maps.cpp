#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Initializing a map
	
	map<int,int> mpp;
	mpp[3] = 5;
	mpp[1] = 2;
	
	// Important Functions
	
	// 1. insert()
	mpp.insert({2,2});  // Inserts a key-value pair to the map
	mpp.insert({2,4});
	cout<<mpp[2]<<endl;
	
	// 2. Iterating through a map
	for(auto x:mpp){
		cout<<x.first<<" "<<x.second<<endl;
	}
	
	// 3. find()
	auto it = mpp.find(5);    // Finds a specified key(here, 5) in the map
	auto it2 = mpp.find(1);
	
		// it = mpp.end() as no such key exists and it2 is an iterator pointing to the key-value pair {1,2}
	
	cout<<it2->first<<" "<<it2->second<<endl;  // As the iterator here is somewhat acting like a pair pointer
	
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int var = 10;

    // Initializing a vector
    vector<int> vec;
    vector<int> vec(var);       // Vector of size 'var' initialized with all values = 0
	vector<int> vec(var,3);     // Vector of same size initialized with all values = 3
	vector<int> vec2(vec);      // 'vec2' initialized with same values and size of 'vec'
	
	// Important Functions
	
	// 1. push_back(): Used to insert elements into a vector (from the back)
	vec.push_back(4);
	vec.push_back(2);
	vec.push_back(1);
	for(auto x:vec) cout<<x<<" ";  // vec = {4,2,1}
	cout<<endl;
	
	// 2. pop_back(): Used to remove the last element of a vector
	vec.pop_back();
	for(auto x:vec) cout<<x<<" ";  // vec = {4,2}
	cout<<endl;
	
	// 3. clear(): Used to empty a vector
	vec.clear();
	for(auto x:vec) cout<<x<<" "; // vec = {}
	
	// 4. size(): Self explanatory
	cout<<vec.size()<<endl;  
	
	// 5. lower_bound() and upper_bound() (Make sure that the vector is sorted)
	
	// lower_bound - returns an iterator pointing to the first element in the sorted vector which is NOT LESSER than a given value
	
	vector<int> vec2 = {3,6,1,2,9,7};
	sort(vec2.begin(),vec2.end());                     
	auto it = lower_bound(vec2.begin(),vec2.end(),2);  // iterator pointing to the value '2' is returned, which is stored in 'it'
	cout<<(it - vec2.begin())<<endl;                   // Index of element pointed to by the iterator = 1
	cout<<(*it)<<endl;                                 // Value pointed to by the iterator = 2
	
	// upper_bound - returns an iterator poiting to the first element in the sorted vector which is GREATER than a given value
	
	it = upper_bound(vec2.begin(),vec2.end(),4);  // iterator pointing to 6 is returned (as 6 is the first element greater than 4 in the sorted vector)
	cout<<(it - vec2.begin())<<endl;              // Index = 3
	cout<<(*it)<<endl;                            // Value = 6
	
	// 6. find() : returns an iterator pointing to the first occurrence of a specified value in the vector
	
	it = find(vec2.begin(),vec.end(),2);

} 
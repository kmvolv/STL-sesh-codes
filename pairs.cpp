#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Declaration of a Pair
	
	pair<int,int> p1;
	p1.first = 3;         // First and second elements of the pair are accessed through the dot operator
	p1.second = 4;
	
	pair<int,int> *p2 = &(p1);
	
	cout<<p1.first<<" "<<p1.second<<endl;   // Elements of a pointer to pair can be accessed using the arrow operator (Not that important)
	cout<<p2->first<<" "<<p2->second<<endl;
	
	pair<char,vector<int>> p2;  // Pair of a primitive data type (char) and a composite data type (vector of ints)
	p2.first = "F";
	p2.second = {4,2,1,4};
	
	cout<<(p2.first)<<endl;
	for(auto k:p2.second){
		cout<<k<<" ";
	}
	cout<<endl;
}
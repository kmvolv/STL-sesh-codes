#include<bits/stdc++.h>
using namespace std;

int main(){
	string s = "codechef";
	vector<int> vec = {9,2,1,4,3,7};
	vector<char> cvec = {'c','t','s','i'};
	
	// Utilization:
	
	sort(s.begin(),s.end());        // Characters are sorted in alphabetical order
	sort(vec.begin(),vec.end());  
	sort(cvec.begin(),cvec.end());
	sort(vec.begin(),vec.end(),greater<int>());  // Also takes in an optional third argument called 'comparator' (https://stackoverflow.com/questions/29100378/comparator-function-in-c-meaning-and-working/29100637)
	
	cout<<s<<endl;
	for(auto x:vec) cout<<x<<" ";
	cout<<endl;
	for(auto x:cvec) cout<<x<<" ";
	cout<<endl;
	
	// Can also be used to sort a continuous subsegment of a vector/array
	
	vector<int> vec2 = {4,2,3,1};
	sort(vec2.begin()+2,vec2.begin()+4);
	for(auto x:vec2) cout<<x<<" ";
	cout<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Initialization
	set<int> s;
	
	// Important Functions:
	
	// 1. insert()
	s.insert(1);             // s = {1}
	cout<<s.size()<<endl;
	s.insert(2);             // s = {1,2}
	cout<<s.size()<<endl;
	s.insert(2);             // s = {1,2} - as set stores unique values 
	cout<<s.size()<<endl;
	s.insert(3);             // s = {1,2,3}
	cout<<s.size()<<endl;
	
	// 2. find()
	auto it = s.find(1);
	cout<<(*it)<<endl;
	cout<<distance(s.begin(),it)<<endl;
	
	// 3. count()
	cout<<s.count(1)<<endl;
	cout<<s.count(9)<<endl;
	
	// 4. erase()
	cout<<s.count(2)<<endl;
	s.erase(2);
	cout<<s.count(2)<<endl;
	
	// 5. lower_bound() and upper_bound()
	
	// Works in the same way as in vectors
}
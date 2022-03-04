#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Initialization
	stack<int> st;
	queue<int> q;
	
	// Commonly used Functions - Stack
	
	// 1. push(), pop() and top():
	st.push(3);    // st = {3}
	st.push(4);    // st = {3,4}
	st.push(5);    // st = {3,4,5}
	st.push(6);    // st = {3,4,5,6}
	
	cout<<st.top()<<endl;
	st.pop();      // st = {3,4,5}
	cout<<st.top()<<endl;
	st.pop();	   // st = {3,4}
	cout<<st.top()<<endl;
	st.pop();      // st = {3}
	
	// // 2. size():
	cout<<(st.size())<<endl;
	
	// // 3. empty():
	cout<<(st.empty())<<endl;
	st.pop();
	cout<<(st.empty())<<endl;
	
	// Commonly used Functions - Queue
	
	// 1. push(), pop(), front() and back():
	q.push(1);    // q = {1}
	q.push(2);    // q = {1,2}
	q.push(3);    // q = {1,2,3}
	q.push(7);    // q = {1,2,3,7}
	
	cout<<q.front()<<endl;  // 1 is the front element
	cout<<q.back()<<endl;   // 7 is the back element
	
	q.pop();                // q = {2,3,7}
	cout<<q.front()<<endl;  // 2 is now the new front element
	q.pop();                // q = {3,7}
	cout<<q.front()<<endl;  // 3 is the new front element
}
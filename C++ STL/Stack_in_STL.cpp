#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> s;
	
	s.push(1);
	s.push(2);
	s.push(3);
	
	cout<<"The top element of the stack : "<<s.top();
	cout<<endl;
	
	s.pop();
	cout<<"The top element after pop of the stack : "<<s.top();
	cout<<endl;
	
	cout<<"The size of the stack is : "<<s.size()<<endl;
	
	cout<<"The stack is empty or not : "<<s.empty()<<endl;
	return 0;
}


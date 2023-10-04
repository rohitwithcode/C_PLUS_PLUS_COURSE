#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> q;
	
	q.push(2);
	q.push(3);
	q.push(4);
	cout<<"The size of the queue is : "<<q.size()<<endl;
	cout<<"First element : "<<q.front()<<endl;
	
	q.pop();
	cout<<"The size of the queue after pop is : "<<q.size()<<endl;
	cout<<"The first element after the pop : "<<q.front()<<endl;
	
	return 0;
}


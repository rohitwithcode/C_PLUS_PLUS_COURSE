#include<iostream>
#include<queue>
using namespace std;

int main()
{
//	Max heap
	priority_queue<int> max;
	max.push(1);
	max.push(3);
	max.push(2);
	max.push(0);
	cout<<"The size : "<<max.size()<<endl;
	int size=max.size();
	for(int i=0;i<size;i++){
		cout<<max.top()<<" ";
		max.pop();
	}
	cout<<endl;
	cout<<"Empty or not : "<<max.empty()<<endl;
//	Min Heap

	priority_queue<int,vector<int> ,greater<int> > min;
	
	min.push(1);
	min.push(3);
	min.push(2);
	min.push(0);
	cout<<"The size : "<<min.size()<<endl;
	int size1=min.size();
	for(int i=0;i<size1;i++){
		cout<<min.top()<<" ";
		min.pop();
	}
	cout<<endl;
	
	cout<<"Empty or not : "<<min.empty()<<endl;
	return 0;
}


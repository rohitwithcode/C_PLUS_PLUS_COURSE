#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> d;
	
	d.push_back(1);
	d.push_front(2);
	
//	for(int i:d){
//		cout<<i<<" ";
//	}
//	cout<<"\nThe Deque after the pop operation : "<<endl;
//	d.pop_back();
//	for(int i:d){
//		cout<<i<<" ";
//	}

	cout<<"The First index element is : "<<d.at(0)<<endl;
	
	cout<<"The first element of the vector is : "<<d.front()<<endl;
	cout<<"The Last element of the vector is : "<<d.back()<<endl;
	
	cout<<"The Deque is empty or not : "<<d.empty()<<endl;
	
	
	cout<<"The size of before erase : "<<d.size()<<endl;
	d.erase(d.begin(),d.begin()+1);
	cout<<"The size of after erase : "<<d.size()<<endl;
	return 0;
}




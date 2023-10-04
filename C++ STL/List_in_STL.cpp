#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> l;
	
	list<int> n(5,100);
	for(int i:n){
		cout<<i<<" ";
	}
	cout<<"\n";
	l.push_back(1);
	l.push_front(2);
	
	for(int i:l){
		cout<<i<<" ";
	}
	cout<<"\n";
	
	l.erase(l.begin());
	cout<<"List after erse : "<<endl;
	
	for(int i:l){
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"The size of the list is : "<<l.size()<<endl;
	return 0;
}


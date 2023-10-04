#include<iostream>
#include<vector>
using namespace std;
/* ********** Vector in STL *********** */
int main()
{
	vector<int> v;
	
	vector<int> a(5,1);
	for(int j:a){
		cout<<j<<" ";
	}
	cout<<endl;
	vector<int> l(a);
	for(int k:l){
		cout<<k<<" ";
	}
	cout<<endl;
	cout<<"Print a"<<endl;
	for(int i=0;i<l.size();i++){
//		for(int i:l){
		cout<<i<<" ";
	}
	
	cout<<"\nThe Capacity of the vector : "<<v.capacity()<<endl;
	
	v.push_back(1);
	cout<<"The Capacity of the vector : "<<v.capacity()<<endl;
	
	v.push_back(2);
	cout<<"The Capacity of the vector : "<<v.capacity()<<endl;
	
	v.push_back(3);
	cout<<"The Capacity of the vector : "<<v.capacity()<<endl;
	cout<<"The size of the Vector : "<<v.size()<<endl;
	
	cout<<"The Element at 2nd index : "<<v.at(2)<<endl;
	
	cout<<"The Front element is : "<<v.front()<<endl;
	cout<<"The Last element is : "<<v.back()<<endl;
	
	cout<<"The Vector before pop : "<<endl;
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	v.pop_back();
	cout<<endl<<" The Vector after the pop : "<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<"\n\nThe size of the vector is before clear: "<<v.size()<<endl;
	
	v.clear();
	cout<<"\n\nThe size of the vector is before clear: "<<v.size()<<endl;
	
	
	
	
	
	return 0;
}


#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s;
	
	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(8);
	s.insert(8);
	s.insert(8);
	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(89);
	s.insert(89);
	s.insert(89);
	
	for(int i:s){
		cout<<i<<" ";
	}
	cout<<endl;
	
//	s.erase(s.begin());
	set<int>::iterator it=s.begin();
	it++;
	s.erase(it);
	
	for(int i:s){
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"1 is present or not in set "<<s.count(1)<<endl;
	
	set<int>::iterator itr=s.find(5) ;
	
//	cout<<"Value at present at itr is : "<<*itr<<endl

	for(auto it=itr;it!=s.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	return 0;
}


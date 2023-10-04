#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int,string> m;
	
	m[1]="Rohit";
	m[2]="Divya";
	m[23]="Love";
	
	m.insert({5,"Coder"});
	
	cout<<"Before erase()...\n";
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	
	cout<<"23 is present : "<<m.count(23)<<endl;
	cout<<"3 is present : "<<m.count(3)<<endl;
	
	cout<<"After erase()\n";
	
	m.erase(2);
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	
	auto it=m.find(5);
	
	for(auto i=it;i!=m.end();i++){
		cout<<(*i).first<<" "<<endl;
	}
	return 0;
}


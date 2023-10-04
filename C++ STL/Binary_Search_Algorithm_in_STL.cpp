#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<int> v;
	
	v.push_back(1);
	v.push_back(10);
	v.push_back(12);
	v.push_back(16);
	
	cout<<"Find 1 : "<<binary_search(v.begin(),v.end(),1)<<endl;
	
	cout<<"Lower bound :"<<lower_bound(v.begin(),v.end(),12)-v.begin()<<endl;
	cout<<"Upper bound :"<<upper_bound(v.begin(),v.end(),16)-v.begin()<<endl;
	
	
	int a=4,b=7;
	
	cout<<"Minimum number in "<<a<<" and "<<b<<" is "<<min(a,b)<<endl;
	cout<<"Maximum number in "<<a<<" and "<<b<<" is "<<max(a,b)<<endl;
	swap(a,b);
	cout<<"Value of a="<<a<<" and b="<<b<<" is after swap : ";
	
	string str="CoderRohit";
	reverse(str.begin(),str.end());
	cout<<"String after reverse : "<<str<<endl;
	
	rotate(v.begin(),v.begin()+1,v.end());
	
	cout<<"After rotate"<<endl;
	
	for(int i:v){
		cout<<i<<" ";
	}
	
	cout<<"\nAfter sort\n";
	sort(v.begin(),v.end());
	for(int i:v){
		cout<<i<<" ";
	}
	return 0;
}


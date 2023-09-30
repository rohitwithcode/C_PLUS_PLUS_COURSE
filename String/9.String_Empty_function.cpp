#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str="abc",str1="xyz";
	cout<<str<<endl;
	str.clear();
	if(str.empty()){
		cout<<"String is Empty\n";
	}
	
	return 0;	
}

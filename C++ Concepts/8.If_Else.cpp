#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter your age ";
	int age;
	cin>>age;
	if(age<18){
		cout<<"You can not drive\n";
	}
	else{
		cout<<"You can drive\n";
	}
	return 0;
}

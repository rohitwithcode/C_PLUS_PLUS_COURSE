#include<iostream>
using namespace std;

int main()
{
	cout<<"Enter your age ";
	int age;
	cin>>age;
	if(age<18){
		cout<<"You are so little\n";
	}
	else if(age==18){
		cout<<"You age a children\n";
	}
	else{
		cout<<"You come to my Home\n";
	}
	return 0;
}

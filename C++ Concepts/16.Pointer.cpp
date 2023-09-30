#include<iostream>
using namespace std;
int main()
{
	int a=3;
	int *ptr=&a;
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The address of a is "<<ptr<<endl;
	
	cout<<"The value at address of b is "<<*ptr<<endl;
	return 0;
}

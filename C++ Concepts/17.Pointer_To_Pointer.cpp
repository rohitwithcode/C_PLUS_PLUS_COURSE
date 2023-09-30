#include<iostream>
using namespace std;
int main()
{
	int a=3;
	int *ptr=&a;
	int **ptr1=&ptr;
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The address of a is "<<ptr<<endl;
	cout<<"The address of a is "<<ptr1<<endl;
	
	cout<<"The value at address of b is "<<*ptr<<endl;
	cout<<"The value at address of b is "<<**ptr1<<endl;
	return 0;
}

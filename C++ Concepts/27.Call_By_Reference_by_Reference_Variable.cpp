#include<iostream>
using namespace std;

int & swapReferenceVariable(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	return a;	
}
int main()
{
	cout<<"Enter number = ";
	int a;
	cin>>a;
	cout<<"Enter number = ";
	int b;
	cin>>b;
	swapReferenceVariable(a,b)=333;
	cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
	return 0;
}

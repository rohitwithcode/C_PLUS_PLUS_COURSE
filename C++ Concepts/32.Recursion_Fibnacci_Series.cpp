#include<iostream>
using namespace std;
int Fibnacci(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	else{
		return Fibnacci(n-1)+Fibnacci(n-2);
	}
}
int main()
{
	cout<<"Enter number = ";
	int a;
	cin>>a;
	cout<<"The number at index "<<a<<" is "<<Fibnacci(a);
	return 0;
}

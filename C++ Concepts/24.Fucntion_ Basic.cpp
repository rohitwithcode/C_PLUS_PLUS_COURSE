#include<iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}
int main()
{
	cout<<"Enter number = ";
	int a;
	cin>>a;
	cout<<"Enter number = ";
	int b;
	cin>>b;
	int c=sum(a,b);
	cout<<"The sum of "<<a<<" "<<"and "<<b<<" is = "<<c<<endl;
	return 0;
}

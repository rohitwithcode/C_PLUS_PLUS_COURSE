#include<iostream>
using namespace std;

int sum(int *a,int *b){
	return *a+*b;
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}
int main()
{
	cout<<"Enter number = ";
	int a;
	cin>>a;
	cout<<"Enter number = ";
	int b;
	cin>>b;
	//int c=sum(a,b);
	//cout<<"The sum of "<<a<<" "<<"and "<<b<<" is = "<<c<<endl;
	cout<<"The value "<<a<<" "<<" and "<<b<<" is before swap"<<endl;
	swap(&a,&b);
	cout<<"The value "<<a<<" "<<" and "<<b<<" is after swap"<<endl;
	return 0;
}

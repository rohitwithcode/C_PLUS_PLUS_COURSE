#include<iostream>
using namespace std;
inline int pro(int a,int b){
	return a*b;
}
int main()
{
	int a,b;
	cout<<"Enter the value of a and b = ";
	cin>>a>>b;
	cout<<"The product of a and b is "<<pro(a,b);
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the first number = ";
	cin>>a;
	cout<<"Enter the first number = ";
	cin>>b;
	
	try{
		if(b!=0)	{
			c=a/b;
			cout<<"Division of "<<a<<" and "<<b<<" is "<<c<<endl;
		}
		else{
			throw(b);
		}
	}
	catch(int  b){
		cout<<"Exception is "<<a<<" is not devide by "<<b;
	}
	return 0;
}


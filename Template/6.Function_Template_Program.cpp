#include<iostream>
using namespace std;

template <class T>
void swapp(T &a,T &b){
	T temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int a=4;
	int b=3;
	cout<<"The value of the a and b before swap "<<a<<" or "<<b<<endl<<endl;
	
	swapp(a,b);
	cout<<"Value of a "<<a<<" and b "<<b<<" After swap ";

	return 0;
}


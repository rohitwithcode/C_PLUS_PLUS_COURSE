#include<iostream>
using namespace std;

class Base{
	int b;
	protected:
		int a;
	
};

class Derived : protected Base{
	
};
int main()
{
	Base b;
	Derived d;
	cout<<d.a; // This will not work a is protected in both classes
	return 0;
}

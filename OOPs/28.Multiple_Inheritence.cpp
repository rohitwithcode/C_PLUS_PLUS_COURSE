#include<iostream>
using namespace std;

class Base{
	int b;
	public:
		void setValue(int n){
			b=n;
		}
		int getValue(){
			return b;	
		}
};
class Base1{
	int c;
	public:
		void setValue1(int n){
			c=n;
		}
		int getValue1(){
			return c;	
		}
};
class Derived : public Base,public Base1{
	public:
		void show(){
			cout<<"The value of b is "<<getValue()<<endl;
			cout<<"The value of c is "<<getValue1()<<endl;
			cout<<"The sum of b+c is "<<getValue()+getValue1()<<endl;
		}
};
int main()
{
	Derived d;
	d.setValue(5);
	d.setValue1(5);
	d.show();
	return 0;
}

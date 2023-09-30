#include<iostream>
using namespace std;

class Base{
	public :
		int a=56;
		virtual void display(){
			cout<<"Displaying Base\n";
			cout<<"Value of a is "<<a<<endl;
		}
};
class Derived : public Base{
	public :
		int b=0;
		void display(){
			cout<<"Displaying Derived class function\n";
			cout<<"The value of b is "<<b<<endl;
		}
};
int main()
{
	Base *base_class_pointer;
	Base object_base;
	Derived object_derived;
	
	base_class_pointer=&object_derived;
	base_class_pointer->display();
	return 0;
}


#include<iostream>
using namespace std;

class Base{
	public :
		int a;
		void display(){
			cout<<"Displaying Base\n";
			cout<<"Value of a is "<<a<<endl;
		}
};
class Derived : public Base{
	public :
		int b;
		void display(){
			cout<<"Displaying Derived\n";
			cout<<"The value of b is "<<b<<endl;
		}
};
int main()
{
	Base obj;
	Base *ptr;

	Derived d;
	ptr=&d;  // Pointing to derived class 
	
	ptr->a=56;
//	ptr->b=45;  This is not valid throwing error because the pointer of base class
	ptr->display();
	
	Derived *ptr_der;
	ptr_der=&d;
	ptr_der->a=7700;
	ptr_der->b=60;
	ptr_der->display();
	
	return 0;
}


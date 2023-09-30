#include<iostream>
using namespace std;

class Base{
	public:
		void greet(){
			cout<<"How are you"<<endl;
		}
};

class Base1{
	public:
	void greet(){
			cout<<"How are you Tell me"<<endl;
		}
};

class Derived : public Base,public Base1{
	public:
	//void greet(){
	Derived(){
		Base1::greet();
	}
			
			
		//}
};

int main()
{
	Derived d;
//	d.greet();	
	return 0;
}


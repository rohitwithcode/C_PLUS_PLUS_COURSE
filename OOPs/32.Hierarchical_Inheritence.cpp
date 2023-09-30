#include<iostream>
using namespace std;

class A{
	protected:
		int a,b;
		public:
			void setValue(int,int);
			void display();
};
void A::setValue(int m,int n){
	a=m;
	b=n;
}
void A::display(){
	cout<<"The Value of A is = "<<a<<endl;
	cout<<"The Value of B is = "<<b<<endl;
}
class B : public A{
	protected:
		int c;
		public:
			void setValue1(int o){
				c=o;
			}
			void display1(){
				cout<<"The Value of C is "<<c<<endl;
			}
};
class C : public A{
	private:
		int d;
		public:
			void setValue2(int p){
				d=p;
			}
			void display2(){
				cout<<"The Value of D is "<<d<<endl;
			}
};
int main()
{
	B b;
	b.setValue(1,2);
	b.setValue1(5);
	b.display();
	b.display1();
	
	C c;
	c.setValue(3,4);
	c.setValue2(6);
	c.display();
	c.display2();
	return 0;
}


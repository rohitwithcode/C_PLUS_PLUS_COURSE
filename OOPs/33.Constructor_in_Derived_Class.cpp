#include<iostream>
using namespace std;

class Base{
	int d;
	public:
		Base(int i){
			d=i;
			cout<<"Base constructor called\n";
		}
		void print(){
			cout<<"The value of d is "<<d<<endl;
		}
};

class Base1{
	int d1;
	public:
		Base1(int i){
			d1=i;
			cout<<"Base1 constructor called\n";
		}
		void print1(){
			cout<<"The value of d1 is "<<d1<<endl;
		}
};

class Derived : public Base,public virtual Base1{
	int d2,d3;
	public:
		Derived(int a,int b,int c,int d):Base(a),Base1(b){
			d2=c;
			d3=d;
			cout<<"Derived constructor called\n";
		}
		void print2(){
			cout<<"The value of d2 is "<<d2<<endl;
			cout<<"The value of d3 is "<<d3<<endl;
		}
};

int main()
{
	Derived d(1,2,3,4);
	//d=Derived;
	d.print();
	d.print1();
	d.print2();
	return 0;
}


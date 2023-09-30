#include<iostream>
using namespace std;

class Base{
	int d;
	public :
		int d1;
		void setData();
		int getD();
		int getD1();
};
void  Base :: setData(){
	d=30;
	d1=40;
}
int Base :: getD(){
	return d;
}
int Base :: getD1(){
	return d1;
}
class Derived : private Base{
	int d2;
	public :
		void P();
		void display();
};
void Derived :: P(){
	setData();
	d2=d1+getD();
}
void Derived :: display(){
	cout<<"Value of D is  "<<getD()<<endl;
	cout<<"Value of D1 is "<<d1<<endl;
	cout<<"-----------------"<<endl;
	cout<<"Value of D2 is "<<d2<<endl;
}
int main()
{
	Derived d;
//	d.setData();
	d.P();
	d.display();
	return 0;
}

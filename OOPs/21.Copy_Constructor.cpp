#include<iostream>
using namespace std;

class Number{
	int a;
	public :
		Number(){
			a=0;
		}
		Number(int n){
			a=n;
		}
		Number(Number &object){
			cout<<"Copy constructor called\n";
			a=object.a;
		}
		void display(){
			cout<<"The number for this object this "<<a<<endl;
		}
};

int main()
{
	Number n,m,o(5),n2;
	
	o.display();
	n.display();
	m.display();
	
	Number n1(o);
	n1.display();
	
	n2=n;
	n2.display();
	
	Number n3=n;
	n3.display();
	
	return 0;
}

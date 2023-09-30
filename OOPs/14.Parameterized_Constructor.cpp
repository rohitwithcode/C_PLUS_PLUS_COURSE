#include<iostream>
using namespace std;

class Complex{
	int a,b;
	public :
		Complex(void);
		Complex(int a1,int b1){ // Parameterized Construtor
			a=a1;
			b=b1;
		}
		void print()
		{
			cout<<"The value of a "<<a<<" and "<<b<<endl;
		}
};
Complex :: Complex(void){
	a=40;
	b=43;
}
int main()
{
//	Implicit Call
	Complex c,c1(3,4);
	c.print();
	c1.print();
	
//	Explicit Call
	Complex a=Complex(4,5);
	a.print();
	return 0;
}
